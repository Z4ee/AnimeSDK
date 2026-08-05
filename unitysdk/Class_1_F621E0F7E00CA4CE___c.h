#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_F621E0F7E00CA4CE___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10D10CD0)
#define CLASS_1_F621E0F7E00CA4CE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D10C80)
#define CLASS_1_F621E0F7E00CA4CE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D10CC0)

inline static constexpr unsigned int Class_1_F621E0F7E00CA4CE___c_TypeDefinitionIndex = 52211;

class Class_1_F621E0F7E00CA4CE___c : public ::System::Object
{
public:
	static ::Class_1_F621E0F7E00CA4CE___c** StaticGet___9()
	{
		return (::Class_1_F621E0F7E00CA4CE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F621E0F7E00CA4CE___c_TypeDefinitionIndex)->GetStaticField(0x4CE40);
	}
	static ::System::Action** StaticGet___9__0_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F621E0F7E00CA4CE___c_TypeDefinitionIndex)->GetStaticField(0x4CE48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F621E0F7E00CA4CE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F621E0F7E00CA4CE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F621E0F7E00CA4CE___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
