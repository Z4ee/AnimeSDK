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

#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xC7C4560)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0xC7C4A30)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0xC7C4A10)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xC7C4860)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xC7C49D0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xC7C48D0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC7C4620)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLEDESC_OFFSET UNITYSDK_OFFSET(0xC7C4700)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLEIMGPATH_OFFSET UNITYSDK_OFFSET(0xC7C47B0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0xC7C4640)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xC7C49F0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xC7C4980)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0xC7C4A40)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0xC7C4A20)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xC7C49E0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC7C4630)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0xC7C4A00)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7C4130)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleShopItemData_TypeDefinitionIndex = 62970;

	class RogueMiracleShopItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _CurrencyItem_k__BackingField; // 0x10
		::RPG::Client::IRogueMiracle* _DisplayData; // 0x18
		::RPG::Client::ItemData* _OriginCurrencyItem_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Boolean _Available_k__BackingField; // 0x2C
		::System::Boolean _AlreadyHave_k__BackingField; // 0x2D

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_C74059A83466814F* a2, ::Class_1_C74059A83466814F* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C74059A83466814F*, ::Class_1_C74059A83466814F*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* GetDescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GETDESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ID_OFFSET))(this, a1);
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

		::System::Void set_CurrencyItem(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_CURRENCYITEM_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_OriginCurrencyItem()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET))(this);
		}

		::System::Void set_OriginCurrencyItem(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET))(this, a1);
		}

		::System::Boolean get_Available()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Void set_Available(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_AVAILABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_AlreadyHave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ALREADYHAVE_OFFSET))(this);
		}

		::System::Void set_AlreadyHave(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ALREADYHAVE_OFFSET))(this, a1);
		}
	};
}
