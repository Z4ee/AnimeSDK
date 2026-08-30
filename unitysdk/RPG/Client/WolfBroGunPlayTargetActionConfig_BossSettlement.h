#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"

class Class_1_482F3423DE650EAD;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSSETTLEMENT_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x16811170)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x168111F0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_BossSettlement_TypeDefinitionIndex = 68681;

	class WolfBroGunPlayTargetActionConfig_BossSettlement : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Single targetScore; // 0x18
		::System::Single removeDelay; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSSETTLEMENT__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_47FCE72550F759BF()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSSETTLEMENT_METHOD_2_47FCE72550F759BF_OFFSET))(this);
		}
	};
}
