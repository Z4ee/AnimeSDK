#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_CB55141033CDDD7A___C_METHOD_1_67A6C41ED100A1D7_OFFSET UNITYSDK_OFFSET(0x11AE45E0)
#define CLASS_2_CB55141033CDDD7A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AE4590)
#define CLASS_2_CB55141033CDDD7A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE45D0)

inline static constexpr unsigned int Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex = 73898;

class Class_2_CB55141033CDDD7A___c : public ::System::Object
{
public:
	static ::Class_2_CB55141033CDDD7A___c** StaticGet___9()
	{
		return (::Class_2_CB55141033CDDD7A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex)->GetStaticField(0x39E00);
	}
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__6_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex)->GetStaticField(0x39E08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_67A6C41ED100A1D7(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C_METHOD_1_67A6C41ED100A1D7_OFFSET))(this, a1);
	}
};
