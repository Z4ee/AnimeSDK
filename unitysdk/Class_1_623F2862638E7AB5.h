#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D55C9EF3F758FF20_8;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_623F2862638E7AB5_GET_COINCOUNT_OFFSET UNITYSDK_OFFSET(0xE2DDD70)
#define CLASS_1_623F2862638E7AB5_GET_COINPRICEHISTORYS_OFFSET UNITYSDK_OFFSET(0xE2DDD90)
#define CLASS_1_623F2862638E7AB5_GET_TOTALBUYCOST_OFFSET UNITYSDK_OFFSET(0xE2DDDB0)
#define CLASS_1_623F2862638E7AB5_GET_TOTALSELLREVENUE_OFFSET UNITYSDK_OFFSET(0xE2DDDD0)
#define CLASS_1_623F2862638E7AB5_METHOD_1_BE83AC88877F7054_OFFSET UNITYSDK_OFFSET(0xE2DDBA0)
#define CLASS_1_623F2862638E7AB5_SET_COINCOUNT_OFFSET UNITYSDK_OFFSET(0xE2DDD80)
#define CLASS_1_623F2862638E7AB5_SET_COINPRICEHISTORYS_OFFSET UNITYSDK_OFFSET(0xE2DDDA0)
#define CLASS_1_623F2862638E7AB5_SET_TOTALBUYCOST_OFFSET UNITYSDK_OFFSET(0xE2DDDC0)
#define CLASS_1_623F2862638E7AB5_SET_TOTALSELLREVENUE_OFFSET UNITYSDK_OFFSET(0xE2DDDE0)
#define CLASS_1_623F2862638E7AB5_UPDATE_OFFSET UNITYSDK_OFFSET(0xE2DDCB0)
#define CLASS_1_623F2862638E7AB5__CTOR_OFFSET UNITYSDK_OFFSET(0xE2DDCA0)

inline static constexpr unsigned int Class_1_623F2862638E7AB5_TypeDefinitionIndex = 67700;

class Class_1_623F2862638E7AB5 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* _CoinPriceHistorys_k__BackingField; // 0x10
	::System::UInt32 _TotalBuyCost_k__BackingField; // 0x18
	::System::UInt32 _CoinCount_k__BackingField; // 0x1C
	::System::UInt32 _TotalSellRevenue_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5__CTOR_OFFSET))(this);
	}

	static ::Class_1_623F2862638E7AB5* Method_1_BE83AC88877F7054(::Class_1_D55C9EF3F758FF20_8* a1)
	{
		return ((::Class_1_623F2862638E7AB5*(*)(::Class_1_D55C9EF3F758FF20_8*))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5_METHOD_1_BE83AC88877F7054_OFFSET))(a1);
	}

	::System::Void Update(::Class_1_D55C9EF3F758FF20_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D55C9EF3F758FF20_8*))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_CoinCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5_GET_COINCOUNT_OFFSET))(this);
	}

	::System::Void set_CoinCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5_SET_COINCOUNT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_CoinPriceHistorys()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5_GET_COINPRICEHISTORYS_OFFSET))(this);
	}

	::System::Void set_CoinPriceHistorys(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5_SET_COINPRICEHISTORYS_OFFSET))(this, a1);
	}

	::System::UInt32 get_TotalBuyCost()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5_GET_TOTALBUYCOST_OFFSET))(this);
	}

	::System::Void set_TotalBuyCost(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5_SET_TOTALBUYCOST_OFFSET))(this, a1);
	}

	::System::UInt32 get_TotalSellRevenue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5_GET_TOTALSELLREVENUE_OFFSET))(this);
	}

	::System::Void set_TotalSellRevenue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_623F2862638E7AB5_SET_TOTALSELLREVENUE_OFFSET))(this, a1);
	}
};
