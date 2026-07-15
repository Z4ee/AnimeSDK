#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FEAB6CC6A014131B_Class_1_3B76E13757985C28;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_FEAB6CC6A014131B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15499490)
#define CLASS_1_FEAB6CC6A014131B___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x154994E0)
#define CLASS_1_FEAB6CC6A014131B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154994D0)

inline static constexpr unsigned int Class_1_FEAB6CC6A014131B___c_TypeDefinitionIndex = 6568;

class Class_1_FEAB6CC6A014131B___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_FEAB6CC6A014131B_Class_1_3B76E13757985C28*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::Class_1_FEAB6CC6A014131B_Class_1_3B76E13757985C28*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEAB6CC6A014131B___c_TypeDefinitionIndex)->GetStaticField(0x3410);
	}
	static ::Class_1_FEAB6CC6A014131B___c** StaticGet___9()
	{
		return (::Class_1_FEAB6CC6A014131B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEAB6CC6A014131B___c_TypeDefinitionIndex)->GetStaticField(0x3418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEAB6CC6A014131B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEAB6CC6A014131B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _Create_b__1_0(::Class_1_FEAB6CC6A014131B_Class_1_3B76E13757985C28* a1, ::Class_1_FEAB6CC6A014131B_Class_1_3B76E13757985C28* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FEAB6CC6A014131B_Class_1_3B76E13757985C28*, ::Class_1_FEAB6CC6A014131B_Class_1_3B76E13757985C28*))((::PBYTE)hIl2Cpp + CLASS_1_FEAB6CC6A014131B___C__CREATE_B__1_0_OFFSET))(this, a1, a2);
	}
};
