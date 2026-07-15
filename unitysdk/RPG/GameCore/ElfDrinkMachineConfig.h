#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFDRINKMACHINECONFIG_METHOD_3_420011697488CB0F_OFFSET UNITYSDK_OFFSET(0x1BB36330)
#define RPG_GAMECORE_ELFDRINKMACHINECONFIG_METHOD_3_60B4DF7F3A810887_OFFSET UNITYSDK_OFFSET(0x1BB36390)
#define RPG_GAMECORE_ELFDRINKMACHINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB36380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfDrinkMachineConfig_TypeDefinitionIndex = 17750;

	class ElfDrinkMachineConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 Price; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDRINKMACHINECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_420011697488CB0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfDrinkMachineConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfDrinkMachineConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDRINKMACHINECONFIG_METHOD_3_420011697488CB0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_60B4DF7F3A810887(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfDrinkMachineConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfDrinkMachineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDRINKMACHINECONFIG_METHOD_3_60B4DF7F3A810887_OFFSET))(a1, a2);
		}
	};
}
