#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }

#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB037070)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS13_0__ISFORMULAACHIEVED_B__0_OFFSET UNITYSDK_OFFSET(0xB038CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo___c__DisplayClass13_0_TypeDefinitionIndex = 61921;

	class RogueFormulaInfo___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 formulaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsFormulaAchieved_b__0(::RPG::Client::RogueFormulaData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS13_0__ISFORMULAACHIEVED_B__0_OFFSET))(this, data);
		}
	};
}
