#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropStateItem; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_6528DDEA7129F677_OFFSET UNITYSDK_OFFSET(0x19559290)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_7C3F3873C0E09846_OFFSET UNITYSDK_OFFSET(0x19558FA0)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_D4A76DECA8716838_OFFSET UNITYSDK_OFFSET(0x19559070)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_EA7A7855934B3227_OFFSET UNITYSDK_OFFSET(0x19559310)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x19559020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAllPuzzleStateMatchedClientOnly_TypeDefinitionIndex = 20035;

	class ByIsAllPuzzleStateMatchedClientOnly : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateItem*>* PuzzleStates; // 0x20
		::Il2CppArray<::RPG::GameCore::PropDestructItem*>* PuzzleDestructedStates; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7C3F3873C0E09846(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_7C3F3873C0E09846_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4A76DECA8716838(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_D4A76DECA8716838_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6528DDEA7129F677(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_6528DDEA7129F677_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA7A7855934B3227(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_EA7A7855934B3227_OFFSET))(a1, a2);
		}
	};
}
