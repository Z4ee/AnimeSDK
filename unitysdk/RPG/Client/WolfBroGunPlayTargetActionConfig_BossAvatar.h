#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"

class Class_1_482F3423DE650EAD;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSAVATAR_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xE42DC80)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xE42DD00)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_BossAvatar_TypeDefinitionIndex = 68683;

	class WolfBroGunPlayTargetActionConfig_BossAvatar : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Boolean isRed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSAVATAR__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_47FCE72550F759BF()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSAVATAR_METHOD_2_47FCE72550F759BF_OFFSET))(this);
		}
	};
}
