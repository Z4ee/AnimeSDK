#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_EF5B382CAF68576B___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17075D10)
#define CLASS_1_EF5B382CAF68576B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17075CC0)
#define CLASS_1_EF5B382CAF68576B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17075D00)

inline static constexpr unsigned int Class_1_EF5B382CAF68576B___c_TypeDefinitionIndex = 60208;

class Class_1_EF5B382CAF68576B___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__73_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF5B382CAF68576B___c_TypeDefinitionIndex)->GetStaticField(0x43B90);
	}
	static ::Class_1_EF5B382CAF68576B___c** StaticGet___9()
	{
		return (::Class_1_EF5B382CAF68576B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF5B382CAF68576B___c_TypeDefinitionIndex)->GetStaticField(0x43B98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
