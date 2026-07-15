#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimMiniGameCoinType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_METHOD_3_A36AA2BC1913634F_OFFSET UNITYSDK_OFFSET(0x1BEA0C00)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_METHOD_3_B7A476335291129A_OFFSET UNITYSDK_OFFSET(0x1BEA0BC0)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA0BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiniGameCoinCollectedAction_TypeDefinitionIndex = 18014;

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

		static ::System::Void Method_3_B7A476335291129A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_METHOD_3_B7A476335291129A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A36AA2BC1913634F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_METHOD_3_A36AA2BC1913634F_OFFSET))(a1, a2);
		}
	};
}
