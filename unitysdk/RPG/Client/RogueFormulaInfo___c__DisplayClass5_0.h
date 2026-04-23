#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E30585F0EAEFDF1E_10;
namespace RPG::Client { class RogueFormulaData; }

#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0367B0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS5_0__REMOVEFORMULAITEM_B__0_OFFSET UNITYSDK_OFFSET(0xB038D60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo___c__DisplayClass5_0_TypeDefinitionIndex = 61924;

	class RogueFormulaInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_1_E30585F0EAEFDF1E_10* formulaProto; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveFormulaItem_b__0(::RPG::Client::RogueFormulaData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS5_0__REMOVEFORMULAITEM_B__0_OFFSET))(this, item);
		}
	};
}
