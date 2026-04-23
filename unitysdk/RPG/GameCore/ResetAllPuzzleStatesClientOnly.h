#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropStateItem; }

#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_METHOD_3_850DC69B150A6049_OFFSET UNITYSDK_OFFSET(0x18CA96C0)
#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_METHOD_3_C95BEBC12C0330C0_OFFSET UNITYSDK_OFFSET(0x18CA9740)
#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA9710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAllPuzzleStatesClientOnly_TypeDefinitionIndex = 20179;

	class ResetAllPuzzleStatesClientOnly : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateItem*>* PuzzleStates; // 0x18
		::Il2CppArray<::RPG::GameCore::PropDestructItem*>* PuzzleDestructedStates; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_850DC69B150A6049(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_METHOD_3_850DC69B150A6049_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C95BEBC12C0330C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLY_METHOD_3_C95BEBC12C0330C0_OFFSET))(a1, a2);
		}
	};
}
