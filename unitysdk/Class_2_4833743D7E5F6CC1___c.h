#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_4833743D7E5F6CC1___C_METHOD_1_7BBF135FC9E2C20B_OFFSET UNITYSDK_OFFSET(0x16618170)
#define CLASS_2_4833743D7E5F6CC1___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x166181B0)
#define CLASS_2_4833743D7E5F6CC1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16618120)
#define CLASS_2_4833743D7E5F6CC1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16618160)

inline static constexpr unsigned int Class_2_4833743D7E5F6CC1___c_TypeDefinitionIndex = 56819;

class Class_2_4833743D7E5F6CC1___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__34_8()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4833743D7E5F6CC1___c_TypeDefinitionIndex)->GetStaticField(0x2F190);
	}
	static ::Class_2_4833743D7E5F6CC1___c** StaticGet___9()
	{
		return (::Class_2_4833743D7E5F6CC1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4833743D7E5F6CC1___c_TypeDefinitionIndex)->GetStaticField(0x2F198);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__34_15()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4833743D7E5F6CC1___c_TypeDefinitionIndex)->GetStaticField(0x2F1A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4833743D7E5F6CC1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4833743D7E5F6CC1___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7BBF135FC9E2C20B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4833743D7E5F6CC1___C_METHOD_1_7BBF135FC9E2C20B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4833743D7E5F6CC1___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
