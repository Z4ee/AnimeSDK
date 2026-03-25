#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropStateItem; }

#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2_METHOD_3_1F00231B24AD54D4_OFFSET UNITYSDK_OFFSET(0x1759D9C0)
#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2_METHOD_3_2E06855AE39F4B65_OFFSET UNITYSDK_OFFSET(0x1759D940)
#define RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1759D990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAllPuzzleStatesClientOnlyV2_TypeDefinitionIndex = 19505;

	class ResetAllPuzzleStatesClientOnlyV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateItem*>* PuzzleStates; // 0x18
		::Il2CppArray<::RPG::GameCore::PropDestructItem*>* PuzzleDestructedStates; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E06855AE39F4B65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2_METHOD_3_2E06855AE39F4B65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F00231B24AD54D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETALLPUZZLESTATESCLIENTONLYV2_METHOD_3_1F00231B24AD54D4_OFFSET))(a1, a2);
		}
	};
}
