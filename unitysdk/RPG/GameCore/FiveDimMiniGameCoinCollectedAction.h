#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimMiniGameCoinType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_METHOD_4_470FD82836DCB890_OFFSET UNITYSDK_OFFSET(0x1D6C7CE0)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_METHOD_4_BF033FAA08CDA3F9_OFFSET UNITYSDK_OFFSET(0x1D6C7CA0)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C7CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiniGameCoinCollectedAction_TypeDefinitionIndex = 18747;

	class FiveDimMiniGameCoinCollectedAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimMiniGameCoinType CoinType; // 0x10
		::System::String* LevelVarName; // 0x18
		::System::Int16 Score; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BF033FAA08CDA3F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_METHOD_4_BF033FAA08CDA3F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_470FD82836DCB890(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_METHOD_4_470FD82836DCB890_OFFSET))(a1, a2);
		}
	};
}
