#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09751665EAC0FA4D_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETBESTPRODUCINGPRODUCTIDS_OFFSET UNITYSDK_OFFSET(0x18D6B2F0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETBESTSELLINGRECIPEIDS_OFFSET UNITYSDK_OFFSET(0x18D6AA70)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETHIGHESTSELLPRICERECIPEIDS_OFFSET UNITYSDK_OFFSET(0x18D6AF90)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETPRODUCTPRODUCECOUNT_OFFSET UNITYSDK_OFFSET(0x18D6B5C0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETRECIPEMAXPRICE_OFFSET UNITYSDK_OFFSET(0x18D6B260)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETRECIPESELLCOUNT_OFFSET UNITYSDK_OFFSET(0x18D6AF00)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETTOTALPRODUCECOUNT_OFFSET UNITYSDK_OFFSET(0x18D6B650)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETTOTALRECIPECOUNT_OFFSET UNITYSDK_OFFSET(0x18D6AD40)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_SINGLEDAYMAXREVENUE_OFFSET UNITYSDK_OFFSET(0x18D6AA10)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_TOTALCUSTOMERS_OFFSET UNITYSDK_OFFSET(0x18D6AA50)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_TOTALREVENUE_OFFSET UNITYSDK_OFFSET(0x18D6AA30)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_SINGLEDAYMAXREVENUE_OFFSET UNITYSDK_OFFSET(0x18D6AA20)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_TOTALCUSTOMERS_OFFSET UNITYSDK_OFFSET(0x18D6AA60)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_TOTALREVENUE_OFFSET UNITYSDK_OFFSET(0x18D6AA40)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SYNC_OFFSET UNITYSDK_OFFSET(0x18D66390)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x18D68C80)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantManageStatistics_TypeDefinitionIndex = 60953;

	class ElfRestaurantManageStatistics : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _ProductProduceCountDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _RecipeMaxPriceDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _RecipeSellCountDict; // 0x20
		::System::Int32 _SingleDayMaxRevenue_k__BackingField; // 0x28
		::System::Int32 _TotalCustomers_k__BackingField; // 0x2C
		::System::Int32 _TotalRevenue_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SingleDayMaxRevenue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_SINGLEDAYMAXREVENUE_OFFSET))(this);
		}

		::System::Void set_SingleDayMaxRevenue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_SINGLEDAYMAXREVENUE_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalRevenue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_TOTALREVENUE_OFFSET))(this);
		}

		::System::Void set_TotalRevenue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_TOTALREVENUE_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalCustomers()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_TOTALCUSTOMERS_OFFSET))(this);
		}

		::System::Void set_TotalCustomers(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_TOTALCUSTOMERS_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_09751665EAC0FA4D_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_09751665EAC0FA4D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBestSellingRecipeIDs(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETBESTSELLINGRECIPEIDS_OFFSET))(this, a1);
		}

		::System::Int32 GetTotalRecipeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETTOTALRECIPECOUNT_OFFSET))(this);
		}

		::System::Int32 GetRecipeSellCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETRECIPESELLCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetHighestSellPriceRecipeIDs(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETHIGHESTSELLPRICERECIPEIDS_OFFSET))(this, a1);
		}

		::System::Int32 GetRecipeMaxPrice(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETRECIPEMAXPRICE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBestProducingProductIDs(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETBESTPRODUCINGPRODUCTIDS_OFFSET))(this, a1);
		}

		::System::Int32 GetProductProduceCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETPRODUCTPRODUCECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetTotalProduceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETTOTALPRODUCECOUNT_OFFSET))(this);
		}
	};
}
