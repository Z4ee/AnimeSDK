#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropStateItem; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_C968D56833687429_OFFSET UNITYSDK_OFFSET(0x1A8D5BB0)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_D4A76DECA8716838_OFFSET UNITYSDK_OFFSET(0x1A8D5960)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_E8D7EBDEC2FE1141_OFFSET UNITYSDK_OFFSET(0x1A8D5920)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_FE4D109738BADBB6_OFFSET UNITYSDK_OFFSET(0x1A8D5B80)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D5950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAllPuzzleStateMatchedClientOnly_TypeDefinitionIndex = 20407;

	class ByIsAllPuzzleStateMatchedClientOnly : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateItem*>* PuzzleStates; // 0x20
		::Il2CppArray<::RPG::GameCore::PropDestructItem*>* PuzzleDestructedStates; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E8D7EBDEC2FE1141(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_E8D7EBDEC2FE1141_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4A76DECA8716838(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_D4A76DECA8716838_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE4D109738BADBB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_FE4D109738BADBB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C968D56833687429(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_C968D56833687429_OFFSET))(a1, a2);
		}
	};
}
