#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_METHOD_4_D973F3B160988C88_OFFSET UNITYSDK_OFFSET(0x17021080)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_METHOD_4_E81942FA86F181E2_OFFSET UNITYSDK_OFFSET(0x17021150)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17021100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDrinkMakerCheersStoryLastMakedDrinkIsPositive_TypeDefinitionIndex = 19883;

	class ByDrinkMakerCheersStoryLastMakedDrinkIsPositive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D973F3B160988C88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_METHOD_4_D973F3B160988C88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E81942FA86F181E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_METHOD_4_E81942FA86F181E2_OFFSET))(a1, a2);
		}
	};
}
