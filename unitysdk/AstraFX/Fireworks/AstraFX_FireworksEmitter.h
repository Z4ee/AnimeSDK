#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AstraFX/Fireworks/LaunchMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace AstraFX::Fireworks { class AstraFX_FireworksEmitterBehavior; }
namespace AstraFX::Fireworks { class AstraFX_FireworksMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1596FAD0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_GETWORLDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1596F710)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_GET_NORMALIZEDDIRECTION_OFFSET UNITYSDK_OFFSET(0x15970C40)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_GET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x15970D10)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_METHOD_7_2358B445A246BBEC_OFFSET UNITYSDK_OFFSET(0x15970D70)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_METHOD_7_79FDDC589C22BB72_OFFSET UNITYSDK_OFFSET(0x15970DB0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15970E30)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int AstraFX_FireworksEmitter_TypeDefinitionIndex = 49452;

	class AstraFX_FireworksEmitter : public ::RPG::Client::TAMonoPlugin_1<::AstraFX::Fireworks::AstraFX_FireworksEmitterBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* fireworkTypeIndices; // 0x30
		::AstraFX::Fireworks::LaunchMode launchMode; // 0x38
		::UnityEngine::Vector3 direction; // 0x3C
		::System::Single coneAngle; // 0x48
		::System::Single launchInterval; // 0x4C
		::System::Int32 launchCount; // 0x50
		::System::Single weight; // 0x54
		::System::Single timer; // 0x58
		::System::Int32 sequenceIndex; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_NormalizedDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_GET_NORMALIZEDDIRECTION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_WorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_GET_WORLDPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLocalPosition(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_GETLOCALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetWorldDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_GETWORLDDIRECTION_OFFSET))(this);
		}

		::AstraFX::Fireworks::AstraFX_FireworksMonoPlugin* Method_7_2358B445A246BBEC()
		{
			return ((::AstraFX::Fireworks::AstraFX_FireworksMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_METHOD_7_2358B445A246BBEC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>* Method_7_79FDDC589C22BB72()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTER_METHOD_7_79FDDC589C22BB72_OFFSET))(this);
		}
	};
}
