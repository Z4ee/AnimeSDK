#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xB073F70)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0xB074430)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0xB074410)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xB074270)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xB0743D0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xB0742D0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB074030)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLEDESC_OFFSET UNITYSDK_OFFSET(0xB074110)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLEIMGPATH_OFFSET UNITYSDK_OFFSET(0xB0741C0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0xB074050)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xB0743F0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xB074380)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0xB074440)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0xB074420)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xB0743E0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB074040)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xB074400)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB073C70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleShopItemData_TypeDefinitionIndex = 62037;

	class RogueMiracleShopItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _OriginCurrencyItem_k__BackingField; // 0x10
		::RPG::Client::IRogueMiracle* _DisplayData; // 0x18
		::RPG::Client::ItemData* _CurrencyItem_k__BackingField; // 0x20
		::System::Boolean _Available_k__BackingField; // 0x28
		::System::Boolean _AlreadyHave_k__BackingField; // 0x29
		::System::UInt32 _ID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 id, ::Class_1_C74059A83466814F* price, ::Class_1_C74059A83466814F* originPrice, ::System::Boolean isAvailable, ::System::Boolean alreadyHave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C74059A83466814F*, ::Class_1_C74059A83466814F*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA__CTOR_OFFSET))(this, id, price, originPrice, isAvailable, alreadyHave);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* GetDescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GETDESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_MiracleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLENAME_OFFSET))(this);
		}

		::System::String* get_MiracleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLEDESC_OFFSET))(this);
		}

		::System::String* get_MiracleImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLEIMGPATH_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMiracleCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleLegacyDisplayRow* get_DisplayRow()
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_DISPLAYROW_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_PRICE_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_CurrencyItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_CURRENCYITEM_OFFSET))(this);
		}

		::System::Void set_CurrencyItem(::RPG::Client::ItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_CURRENCYITEM_OFFSET))(this, value);
		}

		::RPG::Client::ItemData* get_OriginCurrencyItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET))(this);
		}

		::System::Void set_OriginCurrencyItem(::RPG::Client::ItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET))(this, value);
		}

		::System::Boolean get_Available()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Void set_Available(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_AVAILABLE_OFFSET))(this, value);
		}

		::System::Boolean get_AlreadyHave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ALREADYHAVE_OFFSET))(this);
		}

		::System::Void set_AlreadyHave(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ALREADYHAVE_OFFSET))(this, value);
		}
	};
}
