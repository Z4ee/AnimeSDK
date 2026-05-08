#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectSubpartClampMoving_Enum_3_AB30A3D91C592DE8.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15E4AF90)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x15E4AB30)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15E4AE00)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_METHOD_5_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x15E4BA50)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_METHOD_5_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x15E4B9F0)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15E4AD40)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15E4AA70)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING__CTOR_OFFSET UNITYSDK_OFFSET(0x15E4B970)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectSubpartClampMoving_TypeDefinitionIndex = 75316;

	class MonoEffectSubpartClampMoving : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoEffectSubpartClampMoving_Enum_3_AB30A3D91C592DE8 clampPositionMode; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::UnityEngine::Transform* clampChildMoveTransform; // 0x28
		::System::Single clampRatio; // 0x30
		::UnityEngine::AnimationCurve* distanceClampRatioCurve; // 0x38
		::System::Single miniMoveDistance; // 0x40
		::System::Boolean Field_5_6; // 0x44
		::UnityEngine::Vector3 Field_5_7; // 0x48
		::UnityEngine::Vector3 Field_5_8; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_METHOD_5_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_5_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_METHOD_5_F79D5EC57FBF426E_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_METHOD_5_F0BD65B017F2AC0B_OFFSET))(this);
		}
	};
}
