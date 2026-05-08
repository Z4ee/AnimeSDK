#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_EA8F026699B496CE___C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xFC340B0)
#define CLASS_2_EA8F026699B496CE___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xFC340A0)
#define CLASS_2_EA8F026699B496CE___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFC340C0)
#define CLASS_2_EA8F026699B496CE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFC34050)
#define CLASS_2_EA8F026699B496CE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFC34090)

inline static constexpr unsigned int Class_2_EA8F026699B496CE___c_TypeDefinitionIndex = 49377;

class Class_2_EA8F026699B496CE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__29_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EA8F026699B496CE___c_TypeDefinitionIndex)->GetStaticField(0x3F550);
	}
	static ::System::Action** StaticGet___9__29_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EA8F026699B496CE___c_TypeDefinitionIndex)->GetStaticField(0x3F558);
	}
	static ::Class_2_EA8F026699B496CE___c** StaticGet___9()
	{
		return (::Class_2_EA8F026699B496CE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EA8F026699B496CE___c_TypeDefinitionIndex)->GetStaticField(0x3F560);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__31_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EA8F026699B496CE___c_TypeDefinitionIndex)->GetStaticField(0x3F568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EA8F026699B496CE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA8F026699B496CE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA8F026699B496CE___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA8F026699B496CE___C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA8F026699B496CE___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
