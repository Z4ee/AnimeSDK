#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_57A70D28816C6037___C_METHOD_1_7BBF135FC9E2C20B_OFFSET UNITYSDK_OFFSET(0x124941B0)
#define CLASS_2_57A70D28816C6037___C_METHOD_1_B04B6FA710F62C23_OFFSET UNITYSDK_OFFSET(0x124941F0)
#define CLASS_2_57A70D28816C6037___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12494200)
#define CLASS_2_57A70D28816C6037___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12494160)
#define CLASS_2_57A70D28816C6037___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124941A0)

inline static constexpr unsigned int Class_2_57A70D28816C6037___c_TypeDefinitionIndex = 80818;

class Class_2_57A70D28816C6037___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_57A70D28816C6037___c_TypeDefinitionIndex)->GetStaticField(0x3B440);
	}
	static ::Class_2_57A70D28816C6037___c** StaticGet___9()
	{
		return (::Class_2_57A70D28816C6037___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_57A70D28816C6037___c_TypeDefinitionIndex)->GetStaticField(0x3B448);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__9_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_57A70D28816C6037___c_TypeDefinitionIndex)->GetStaticField(0x3B450);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_57A70D28816C6037___c_TypeDefinitionIndex)->GetStaticField(0x3B458);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_57A70D28816C6037___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57A70D28816C6037___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7BBF135FC9E2C20B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57A70D28816C6037___C_METHOD_1_7BBF135FC9E2C20B_OFFSET))(this);
	}

	::System::String* Method_1_B04B6FA710F62C23()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57A70D28816C6037___C_METHOD_1_B04B6FA710F62C23_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57A70D28816C6037___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
