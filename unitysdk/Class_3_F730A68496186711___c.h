#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_F730A68496186711___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13D70CF0)
#define CLASS_3_F730A68496186711___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D70CA0)
#define CLASS_3_F730A68496186711___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D70CE0)

inline static constexpr unsigned int Class_3_F730A68496186711___c_TypeDefinitionIndex = 86885;

class Class_3_F730A68496186711___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F730A68496186711___c_TypeDefinitionIndex)->GetStaticField(0x46120);
	}
	static ::Class_3_F730A68496186711___c** StaticGet___9()
	{
		return (::Class_3_F730A68496186711___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F730A68496186711___c_TypeDefinitionIndex)->GetStaticField(0x46128);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F730A68496186711___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F730A68496186711___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F730A68496186711___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
