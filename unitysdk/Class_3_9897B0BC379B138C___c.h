#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_97F99D2BC471ECEC;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_9897B0BC379B138C___C_METHOD_1_2F72BF7A3C3B9D2E_OFFSET UNITYSDK_OFFSET(0x12C534F0)
#define CLASS_3_9897B0BC379B138C___C_METHOD_1_3F7C19E36BC696B6_OFFSET UNITYSDK_OFFSET(0x12C53470)
#define CLASS_3_9897B0BC379B138C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C53420)
#define CLASS_3_9897B0BC379B138C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C53460)

inline static constexpr unsigned int Class_3_9897B0BC379B138C___c_TypeDefinitionIndex = 80222;

class Class_3_9897B0BC379B138C___c : public ::System::Object
{
public:
	static ::Class_3_9897B0BC379B138C___c** StaticGet___9()
	{
		return (::Class_3_9897B0BC379B138C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9897B0BC379B138C___c_TypeDefinitionIndex)->GetStaticField(0x4F6F0);
	}
	static ::System::Action_1<::Class_3_97F99D2BC471ECEC*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_97F99D2BC471ECEC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9897B0BC379B138C___c_TypeDefinitionIndex)->GetStaticField(0x4F6F8);
	}
	static ::System::Action_1<::Class_3_97F99D2BC471ECEC*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_97F99D2BC471ECEC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9897B0BC379B138C___c_TypeDefinitionIndex)->GetStaticField(0x4F700);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9897B0BC379B138C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9897B0BC379B138C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3F7C19E36BC696B6(::Class_3_97F99D2BC471ECEC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97F99D2BC471ECEC*))((::PBYTE)hIl2Cpp + CLASS_3_9897B0BC379B138C___C_METHOD_1_3F7C19E36BC696B6_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F72BF7A3C3B9D2E(::Class_3_97F99D2BC471ECEC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97F99D2BC471ECEC*))((::PBYTE)hIl2Cpp + CLASS_3_9897B0BC379B138C___C_METHOD_1_2F72BF7A3C3B9D2E_OFFSET))(this, a1);
	}
};
