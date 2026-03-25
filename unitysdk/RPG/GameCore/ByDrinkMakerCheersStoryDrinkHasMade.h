#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_6D3C4CD02A62E861_OFFSET UNITYSDK_OFFSET(0x17020E10)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_DB49DA9C510C753F_OFFSET UNITYSDK_OFFSET(0x17020EE0)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE__CTOR_OFFSET UNITYSDK_OFFSET(0x17020E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDrinkMakerCheersStoryDrinkHasMade_TypeDefinitionIndex = 19884;

	class ByDrinkMakerCheersStoryDrinkHasMade : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean IsFirstDrinkInGroup; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6D3C4CD02A62E861(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_6D3C4CD02A62E861_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB49DA9C510C753F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_DB49DA9C510C753F_OFFSET))(a1, a2);
		}
	};
}
