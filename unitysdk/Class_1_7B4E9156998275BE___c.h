#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Object.h"

class Class_1_105C32866538BE74;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7B4E9156998275BE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F3CF0)
#define CLASS_1_7B4E9156998275BE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F3D20)
#define CLASS_1_7B4E9156998275BE___C___CTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1D0F3E30)
#define CLASS_1_7B4E9156998275BE___C___CTOR_B__46_1_OFFSET UNITYSDK_OFFSET(0x1D0F3E90)
#define CLASS_1_7B4E9156998275BE___C___RESOLVEMULTI_B__25_1_OFFSET UNITYSDK_OFFSET(0x1D0F3D30)

inline static constexpr unsigned int Class_1_7B4E9156998275BE___c_TypeDefinitionIndex = 41495;

class Class_1_7B4E9156998275BE___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_105C32866538BE74*, ::System::Object*>** StaticGet___9__25_1()
	{
		return (::System::Func_2<::Class_1_105C32866538BE74*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B4E9156998275BE___c_TypeDefinitionIndex)->GetStaticField(0x4E400);
	}
	static ::System::Func_1<::System::Collections::Generic::List_1<::Struct_2_B9E6DC87D4879FCD>*>** StaticGet___9__46_0()
	{
		return (::System::Func_1<::System::Collections::Generic::List_1<::Struct_2_B9E6DC87D4879FCD>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B4E9156998275BE___c_TypeDefinitionIndex)->GetStaticField(0x4E408);
	}
	static ::Class_1_7B4E9156998275BE___c** StaticGet___9()
	{
		return (::Class_1_7B4E9156998275BE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B4E9156998275BE___c_TypeDefinitionIndex)->GetStaticField(0x4E410);
	}
	static ::System::Func_1<::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*>** StaticGet___9__46_1()
	{
		return (::System::Func_1<::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B4E9156998275BE___c_TypeDefinitionIndex)->GetStaticField(0x4E418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___C__CTOR_OFFSET))(this);
	}

	::System::Object* __ResolveMulti_b__25_1(::Class_1_105C32866538BE74* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_105C32866538BE74*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___C___RESOLVEMULTI_B__25_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_B9E6DC87D4879FCD>* __ctor_b__46_0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_B9E6DC87D4879FCD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___C___CTOR_B__46_0_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>* __ctor_b__46_1()
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___C___CTOR_B__46_1_OFFSET))(this);
	}
};
