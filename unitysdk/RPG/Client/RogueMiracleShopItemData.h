#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0x1B9E6090)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0x1B9E6770)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B9E6750)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1B9E6520)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1B9E6710)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x1B9E6590)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B9E6150)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLEDESC_OFFSET UNITYSDK_OFFSET(0x1B9E62C0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLEIMGPATH_OFFSET UNITYSDK_OFFSET(0x1B9E63F0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0x1B9E6170)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1B9E6730)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1B9E66C0)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ALREADYHAVE_OFFSET UNITYSDK_OFFSET(0x1B9E6780)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B9E6760)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_CURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1B9E6720)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B9E6160)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA_SET_ORIGINCURRENCYITEM_OFFSET UNITYSDK_OFFSET(0x1B9E6740)
#define RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E5C60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleShopItemData_TypeDefinitionIndex = 67332;

	class RogueMiracleShopItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _OriginCurrencyItem_k__BackingField; // 0x10
		::RPG::Client::IRogueMiracle* _DisplayData; // 0x18
		::RPG::Client::ItemData* _CurrencyItem_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Boolean _AlreadyHave_k__BackingField; // 0x2C
		::System::Boolean _Available_k__BackingField; // 0x2D

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_C3162D2F7EA647B9* a2, ::Class_1_C3162D2F7EA647B9* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C3162D2F7EA647B9*, ::Class_1_C3162D2F7EA647B9*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPITEMDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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
