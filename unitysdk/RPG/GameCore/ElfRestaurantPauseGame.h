#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFRESTAURANTPAUSEGAME_METHOD_3_3DDF1D576293E67F_OFFSET UNITYSDK_OFFSET(0x1BB39310)
#define RPG_GAMECORE_ELFRESTAURANTPAUSEGAME_METHOD_3_CCB271A451746324_OFFSET UNITYSDK_OFFSET(0x1BB39350)
#define RPG_GAMECORE_ELFRESTAURANTPAUSEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB39340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfRestaurantPauseGame_TypeDefinitionIndex = 23440;

	class ElfRestaurantPauseGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTPAUSEGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3DDF1D576293E67F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfRestaurantPauseGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfRestaurantPauseGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTPAUSEGAME_METHOD_3_3DDF1D576293E67F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCB271A451746324(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfRestaurantPauseGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfRestaurantPauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTPAUSEGAME_METHOD_3_CCB271A451746324_OFFSET))(a1, a2);
		}
	};
}
