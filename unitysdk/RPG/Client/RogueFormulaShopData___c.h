#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaShopItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEFORMULASHOPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEB9AF0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDEB9B30)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA___C___REPORTBUYFORMULA_B__6_0_OFFSET UNITYSDK_OFFSET(0xDEB9B40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaShopData___c_TypeDefinitionIndex = 67329;

	class RogueFormulaShopData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueFormulaShopItemData*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaShopItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaShopData___c_TypeDefinitionIndex)->GetStaticField(0x63930);
		}
		static ::RPG::Client::RogueFormulaShopData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueFormulaShopData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaShopData___c_TypeDefinitionIndex)->GetStaticField(0x63938);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __ReportBuyFormula_b__6_0(::RPG::Client::RogueFormulaShopItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaShopItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA___C___REPORTBUYFORMULA_B__6_0_OFFSET))(this, a1);
		}
	};
}
