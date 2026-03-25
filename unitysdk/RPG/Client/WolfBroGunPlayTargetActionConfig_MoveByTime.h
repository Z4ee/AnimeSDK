#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_482F3423DE650EAD;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVEBYTIME_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xA794E10)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVEBYTIME_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xA794EA0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVEBYTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xA794E90)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_MoveByTime_TypeDefinitionIndex = 56107;

	class WolfBroGunPlayTargetActionConfig_MoveByTime : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Single time; // 0x18
		::UnityEngine::Vector2 target; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVEBYTIME__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_47FCE72550F759BF()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVEBYTIME_METHOD_2_47FCE72550F759BF_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_F8B73ECE7F883AC1()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVEBYTIME_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}
