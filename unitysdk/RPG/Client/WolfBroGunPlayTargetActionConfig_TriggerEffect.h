#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_482F3423DE650EAD;
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_TRIGGEREFFECT_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xE42E220)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_TRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xE42E2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_TriggerEffect_TypeDefinitionIndex = 68678;

	class WolfBroGunPlayTargetActionConfig_TriggerEffect : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::String* effectPath; // 0x18
		::System::String* attachPoint; // 0x20
		::System::Boolean followPoint; // 0x28
		::UnityEngine::Vector3 direction; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_TRIGGEREFFECT__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_47FCE72550F759BF()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_TRIGGEREFFECT_METHOD_2_47FCE72550F759BF_OFFSET))(this);
		}
	};
}
