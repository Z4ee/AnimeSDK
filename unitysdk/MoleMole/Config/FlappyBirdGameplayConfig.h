#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15AA05B440B92ECB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_209;
namespace MoleMole { class UIHollowWaterFlowWidgetController; }

#define MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xFB0F300)
#define MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xFB0F2F0)
#define MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0F380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FlappyBirdGameplayConfig_TypeDefinitionIndex = 65423;

	class FlappyBirdGameplayConfig : public ::System::Object
	{
	public:
		::System::Single ClickAcceleration; // 0x10
		::System::Single MinSpeed; // 0x14
		::System::Single Gravity; // 0x18
		::System::Single MaxSpeed; // 0x1C
		::System::Single NormalizedTargetRange; // 0x20
		::System::Single InitialPoint; // 0x24
		::System::Single GainPointSpeed; // 0x28
		::System::Single LosePointSpeed; // 0x2C
		::System::Boolean NonNegativeBeforeClickMode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_15AA05B440B92ECB get_GameplayType()
		{
			return ((::Enum_3_15AA05B440B92ECB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_209* Create(::MoleMole::UIHollowWaterFlowWidgetController* controller)
		{
			return ((::Class_0_16E4307DCC419505_209*(*)(::PVOID, ::MoleMole::UIHollowWaterFlowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_CREATE_OFFSET))(this, controller);
		}
	};
}
