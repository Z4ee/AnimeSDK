#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_1_E1BB1CA6AD059909___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x1308FFC0)
#define CLASS_1_E1BB1CA6AD059909___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1308FF70)
#define CLASS_1_E1BB1CA6AD059909___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1308FFB0)

inline static constexpr unsigned int Class_1_E1BB1CA6AD059909___c_TypeDefinitionIndex = 40496;

class Class_1_E1BB1CA6AD059909___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__6_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1BB1CA6AD059909___c_TypeDefinitionIndex)->GetStaticField(0x30530);
	}
	static ::Class_1_E1BB1CA6AD059909___c** StaticGet___9()
	{
		return (::Class_1_E1BB1CA6AD059909___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1BB1CA6AD059909___c_TypeDefinitionIndex)->GetStaticField(0x30538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E1BB1CA6AD059909___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BB1CA6AD059909___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_1_E1BB1CA6AD059909___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
