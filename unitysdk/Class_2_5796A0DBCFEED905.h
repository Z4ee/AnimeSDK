#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBD84809434AB007.h"

#define CLASS_2_5796A0DBCFEED905_GET_REVERSE_OFFSET UNITYSDK_OFFSET(0x19CB1240)
#define CLASS_2_5796A0DBCFEED905_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x19CB10D0)
#define CLASS_2_5796A0DBCFEED905_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x19CB1040)
#define CLASS_2_5796A0DBCFEED905__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB1030)

inline static constexpr unsigned int Class_2_5796A0DBCFEED905_TypeDefinitionIndex = 74099;

class Class_2_5796A0DBCFEED905 : public ::Class_1_CBD84809434AB007
{
public:
	::System::Int32 CICBCEIBAAO; // 0x40
	::System::Boolean _Reverse_k__BackingField; // 0x44
	::System::Single DKOFFPPGEFI; // 0x48

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5796A0DBCFEED905__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5796A0DBCFEED905_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5796A0DBCFEED905_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Boolean get_Reverse()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5796A0DBCFEED905_GET_REVERSE_OFFSET))(this);
	}
};
