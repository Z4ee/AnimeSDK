#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_METHOD_3_7F5C6007E715476B_OFFSET UNITYSDK_OFFSET(0x177A7150)
#define RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_METHOD_3_9016A03EEA1B45E8_OFFSET UNITYSDK_OFFSET(0x177A7270)
#define RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177A7250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFSwitchComponentConfig_TypeDefinitionIndex = 17347;

	class TRFSwitchComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 TeleportGateId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F5C6007E715476B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFSwitchComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFSwitchComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_METHOD_3_7F5C6007E715476B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9016A03EEA1B45E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFSwitchComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFSwitchComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_METHOD_3_9016A03EEA1B45E8_OFFSET))(a1, a2);
		}
	};
}
