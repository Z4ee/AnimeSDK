#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A45A3A893E113CFD.h"

class Class_2_15E317187C4E8254;

#define CLASS_3_C767F2C00176B993_METHOD_3_E03CCAC932CA5251_OFFSET UNITYSDK_OFFSET(0x8ABA7A0)
#define CLASS_3_C767F2C00176B993_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x8ABA930)
#define CLASS_3_C767F2C00176B993_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8ABA850)
#define CLASS_3_C767F2C00176B993__CTOR_OFFSET UNITYSDK_OFFSET(0x8ABA9B0)
#define CLASS_3_C767F2C00176B993___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x8ABAA20)
#define CLASS_3_C767F2C00176B993___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8ABA9C0)

inline static constexpr unsigned int Class_3_C767F2C00176B993_TypeDefinitionIndex = 63621;

class Class_3_C767F2C00176B993 : public ::Class_2_A45A3A893E113CFD
{
public:
	::Class_2_15E317187C4E8254* Field_3_0; // 0x20
	::System::UInt64 Field_3_3; // 0x28
	::System::Single Field_3_1; // 0x30
	::System::UInt64 Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C767F2C00176B993__CTOR_OFFSET))(this);
	}

	static ::Class_3_C767F2C00176B993* Method_3_E03CCAC932CA5251(::Class_2_15E317187C4E8254* a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::Single a4)
	{
		return ((::Class_3_C767F2C00176B993*(*)(::Class_2_15E317187C4E8254*, ::System::UInt64, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C767F2C00176B993_METHOD_3_E03CCAC932CA5251_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C767F2C00176B993_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C767F2C00176B993_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C767F2C00176B993___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C767F2C00176B993___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
