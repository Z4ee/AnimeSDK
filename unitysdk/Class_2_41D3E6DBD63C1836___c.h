#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_41D3E6DBD63C1836___C_METHOD_1_7BBF135FC9E2C20B_OFFSET UNITYSDK_OFFSET(0x1813F630)
#define CLASS_2_41D3E6DBD63C1836___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1813F670)
#define CLASS_2_41D3E6DBD63C1836___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1813F5E0)
#define CLASS_2_41D3E6DBD63C1836___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1813F620)

inline static constexpr unsigned int Class_2_41D3E6DBD63C1836___c_TypeDefinitionIndex = 41457;

class Class_2_41D3E6DBD63C1836___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_41D3E6DBD63C1836___c_TypeDefinitionIndex)->GetStaticField(0x49860);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__7_10()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_41D3E6DBD63C1836___c_TypeDefinitionIndex)->GetStaticField(0x49868);
	}
	static ::Class_2_41D3E6DBD63C1836___c** StaticGet___9()
	{
		return (::Class_2_41D3E6DBD63C1836___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_41D3E6DBD63C1836___c_TypeDefinitionIndex)->GetStaticField(0x49870);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_41D3E6DBD63C1836___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D3E6DBD63C1836___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7BBF135FC9E2C20B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D3E6DBD63C1836___C_METHOD_1_7BBF135FC9E2C20B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41D3E6DBD63C1836___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
