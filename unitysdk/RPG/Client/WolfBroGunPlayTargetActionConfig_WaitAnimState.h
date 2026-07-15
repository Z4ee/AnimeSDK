#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"

class Class_1_482F3423DE650EAD;
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_WAITANIMSTATE_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x174282C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_WAITANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17428340)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_WaitAnimState_TypeDefinitionIndex = 65636;

	class WolfBroGunPlayTargetActionConfig_WaitAnimState : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::String* stateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_WAITANIMSTATE__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_47FCE72550F759BF()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_WAITANIMSTATE_METHOD_2_47FCE72550F759BF_OFFSET))(this);
		}
	};
}
