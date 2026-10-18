#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_6545FC19FD7354A7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1334C0F0)
#define CLASS_1_6545FC19FD7354A7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1334C120)
#define CLASS_1_6545FC19FD7354A7___C___ONFINALEND_B__378_0_OFFSET UNITYSDK_OFFSET(0x1334C130)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex = 60721;

class Class_1_6545FC19FD7354A7___c : public ::System::Object
{
public:
	static ::Class_1_6545FC19FD7354A7___c** StaticGet___9()
	{
		return (::Class_1_6545FC19FD7354A7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0x6FFE0);
	}
	static ::System::Action** StaticGet___9__378_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0x6FFE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnFinalEnd_b__378_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C___ONFINALEND_B__378_0_OFFSET))(this);
	}
};
