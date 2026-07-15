#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG_METHOD_3_53DD3365BB689D34_OFFSET UNITYSDK_OFFSET(0x1B447AD0)
#define RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG_METHOD_3_9688010784CB1F58_OFFSET UNITYSDK_OFFSET(0x1B447A70)
#define RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B447AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFTeleportGateComponentConfig_TypeDefinitionIndex = 18167;

	class TRFTeleportGateComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 TeleportGateId; // 0x10
		::System::Boolean InitOn; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9688010784CB1F58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFTeleportGateComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFTeleportGateComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG_METHOD_3_9688010784CB1F58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_53DD3365BB689D34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFTeleportGateComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFTeleportGateComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG_METHOD_3_53DD3365BB689D34_OFFSET))(a1, a2);
		}
	};
}
