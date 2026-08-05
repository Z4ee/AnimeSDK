#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_448CECD21B5ECB2E___C_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1126EFB0)
#define CLASS_2_448CECD21B5ECB2E___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1126EF70)
#define CLASS_2_448CECD21B5ECB2E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1126EF20)
#define CLASS_2_448CECD21B5ECB2E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1126EF60)

inline static constexpr unsigned int Class_2_448CECD21B5ECB2E___c_TypeDefinitionIndex = 79097;

class Class_2_448CECD21B5ECB2E___c : public ::System::Object
{
public:
	static ::Class_2_448CECD21B5ECB2E___c** StaticGet___9()
	{
		return (::Class_2_448CECD21B5ECB2E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_448CECD21B5ECB2E___c_TypeDefinitionIndex)->GetStaticField(0x4ED60);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__31_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_448CECD21B5ECB2E___c_TypeDefinitionIndex)->GetStaticField(0x4ED68);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__31_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_448CECD21B5ECB2E___c_TypeDefinitionIndex)->GetStaticField(0x4ED70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_448CECD21B5ECB2E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_448CECD21B5ECB2E___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_448CECD21B5ECB2E___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_448CECD21B5ECB2E___C_METHOD_1_128774387667156B_1_OFFSET))(this);
	}
};
