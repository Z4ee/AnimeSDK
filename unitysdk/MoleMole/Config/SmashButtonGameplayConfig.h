#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15AA05B440B92ECB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_228;
namespace MoleMole { class UIHollowWaterFlowWidgetController; }

#define MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1626C9A0)
#define MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1626C990)
#define MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1626CA20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SmashButtonGameplayConfig_TypeDefinitionIndex = 58309;

	class SmashButtonGameplayConfig : public ::System::Object
	{
	public:
		::System::Single MinSpeed; // 0x10
		::System::Single MaxSpeed; // 0x14
		::System::Single InitialPoint; // 0x18
		::System::Single ClickAcceleration; // 0x1C
		::System::Single Gravity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_15AA05B440B92ECB get_GameplayType()
		{
			return ((::Enum_3_15AA05B440B92ECB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_228* Create(::MoleMole::UIHollowWaterFlowWidgetController* controller)
		{
			return ((::Class_0_16E4307DCC419505_228*(*)(::PVOID, ::MoleMole::UIHollowWaterFlowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG_CREATE_OFFSET))(this, controller);
		}
	};
}
