#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class RestaurantTradeOrderRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFTRADEORDERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18D834B0)
#define RPG_CLIENT_ELFTRADEORDERDATA_GETCOSTPRODUCTIDS_OFFSET UNITYSDK_OFFSET(0x18D84E80)
#define RPG_CLIENT_ELFTRADEORDERDATA_GETREWARDPRODUCTIDS_OFFSET UNITYSDK_OFFSET(0x18D84FC0)
#define RPG_CLIENT_ELFTRADEORDERDATA_GET_COSTS_OFFSET UNITYSDK_OFFSET(0x18D85480)
#define RPG_CLIENT_ELFTRADEORDERDATA_GET_CUSTOMERIMGPATH_OFFSET UNITYSDK_OFFSET(0x18D85580)
#define RPG_CLIENT_ELFTRADEORDERDATA_GET_DAYSREMAIN_OFFSET UNITYSDK_OFFSET(0x18D85460)
#define RPG_CLIENT_ELFTRADEORDERDATA_GET_HASSHOPONLYPRODUCT_OFFSET UNITYSDK_OFFSET(0x18D83F90)
#define RPG_CLIENT_ELFTRADEORDERDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x18D85440)
#define RPG_CLIENT_ELFTRADEORDERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18D854C0)
#define RPG_CLIENT_ELFTRADEORDERDATA_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x18D854A0)
#define RPG_CLIENT_ELFTRADEORDERDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x18D84E20)
#define RPG_CLIENT_ELFTRADEORDERDATA_ISSTRICTLYBENEFICIALTOCURRENTTARGET_OFFSET UNITYSDK_OFFSET(0x18D85100)
#define RPG_CLIENT_ELFTRADEORDERDATA_SET_COSTS_OFFSET UNITYSDK_OFFSET(0x18D85490)
#define RPG_CLIENT_ELFTRADEORDERDATA_SET_DAYSREMAIN_OFFSET UNITYSDK_OFFSET(0x18D85470)
#define RPG_CLIENT_ELFTRADEORDERDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x18D85450)
#define RPG_CLIENT_ELFTRADEORDERDATA_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x18D854B0)
#define RPG_CLIENT_ELFTRADEORDERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x18D83460)
#define RPG_CLIENT_ELFTRADEORDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18D84E10)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfTradeOrderData_TypeDefinitionIndex = 60969;

	class ElfTradeOrderData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Rewards_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Costs_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::UInt32 _DaysRemain_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfTradeOrderData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfTradeOrderData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCostProductIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_GETCOSTPRODUCTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRewardProductIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_GETREWARDPRODUCTIDS_OFFSET))(this);
		}

		::System::Boolean IsStrictlyBeneficialToCurrentTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_ISSTRICTLYBENEFICIALTOCURRENTTARGET_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RestaurantTradeOrderRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantTradeOrderRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_DaysRemain()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_GET_DAYSREMAIN_OFFSET))(this);
		}

		::System::Void set_DaysRemain(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_SET_DAYSREMAIN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_Costs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_GET_COSTS_OFFSET))(this);
		}

		::System::Void set_Costs(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_SET_COSTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_Rewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_GET_REWARDS_OFFSET))(this);
		}

		::System::Void set_Rewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_SET_REWARDS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_CustomerImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_GET_CUSTOMERIMGPATH_OFFSET))(this);
		}

		::System::Boolean get_HasShopOnlyProduct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTRADEORDERDATA_GET_HASSHOPONLYPRODUCT_OFFSET))(this);
		}
	};
}
