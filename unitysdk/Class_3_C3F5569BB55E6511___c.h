#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_816015CAFD8353F7;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_C3F5569BB55E6511___C_METHOD_1_302D5F9B2BDAA3EA_OFFSET UNITYSDK_OFFSET(0x127E82F0)
#define CLASS_3_C3F5569BB55E6511___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x127E82A0)
#define CLASS_3_C3F5569BB55E6511___C__CTOR_OFFSET UNITYSDK_OFFSET(0x127E82E0)

inline static constexpr unsigned int Class_3_C3F5569BB55E6511___c_TypeDefinitionIndex = 53208;

class Class_3_C3F5569BB55E6511___c : public ::System::Object
{
public:
	static ::Class_3_C3F5569BB55E6511___c** StaticGet___9()
	{
		return (::Class_3_C3F5569BB55E6511___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C3F5569BB55E6511___c_TypeDefinitionIndex)->GetStaticField(0x46130);
	}
	static ::System::Action_1<::Class_3_816015CAFD8353F7*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_3_816015CAFD8353F7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C3F5569BB55E6511___c_TypeDefinitionIndex)->GetStaticField(0x46138);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C3F5569BB55E6511___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3F5569BB55E6511___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_302D5F9B2BDAA3EA(::Class_3_816015CAFD8353F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_816015CAFD8353F7*))((::PBYTE)hIl2Cpp + CLASS_3_C3F5569BB55E6511___C_METHOD_1_302D5F9B2BDAA3EA_OFFSET))(this, a1);
	}
};
