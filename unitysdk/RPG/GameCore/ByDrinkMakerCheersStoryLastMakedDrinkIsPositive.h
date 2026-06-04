#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_METHOD_4_07B71B30FEBD4DB1_OFFSET UNITYSDK_OFFSET(0x195478A0)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_METHOD_4_394280C9472C08BD_OFFSET UNITYSDK_OFFSET(0x19547820)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_METHOD_4_D973F3B160988C88_OFFSET UNITYSDK_OFFSET(0x19547610)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_METHOD_4_E81942FA86F181E2_OFFSET UNITYSDK_OFFSET(0x195476E0)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19547690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDrinkMakerCheersStoryLastMakedDrinkIsPositive_TypeDefinitionIndex = 20499;

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

		static ::System::Void Method_4_394280C9472C08BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_METHOD_4_394280C9472C08BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_07B71B30FEBD4DB1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_METHOD_4_07B71B30FEBD4DB1_OFFSET))(a1, a2);
		}
	};
}
