#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8F494CBE88B08C04;
class Class_1_C55AEAF8486FB7B9;

#define CLASS_1_E3C2EEB93C1BBB05_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xB77FFD0)
#define CLASS_1_E3C2EEB93C1BBB05_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB77FFB0)
#define CLASS_1_E3C2EEB93C1BBB05_GET_ISPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xB7C40D0)
#define CLASS_1_E3C2EEB93C1BBB05_GET_ISSHOWCURRENCY_OFFSET UNITYSDK_OFFSET(0xB7C40B0)
#define CLASS_1_E3C2EEB93C1BBB05_SET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xB7C40A0)
#define CLASS_1_E3C2EEB93C1BBB05_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB77FFC0)
#define CLASS_1_E3C2EEB93C1BBB05_SET_ISPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xB7C40E0)
#define CLASS_1_E3C2EEB93C1BBB05_SET_ISSHOWCURRENCY_OFFSET UNITYSDK_OFFSET(0xB7C40C0)
#define CLASS_1_E3C2EEB93C1BBB05__CTOR_OFFSET UNITYSDK_OFFSET(0xB7C40F0)

inline static constexpr unsigned int Class_1_E3C2EEB93C1BBB05_TypeDefinitionIndex = 79423;

class Class_1_E3C2EEB93C1BBB05 : public ::System::Object
{
public:
	::Class_1_C55AEAF8486FB7B9* _Currency_k__BackingField; // 0x10
	::Class_1_8F494CBE88B08C04* _Desc_k__BackingField; // 0x18
	::System::Boolean _IsPercentage_k__BackingField; // 0x20
	::System::Boolean _IsShowCurrency_k__BackingField; // 0x21

	::System::Void _ctor(::Class_1_8F494CBE88B08C04* a1, ::Class_1_C55AEAF8486FB7B9* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F494CBE88B08C04*, ::Class_1_C55AEAF8486FB7B9*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3C2EEB93C1BBB05__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_8F494CBE88B08C04* get_Desc()
	{
		return ((::Class_1_8F494CBE88B08C04*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C2EEB93C1BBB05_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::Class_1_8F494CBE88B08C04* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F494CBE88B08C04*))((::PBYTE)hIl2Cpp + CLASS_1_E3C2EEB93C1BBB05_SET_DESC_OFFSET))(this, a1);
	}

	::Class_1_C55AEAF8486FB7B9* get_Currency()
	{
		return ((::Class_1_C55AEAF8486FB7B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C2EEB93C1BBB05_GET_CURRENCY_OFFSET))(this);
	}

	::System::Void set_Currency(::Class_1_C55AEAF8486FB7B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C55AEAF8486FB7B9*))((::PBYTE)hIl2Cpp + CLASS_1_E3C2EEB93C1BBB05_SET_CURRENCY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsShowCurrency()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C2EEB93C1BBB05_GET_ISSHOWCURRENCY_OFFSET))(this);
	}

	::System::Void set_IsShowCurrency(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3C2EEB93C1BBB05_SET_ISSHOWCURRENCY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPercentage()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C2EEB93C1BBB05_GET_ISPERCENTAGE_OFFSET))(this);
	}

	::System::Void set_IsPercentage(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3C2EEB93C1BBB05_SET_ISPERCENTAGE_OFFSET))(this, a1);
	}
};
