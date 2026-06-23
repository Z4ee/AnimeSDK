#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_0CE0AFE067E22DA7___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14EB81D0)
#define CLASS_2_0CE0AFE067E22DA7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EB8180)
#define CLASS_2_0CE0AFE067E22DA7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EB81C0)

inline static constexpr unsigned int Class_2_0CE0AFE067E22DA7___c_TypeDefinitionIndex = 59133;

class Class_2_0CE0AFE067E22DA7___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_7()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0CE0AFE067E22DA7___c_TypeDefinitionIndex)->GetStaticField(0x42A30);
	}
	static ::Class_2_0CE0AFE067E22DA7___c** StaticGet___9()
	{
		return (::Class_2_0CE0AFE067E22DA7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0CE0AFE067E22DA7___c_TypeDefinitionIndex)->GetStaticField(0x42A38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0CE0AFE067E22DA7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CE0AFE067E22DA7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CE0AFE067E22DA7___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
