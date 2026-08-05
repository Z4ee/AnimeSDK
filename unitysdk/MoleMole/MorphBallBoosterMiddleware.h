#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_4_33FE5E9C7B01C54A;
class Class_4_C782F806A9837739;
class Class_4_CAEAB400BA2051D7;
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE_BOOST_OFFSET UNITYSDK_OFFSET(0x136E4450)
#define MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE_CAPTURE_OFFSET UNITYSDK_OFFSET(0x136E3850)
#define MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE_GET_BOOSTFORWARD_OFFSET UNITYSDK_OFFSET(0x136E32A0)
#define MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE_GET_BOOSTSPEED_OFFSET UNITYSDK_OFFSET(0x136E3400)
#define MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE_RELEASE_OFFSET UNITYSDK_OFFSET(0x136E3410)
#define MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE__CTOR_OFFSET UNITYSDK_OFFSET(0x136E4F90)

namespace MoleMole
{
	inline static constexpr unsigned int MorphBallBoosterMiddleware_TypeDefinitionIndex = 42092;

	class MorphBallBoosterMiddleware : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Transform* _boost; // 0x58
		::System::Single _boostSpeed; // 0x60
		::MoleMole::EntityHandle _captured; // 0x68
		::Class_4_C782F806A9837739* _envForceConfig; // 0x78
		::Class_4_33FE5E9C7B01C54A* _controlForceControl; // 0x80
		::Class_4_CAEAB400BA2051D7* _setPositionAndForwardControl; // 0x88
		::System::UInt32 _capturedFrameCount; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_BoostForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE_GET_BOOSTFORWARD_OFFSET))(this);
		}

		::System::Single get_BoostSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE_GET_BOOSTSPEED_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE_RELEASE_OFFSET))(this);
		}

		::System::Void Capture(::MoleMole::EntityHandle target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE_CAPTURE_OFFSET))(this, target);
		}

		::System::Void Boost(::System::Nullable_1<::UnityEngine::Vector3> overrideDir, ::System::Nullable_1<::System::Single> overrideSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLBOOSTERMIDDLEWARE_BOOST_OFFSET))(this, overrideDir, overrideSpeed);
		}
	};
}
