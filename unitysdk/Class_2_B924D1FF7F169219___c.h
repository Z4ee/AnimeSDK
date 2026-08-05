#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_55B1720D3ECF0A32.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_B924D1FF7F169219___C_METHOD_1_A538D7DBA7BF5017_1_OFFSET UNITYSDK_OFFSET(0x16596230)
#define CLASS_2_B924D1FF7F169219___C_METHOD_1_A538D7DBA7BF5017_OFFSET UNITYSDK_OFFSET(0x16596150)
#define CLASS_2_B924D1FF7F169219___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16596100)
#define CLASS_2_B924D1FF7F169219___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16596140)

inline static constexpr unsigned int Class_2_B924D1FF7F169219___c_TypeDefinitionIndex = 72765;

class Class_2_B924D1FF7F169219___c : public ::System::Object
{
public:
	static ::System::Func_1<::Struct_2_55B1720D3ECF0A32>** StaticGet___9__24_13()
	{
		return (::System::Func_1<::Struct_2_55B1720D3ECF0A32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B924D1FF7F169219___c_TypeDefinitionIndex)->GetStaticField(0x38580);
	}
	static ::Class_2_B924D1FF7F169219___c** StaticGet___9()
	{
		return (::Class_2_B924D1FF7F169219___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B924D1FF7F169219___c_TypeDefinitionIndex)->GetStaticField(0x38588);
	}
	static ::System::Func_1<::Struct_2_55B1720D3ECF0A32>** StaticGet___9__24_9()
	{
		return (::System::Func_1<::Struct_2_55B1720D3ECF0A32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B924D1FF7F169219___c_TypeDefinitionIndex)->GetStaticField(0x38590);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B924D1FF7F169219___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B924D1FF7F169219___C__CTOR_OFFSET))(this);
	}

	::Struct_2_55B1720D3ECF0A32 Method_1_A538D7DBA7BF5017()
	{
		return ((::Struct_2_55B1720D3ECF0A32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B924D1FF7F169219___C_METHOD_1_A538D7DBA7BF5017_OFFSET))(this);
	}

	::Struct_2_55B1720D3ECF0A32 Method_1_A538D7DBA7BF5017_1()
	{
		return ((::Struct_2_55B1720D3ECF0A32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B924D1FF7F169219___C_METHOD_1_A538D7DBA7BF5017_1_OFFSET))(this);
	}
};
