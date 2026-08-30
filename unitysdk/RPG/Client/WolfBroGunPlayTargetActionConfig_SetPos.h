#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_482F3423DE650EAD;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x168115F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x16811670)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_SetPos_TypeDefinitionIndex = 68672;

	class WolfBroGunPlayTargetActionConfig_SetPos : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::UnityEngine::Vector2 pos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_47FCE72550F759BF()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS_METHOD_2_47FCE72550F759BF_OFFSET))(this);
		}
	};
}
