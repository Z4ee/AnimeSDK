#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_4_05FB14CE45E7144C_1___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BC0DE90)
#define CLASS_4_05FB14CE45E7144C_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC0DE40)
#define CLASS_4_05FB14CE45E7144C_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0DE80)

inline static constexpr unsigned int Class_4_05FB14CE45E7144C_1___c_TypeDefinitionIndex = 61266;

class Class_4_05FB14CE45E7144C_1___c : public ::System::Object
{
public:
	static ::Class_4_05FB14CE45E7144C_1___c** StaticGet___9()
	{
		return (::Class_4_05FB14CE45E7144C_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_05FB14CE45E7144C_1___c_TypeDefinitionIndex)->GetStaticField(0x43630);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_05FB14CE45E7144C_1___c_TypeDefinitionIndex)->GetStaticField(0x43638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_05FB14CE45E7144C_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_05FB14CE45E7144C_1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_05FB14CE45E7144C_1___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
