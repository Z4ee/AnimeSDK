#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_METHOD_3_5F1EFCFAC75116B4_OFFSET UNITYSDK_OFFSET(0x1E1601A0)
#define RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_METHOD_3_9016A03EEA1B45E8_OFFSET UNITYSDK_OFFSET(0x1E160270)
#define RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E160260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFSwitchComponentConfig_TypeDefinitionIndex = 18690;

	class TRFSwitchComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 TeleportGateId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F1EFCFAC75116B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFSwitchComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFSwitchComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_METHOD_3_5F1EFCFAC75116B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9016A03EEA1B45E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFSwitchComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFSwitchComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_METHOD_3_9016A03EEA1B45E8_OFFSET))(a1, a2);
		}
	};
}
