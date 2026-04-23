#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }

#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB036BA0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0__GETROGUEFORMULADATA_B__0_OFFSET UNITYSDK_OFFSET(0xB038D90)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0__GETROGUEFORMULADATA_B__1_OFFSET UNITYSDK_OFFSET(0xB038DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo___c__DisplayClass8_0_TypeDefinitionIndex = 61925;

	class RogueFormulaInfo___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 formulaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRogueFormulaData_b__0(::RPG::Client::RogueFormulaData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0__GETROGUEFORMULADATA_B__0_OFFSET))(this, item);
		}

		::System::Boolean _GetRogueFormulaData_b__1(::RPG::Client::RogueFormulaData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS8_0__GETROGUEFORMULADATA_B__1_OFFSET))(this, item);
		}
	};
}
