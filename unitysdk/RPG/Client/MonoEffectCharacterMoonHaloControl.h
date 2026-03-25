#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_33E112708C5C288F;
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x9C7B8C0)
#define RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9C7BAA0)
#define RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9C7BA10)
#define RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9C7B930)
#define RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9C7B990)
#define RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9C7BB20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectCharacterMoonHaloControl_TypeDefinitionIndex = 57932;

	class MonoEffectCharacterMoonHaloControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isFullMoon; // 0x18
		::System::Boolean isADVMode; // 0x19
		::UnityEngine::Renderer* _CharaRenderer; // 0x20
		::System::Single _MoonHalowParam; // 0x28
		::UnityEngine::Vector3 _MoonHaloRange; // 0x2C
		::Class_2_33E112708C5C288F* Field_5_5; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTCHARACTERMOONHALOCONTROL_LATEUPDATE_OFFSET))(this);
		}
	};
}
