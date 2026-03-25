#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DE74A8F88B7250E9_Class_1_529AE99AC1EEDBC6;
class Class_4_6BD781EAA1CAFD20;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE74A8F88B7250E9_METHOD_1_51FA8FF22FE97A4D_OFFSET UNITYSDK_OFFSET(0x17A7F980)
#define CLASS_1_DE74A8F88B7250E9_METHOD_1_AB8889B3984F7810_OFFSET UNITYSDK_OFFSET(0x17A7F350)
#define CLASS_1_DE74A8F88B7250E9__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A7FB40)

inline static constexpr unsigned int Class_1_DE74A8F88B7250E9_TypeDefinitionIndex = 33838;

class Class_1_DE74A8F88B7250E9 : public ::System::Object
{
public:
	static ::Class_1_DE74A8F88B7250E9_Class_1_529AE99AC1EEDBC6** StaticGet_Field_1_0()
	{
		return (::Class_1_DE74A8F88B7250E9_Class_1_529AE99AC1EEDBC6**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE74A8F88B7250E9_TypeDefinitionIndex)->GetStaticField(0x24FF0);
	}
	static ::System::Collections::Generic::List_1<::Class_4_6BD781EAA1CAFD20*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_4_6BD781EAA1CAFD20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE74A8F88B7250E9_TypeDefinitionIndex)->GetStaticField(0x24FF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE74A8F88B7250E9__CCTOR_OFFSET))();
	}

	static ::Class_4_6BD781EAA1CAFD20* Method_1_AB8889B3984F7810(::System::Int32 a1)
	{
		return ((::Class_4_6BD781EAA1CAFD20*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DE74A8F88B7250E9_METHOD_1_AB8889B3984F7810_OFFSET))(a1);
	}

	static ::System::Void Method_1_51FA8FF22FE97A4D(::Class_4_6BD781EAA1CAFD20* a1)
	{
		return ((::System::Void(*)(::Class_4_6BD781EAA1CAFD20*))((::PBYTE)hIl2Cpp + CLASS_1_DE74A8F88B7250E9_METHOD_1_51FA8FF22FE97A4D_OFFSET))(a1);
	}
};
