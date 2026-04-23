#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropStateItem; }

#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_5E06413C2821A206_OFFSET UNITYSDK_OFFSET(0x1874DD60)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_98BE69EEE94A42F0_OFFSET UNITYSDK_OFFSET(0x1874DC90)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1874DD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAllPuzzleStateMatchedClientOnly_TypeDefinitionIndex = 20178;

	class ByIsAllPuzzleStateMatchedClientOnly : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateItem*>* PuzzleStates; // 0x20
		::Il2CppArray<::RPG::GameCore::PropDestructItem*>* PuzzleDestructedStates; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_98BE69EEE94A42F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_98BE69EEE94A42F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E06413C2821A206(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_METHOD_4_5E06413C2821A206_OFFSET))(a1, a2);
		}
	};
}
