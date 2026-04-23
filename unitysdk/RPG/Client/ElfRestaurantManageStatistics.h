#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E57B88467AF63C8_5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETBESTPRODUCINGPRODUCTIDS_OFFSET UNITYSDK_OFFSET(0xA265800)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETBESTSELLINGRECIPEIDS_OFFSET UNITYSDK_OFFSET(0xA265020)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETHIGHESTSELLPRICERECIPEIDS_OFFSET UNITYSDK_OFFSET(0xA2654E0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETPRODUCTPRODUCECOUNT_OFFSET UNITYSDK_OFFSET(0xA265A90)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETRECIPEMAXPRICE_OFFSET UNITYSDK_OFFSET(0xA265770)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETRECIPESELLCOUNT_OFFSET UNITYSDK_OFFSET(0xA265450)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETTOTALPRODUCECOUNT_OFFSET UNITYSDK_OFFSET(0xA265B20)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETTOTALRECIPECOUNT_OFFSET UNITYSDK_OFFSET(0xA2652B0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_SINGLEDAYMAXREVENUE_OFFSET UNITYSDK_OFFSET(0xA264FC0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_TOTALCUSTOMERS_OFFSET UNITYSDK_OFFSET(0xA265000)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_TOTALREVENUE_OFFSET UNITYSDK_OFFSET(0xA264FE0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_SINGLEDAYMAXREVENUE_OFFSET UNITYSDK_OFFSET(0xA264FD0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_TOTALCUSTOMERS_OFFSET UNITYSDK_OFFSET(0xA265010)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_TOTALREVENUE_OFFSET UNITYSDK_OFFSET(0xA264FF0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SYNC_OFFSET UNITYSDK_OFFSET(0xA2613A0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2638A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantManageStatistics_TypeDefinitionIndex = 58738;

	class ElfRestaurantManageStatistics : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _RecipeSellCountDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _ProductProduceCountDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _RecipeMaxPriceDict; // 0x20
		::System::Int32 _TotalRevenue_k__BackingField; // 0x28
		::System::Int32 _SingleDayMaxRevenue_k__BackingField; // 0x2C
		::System::Int32 _TotalCustomers_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SingleDayMaxRevenue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_SINGLEDAYMAXREVENUE_OFFSET))(this);
		}

		::System::Void set_SingleDayMaxRevenue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_SINGLEDAYMAXREVENUE_OFFSET))(this, value);
		}

		::System::Int32 get_TotalRevenue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_TOTALREVENUE_OFFSET))(this);
		}

		::System::Void set_TotalRevenue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_TOTALREVENUE_OFFSET))(this, value);
		}

		::System::Int32 get_TotalCustomers()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GET_TOTALCUSTOMERS_OFFSET))(this);
		}

		::System::Void set_TotalCustomers(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SET_TOTALCUSTOMERS_OFFSET))(this, value);
		}

		::System::Void Sync(::Class_1_2E57B88467AF63C8_5* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_SYNC_OFFSET))(this, data);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBestSellingRecipeIDs(::System::Int32 maxCount)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETBESTSELLINGRECIPEIDS_OFFSET))(this, maxCount);
		}

		::System::Int32 GetTotalRecipeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETTOTALRECIPECOUNT_OFFSET))(this);
		}

		::System::Int32 GetRecipeSellCount(::System::UInt32 recipeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETRECIPESELLCOUNT_OFFSET))(this, recipeID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetHighestSellPriceRecipeIDs(::System::Int32 maxCount)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETHIGHESTSELLPRICERECIPEIDS_OFFSET))(this, maxCount);
		}

		::System::Int32 GetRecipeMaxPrice(::System::UInt32 recipeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETRECIPEMAXPRICE_OFFSET))(this, recipeID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBestProducingProductIDs(::System::Int32 maxCount)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETBESTPRODUCINGPRODUCTIDS_OFFSET))(this, maxCount);
		}

		::System::Int32 GetProductProduceCount(::System::UInt32 productID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETPRODUCTPRODUCECOUNT_OFFSET))(this, productID);
		}

		::System::Int32 GetTotalProduceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS_GETTOTALPRODUCECOUNT_OFFSET))(this);
		}
	};
}
