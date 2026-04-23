#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_12;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_CREATEBYPROTO_OFFSET UNITYSDK_OFFSET(0x9F9BE10)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_BOUGHTCARDINDICES_OFFSET UNITYSDK_OFFSET(0x9FB19E0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_CARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x9FB19C0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_DISCOUNTPERCENT_OFFSET UNITYSDK_OFFSET(0x9FB1A00)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x9FB19A0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_BOUGHTCARDINDICES_OFFSET UNITYSDK_OFFSET(0x9FB19F0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_CARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x9FB19D0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_DISCOUNTPERCENT_OFFSET UNITYSDK_OFFSET(0x9FB1A10)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x9FB19B0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9FB1980)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopRefreshInfo_TypeDefinitionIndex = 70081;

	class ShopRefreshInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _CardConfigs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _BoughtCardIndices_k__BackingField; // 0x18
		::System::UInt32 _RefreshCost_k__BackingField; // 0x20
		::System::UInt32 _DiscountPercent_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 refreshCost, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* cardConfigs, ::System::Collections::Generic::List_1<::System::UInt32>* boughtCardIndices, ::System::UInt32 discountPercent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO__CTOR_OFFSET))(this, refreshCost, cardConfigs, boughtCardIndices, discountPercent);
		}

		static ::RPG::Client::ChenLingBattle::ShopRefreshInfo* CreateByProto(::Class_1_4BC858D7C27E10ED_12* shopInfo)
		{
			return ((::RPG::Client::ChenLingBattle::ShopRefreshInfo*(*)(::Class_1_4BC858D7C27E10ED_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_CREATEBYPROTO_OFFSET))(shopInfo);
		}

		::System::UInt32 get_RefreshCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_REFRESHCOST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_CardConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_CARDCONFIGS_OFFSET))(this);
		}

		::System::Void set_CardConfigs(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_CARDCONFIGS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BoughtCardIndices()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_BOUGHTCARDINDICES_OFFSET))(this);
		}

		::System::Void set_BoughtCardIndices(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_BOUGHTCARDINDICES_OFFSET))(this, value);
		}

		::System::UInt32 get_DiscountPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_DISCOUNTPERCENT_OFFSET))(this);
		}

		::System::Void set_DiscountPercent(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_DISCOUNTPERCENT_OFFSET))(this, value);
		}
	};
}
