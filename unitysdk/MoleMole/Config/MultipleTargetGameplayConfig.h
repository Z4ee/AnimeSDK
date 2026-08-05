#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15AA05B440B92ECB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_228;
namespace MoleMole { class UIHollowWaterFlowWidgetController; }

#define MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1B4EB3D0)
#define MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1B4EB3C0)
#define MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EB450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MultipleTargetGameplayConfig_TypeDefinitionIndex = 70455;

	class MultipleTargetGameplayConfig : public ::System::Object
	{
	public:
		::System::Int32 RewardPoint; // 0x10
		::System::Int32 MaxPoint; // 0x14
		::System::Single AccumulateSpeed; // 0x18
		::System::Int32 InitialPoint; // 0x1C
		::System::Single NormalizedTargetRange; // 0x20
		::System::Int32 PunishPoint; // 0x24
		::System::Int32 MinPoint; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_15AA05B440B92ECB get_GameplayType()
		{
			return ((::Enum_3_15AA05B440B92ECB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_228* Create(::MoleMole::UIHollowWaterFlowWidgetController* controller)
		{
			return ((::Class_0_16E4307DCC419505_228*(*)(::PVOID, ::MoleMole::UIHollowWaterFlowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_CREATE_OFFSET))(this, controller);
		}
	};
}
