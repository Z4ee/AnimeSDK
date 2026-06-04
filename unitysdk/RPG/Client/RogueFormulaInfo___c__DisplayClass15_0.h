#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }

#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC783600)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS15_0__GETSORTEDSHOWNFORMULASBYSTATE_B__0_OFFSET UNITYSDK_OFFSET(0xC7854B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo___c__DisplayClass15_0_TypeDefinitionIndex = 62855;

	class RogueFormulaInfo___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Boolean isActivated; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSortedShownFormulasByState_b__0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS15_0__GETSORTEDSHOWNFORMULASBYSTATE_B__0_OFFSET))(this, a1);
		}
	};
}
