#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFRESTAURANTPAUSEGAME_METHOD_3_41ADBB6A08AAFE55_OFFSET UNITYSDK_OFFSET(0x17190F00)
#define RPG_GAMECORE_ELFRESTAURANTPAUSEGAME_METHOD_3_CCB271A451746324_OFFSET UNITYSDK_OFFSET(0x17190F80)
#define RPG_GAMECORE_ELFRESTAURANTPAUSEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x17190F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfRestaurantPauseGame_TypeDefinitionIndex = 22339;

	class ElfRestaurantPauseGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTPAUSEGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_41ADBB6A08AAFE55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfRestaurantPauseGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfRestaurantPauseGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTPAUSEGAME_METHOD_3_41ADBB6A08AAFE55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCB271A451746324(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfRestaurantPauseGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfRestaurantPauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTPAUSEGAME_METHOD_3_CCB271A451746324_OFFSET))(a1, a2);
		}
	};
}
