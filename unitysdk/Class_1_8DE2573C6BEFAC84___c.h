#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8DE2573C6BEFAC84_Class_1_3B76E13757985C28;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_8DE2573C6BEFAC84___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A09070)
#define CLASS_1_8DE2573C6BEFAC84___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x17A090C0)
#define CLASS_1_8DE2573C6BEFAC84___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A090B0)

inline static constexpr unsigned int Class_1_8DE2573C6BEFAC84___c_TypeDefinitionIndex = 8487;

class Class_1_8DE2573C6BEFAC84___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_8DE2573C6BEFAC84_Class_1_3B76E13757985C28*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::Class_1_8DE2573C6BEFAC84_Class_1_3B76E13757985C28*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DE2573C6BEFAC84___c_TypeDefinitionIndex)->GetStaticField(0x1D900);
	}
	static ::Class_1_8DE2573C6BEFAC84___c** StaticGet___9()
	{
		return (::Class_1_8DE2573C6BEFAC84___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DE2573C6BEFAC84___c_TypeDefinitionIndex)->GetStaticField(0x1D908);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DE2573C6BEFAC84___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DE2573C6BEFAC84___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _Create_b__1_0(::Class_1_8DE2573C6BEFAC84_Class_1_3B76E13757985C28* e1, ::Class_1_8DE2573C6BEFAC84_Class_1_3B76E13757985C28* e2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_8DE2573C6BEFAC84_Class_1_3B76E13757985C28*, ::Class_1_8DE2573C6BEFAC84_Class_1_3B76E13757985C28*))((::PBYTE)hIl2Cpp + CLASS_1_8DE2573C6BEFAC84___C__CREATE_B__1_0_OFFSET))(this, e1, e2);
	}
};
