#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_6448967595455695_OFFSET UNITYSDK_OFFSET(0x1A8BEA10)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_B32E3A6D3AA67E12_OFFSET UNITYSDK_OFFSET(0x1A8BEA40)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_DB49DA9C510C753F_OFFSET UNITYSDK_OFFSET(0x1A8BE870)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_DF2F03965A40C15E_OFFSET UNITYSDK_OFFSET(0x1A8BE830)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BE860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDrinkMakerCheersStoryDrinkHasMade_TypeDefinitionIndex = 20915;

	class ByDrinkMakerCheersStoryDrinkHasMade : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean IsFirstDrinkInGroup; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DF2F03965A40C15E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_DF2F03965A40C15E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB49DA9C510C753F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_DB49DA9C510C753F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6448967595455695(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_6448967595455695_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B32E3A6D3AA67E12(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_METHOD_4_B32E3A6D3AA67E12_OFFSET))(a1, a2);
		}
	};
}
