#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_E97B7E49B5EF9611___C_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x105839E0)
#define CLASS_1_E97B7E49B5EF9611___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10583990)
#define CLASS_1_E97B7E49B5EF9611___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105839D0)

inline static constexpr unsigned int Class_1_E97B7E49B5EF9611___c_TypeDefinitionIndex = 69528;

class Class_1_E97B7E49B5EF9611___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E97B7E49B5EF9611___c_TypeDefinitionIndex)->GetStaticField(0x42B70);
	}
	static ::Class_1_E97B7E49B5EF9611___c** StaticGet___9()
	{
		return (::Class_1_E97B7E49B5EF9611___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E97B7E49B5EF9611___c_TypeDefinitionIndex)->GetStaticField(0x42B78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E97B7E49B5EF9611___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B7E49B5EF9611___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B7E49B5EF9611___C_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}
};
