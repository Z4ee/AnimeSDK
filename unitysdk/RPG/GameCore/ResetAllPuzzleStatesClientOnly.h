#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropStateItem; }

#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_METHOD_3_07B8DD014FCD9563_OFFSET UNITYSDK_OFFSET(0x1D01AC80)
#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_METHOD_3_964181E194A94DD6_OFFSET UNITYSDK_OFFSET(0x1D01ACC0)
#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01ACB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAllPuzzleStatesClientOnly_TypeDefinitionIndex = 20408;

	class ResetAllPuzzleStatesClientOnly : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateItem*>* PuzzleStates; // 0x18
		::Il2CppArray<::RPG::GameCore::PropDestructItem*>* PuzzleDestructedStates; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07B8DD014FCD9563(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_METHOD_3_07B8DD014FCD9563_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_964181E194A94DD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_METHOD_3_964181E194A94DD6_OFFSET))(a1, a2);
		}
	};
}
