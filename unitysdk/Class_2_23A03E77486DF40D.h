#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C632DA14C306471D.h"

#define CLASS_2_23A03E77486DF40D_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0x1C54CB40)
#define CLASS_2_23A03E77486DF40D_SET_ORDERID_OFFSET UNITYSDK_OFFSET(0x1C54CB50)
#define CLASS_2_23A03E77486DF40D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54CB60)

inline static constexpr unsigned int Class_2_23A03E77486DF40D_TypeDefinitionIndex = 41735;

class Class_2_23A03E77486DF40D : public ::Class_1_C632DA14C306471D
{
public:
	::System::UInt32 _OrderID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_OrderID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_GET_ORDERID_OFFSET))(this);
	}

	::System::Void set_OrderID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_SET_ORDERID_OFFSET))(this, a1);
	}
};
