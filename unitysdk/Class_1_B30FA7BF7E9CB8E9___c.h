#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1842CDA6A764B151;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_B30FA7BF7E9CB8E9___C__ADDSEQUENCE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1731F610)
#define CLASS_1_B30FA7BF7E9CB8E9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1731F5C0)
#define CLASS_1_B30FA7BF7E9CB8E9___C__CLEARENDED_B__4_0_OFFSET UNITYSDK_OFFSET(0x1731F660)
#define CLASS_1_B30FA7BF7E9CB8E9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1731F600)

inline static constexpr unsigned int Class_1_B30FA7BF7E9CB8E9___c_TypeDefinitionIndex = 65857;

class Class_1_B30FA7BF7E9CB8E9___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_1842CDA6A764B151*>** StaticGet___9__1_0()
	{
		return (::System::Predicate_1<::Class_1_1842CDA6A764B151*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B30FA7BF7E9CB8E9___c_TypeDefinitionIndex)->GetStaticField(0x47860);
	}
	static ::Class_1_B30FA7BF7E9CB8E9___c** StaticGet___9()
	{
		return (::Class_1_B30FA7BF7E9CB8E9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B30FA7BF7E9CB8E9___c_TypeDefinitionIndex)->GetStaticField(0x47868);
	}
	static ::System::Predicate_1<::Class_1_1842CDA6A764B151*>** StaticGet___9__4_0()
	{
		return (::System::Predicate_1<::Class_1_1842CDA6A764B151*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B30FA7BF7E9CB8E9___c_TypeDefinitionIndex)->GetStaticField(0x47870);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B30FA7BF7E9CB8E9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B30FA7BF7E9CB8E9___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddSequence_b__1_0(::Class_1_1842CDA6A764B151* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1842CDA6A764B151*))((::PBYTE)hIl2Cpp + CLASS_1_B30FA7BF7E9CB8E9___C__ADDSEQUENCE_B__1_0_OFFSET))(this, a1);
	}

	::System::Boolean _ClearEnded_b__4_0(::Class_1_1842CDA6A764B151* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1842CDA6A764B151*))((::PBYTE)hIl2Cpp + CLASS_1_B30FA7BF7E9CB8E9___C__CLEARENDED_B__4_0_OFFSET))(this, a1);
	}
};
