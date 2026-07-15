#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_333B902B2174BECA_2;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_CREATEBYPROTO_OFFSET UNITYSDK_OFFSET(0x1AFE2430)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_BOUGHTCARDINDICES_OFFSET UNITYSDK_OFFSET(0x1AFE4530)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_CARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1AFE4510)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_DISCOUNTPERCENT_OFFSET UNITYSDK_OFFSET(0x1AFE4550)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1AFE44F0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_BOUGHTCARDINDICES_OFFSET UNITYSDK_OFFSET(0x1AFE4540)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_CARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1AFE4520)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_DISCOUNTPERCENT_OFFSET UNITYSDK_OFFSET(0x1AFE4560)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1AFE4500)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE44D0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopRefreshInfo_TypeDefinitionIndex = 72406;

	class ShopRefreshInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _BoughtCardIndices_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _CardConfigs_k__BackingField; // 0x18
		::System::UInt32 _DiscountPercent_k__BackingField; // 0x20
		::System::UInt32 _RefreshCost_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::Client::ChenLingBattle::ShopRefreshInfo* CreateByProto(::Class_1_333B902B2174BECA_2* a1)
		{
			return ((::RPG::Client::ChenLingBattle::ShopRefreshInfo*(*)(::Class_1_333B902B2174BECA_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_CREATEBYPROTO_OFFSET))(a1);
		}

		::System::UInt32 get_RefreshCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_REFRESHCOST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_CardConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_CARDCONFIGS_OFFSET))(this);
		}

		::System::Void set_CardConfigs(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_CARDCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BoughtCardIndices()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_BOUGHTCARDINDICES_OFFSET))(this);
		}

		::System::Void set_BoughtCardIndices(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_BOUGHTCARDINDICES_OFFSET))(this, a1);
		}

		::System::UInt32 get_DiscountPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_DISCOUNTPERCENT_OFFSET))(this);
		}

		::System::Void set_DiscountPercent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_DISCOUNTPERCENT_OFFSET))(this, a1);
		}
	};
}
