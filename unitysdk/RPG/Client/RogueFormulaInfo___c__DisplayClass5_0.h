#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BFB07C3AB2D97E4_1;
namespace RPG::Client { class RogueFormulaData; }

#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4544E0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS5_0__REMOVEFORMULAITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1A457E50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo___c__DisplayClass5_0_TypeDefinitionIndex = 64224;

	class RogueFormulaInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_1_7BFB07C3AB2D97E4_1* formulaProto; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveFormulaItem_b__0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS5_0__REMOVEFORMULAITEM_B__0_OFFSET))(this, a1);
		}
	};
}
