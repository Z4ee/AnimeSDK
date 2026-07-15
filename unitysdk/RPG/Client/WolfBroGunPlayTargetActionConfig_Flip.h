#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"

class Class_1_482F3423DE650EAD;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FLIP_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x17427EC0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x17427F40)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_Flip_TypeDefinitionIndex = 65639;

	class WolfBroGunPlayTargetActionConfig_Flip : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Boolean waitFinish; // 0x18
		::System::Single speed; // 0x1C
		::System::Single loopDelay; // 0x20
		::System::Int32 loopCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FLIP__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_47FCE72550F759BF()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FLIP_METHOD_2_47FCE72550F759BF_OFFSET))(this);
		}
	};
}
