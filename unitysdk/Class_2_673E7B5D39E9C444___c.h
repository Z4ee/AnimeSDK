#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_673E7B5D39E9C444___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x113E2D90)
#define CLASS_2_673E7B5D39E9C444___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x113E2D40)
#define CLASS_2_673E7B5D39E9C444___C__CTOR_OFFSET UNITYSDK_OFFSET(0x113E2D80)

inline static constexpr unsigned int Class_2_673E7B5D39E9C444___c_TypeDefinitionIndex = 65162;

class Class_2_673E7B5D39E9C444___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__2_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_673E7B5D39E9C444___c_TypeDefinitionIndex)->GetStaticField(0x310E0);
	}
	static ::Class_2_673E7B5D39E9C444___c** StaticGet___9()
	{
		return (::Class_2_673E7B5D39E9C444___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_673E7B5D39E9C444___c_TypeDefinitionIndex)->GetStaticField(0x310E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_673E7B5D39E9C444___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_673E7B5D39E9C444___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_673E7B5D39E9C444___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
