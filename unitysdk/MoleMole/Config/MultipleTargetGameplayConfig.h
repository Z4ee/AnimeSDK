#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15AA05B440B92ECB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_209;
namespace MoleMole { class UIHollowWaterFlowWidgetController; }

#define MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1494C6A0)
#define MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1494C690)
#define MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1494C720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MultipleTargetGameplayConfig_TypeDefinitionIndex = 41991;

	class MultipleTargetGameplayConfig : public ::System::Object
	{
	public:
		::System::Single AccumulateSpeed; // 0x10
		::System::Int32 MinPoint; // 0x14
		::System::Int32 PunishPoint; // 0x18
		::System::Int32 InitialPoint; // 0x1C
		::System::Int32 MaxPoint; // 0x20
		::System::Int32 RewardPoint; // 0x24
		::System::Single NormalizedTargetRange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_15AA05B440B92ECB get_GameplayType()
		{
			return ((::Enum_3_15AA05B440B92ECB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_209* Create(::MoleMole::UIHollowWaterFlowWidgetController* controller)
		{
			return ((::Class_0_16E4307DCC419505_209*(*)(::PVOID, ::MoleMole::UIHollowWaterFlowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_CREATE_OFFSET))(this, controller);
		}
	};
}
