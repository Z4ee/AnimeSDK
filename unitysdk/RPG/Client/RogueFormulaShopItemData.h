#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueFormulaData; }

#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GETPREVIEWFORMULADATA_OFFSET UNITYSDK_OFFSET(0x1A45A170)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0x1A45A240)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A45A220)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1A45A1E0)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GET_FORMULAID_OFFSET UNITYSDK_OFFSET(0x1A45A1C0)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1A45A200)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_SET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0x1A45A250)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_SET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A45A230)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_SET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1A45A1F0)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_SET_FORMULAID_OFFSET UNITYSDK_OFFSET(0x1A45A1D0)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1A45A210)
#define RPG_CLIENT_ROGUEFORMULASHOPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4591E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaShopItemData_TypeDefinitionIndex = 64335;

	class RogueFormulaShopItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _CurrencyItem_k__BackingField; // 0x10
		::RPG::Client::ItemData* _OriginCurrencyItem_k__BackingField; // 0x18
		::System::UInt32 _FormulaID_k__BackingField; // 0x20
		::System::Boolean _AlreadyHave_k__BackingField; // 0x24
		::System::Boolean _Available_k__BackingField; // 0x25

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_C3162D2F7EA647B9* a2, ::Class_1_C3162D2F7EA647B9* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C3162D2F7EA647B9*, ::Class_1_C3162D2F7EA647B9*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::RogueFormulaData* GetPreviewFormulaData()
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GETPREVIEWFORMULADATA_OFFSET))(this);
		}

		::System::UInt32 get_FormulaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GET_FORMULAID_OFFSET))(this);
		}

		::System::Void set_FormulaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_SET_FORMULAID_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_CurrencyItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GET_CURRENCYITEM_OFFSET))(this);
		}

		::System::Void set_CurrencyItem(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_SET_CURRENCYITEM_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_OriginCurrencyItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET))(this);
		}

		::System::Void set_OriginCurrencyItem(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET))(this, a1);
		}

		::System::Boolean get_Available()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Void set_Available(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_SET_AVAILABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_AlreadyHave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_GET_ALREADYHAVE_OFFSET))(this);
		}

		::System::Void set_AlreadyHave(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPITEMDATA_SET_ALREADYHAVE_OFFSET))(this, a1);
		}
	};
}
