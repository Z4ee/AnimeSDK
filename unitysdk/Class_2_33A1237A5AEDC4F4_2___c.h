#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_33A1237A5AEDC4F4_2___C_METHOD_1_6100984B3BC988C7_OFFSET UNITYSDK_OFFSET(0x16B32AB0)
#define CLASS_2_33A1237A5AEDC4F4_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B32A60)
#define CLASS_2_33A1237A5AEDC4F4_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B32AA0)

inline static constexpr unsigned int Class_2_33A1237A5AEDC4F4_2___c_TypeDefinitionIndex = 61524;

class Class_2_33A1237A5AEDC4F4_2___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__2_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_33A1237A5AEDC4F4_2___c_TypeDefinitionIndex)->GetStaticField(0x3FA20);
	}
	static ::Class_2_33A1237A5AEDC4F4_2___c** StaticGet___9()
	{
		return (::Class_2_33A1237A5AEDC4F4_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_33A1237A5AEDC4F4_2___c_TypeDefinitionIndex)->GetStaticField(0x3FA28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_33A1237A5AEDC4F4_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33A1237A5AEDC4F4_2___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6100984B3BC988C7(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_33A1237A5AEDC4F4_2___C_METHOD_1_6100984B3BC988C7_OFFSET))(this, a1);
	}
};
