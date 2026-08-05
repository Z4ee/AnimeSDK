#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_3BC6B2FC73104388___C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x124F6BB0)
#define CLASS_2_3BC6B2FC73104388___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124F6B60)
#define CLASS_2_3BC6B2FC73104388___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124F6BA0)

inline static constexpr unsigned int Class_2_3BC6B2FC73104388___c_TypeDefinitionIndex = 51071;

class Class_2_3BC6B2FC73104388___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__11_13()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3BC6B2FC73104388___c_TypeDefinitionIndex)->GetStaticField(0x3B730);
	}
	static ::Class_2_3BC6B2FC73104388___c** StaticGet___9()
	{
		return (::Class_2_3BC6B2FC73104388___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3BC6B2FC73104388___c_TypeDefinitionIndex)->GetStaticField(0x3B738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3BC6B2FC73104388___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BC6B2FC73104388___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BC6B2FC73104388___C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
