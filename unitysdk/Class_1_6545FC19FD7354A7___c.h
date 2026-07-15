#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_6545FC19FD7354A7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E16680)
#define CLASS_1_6545FC19FD7354A7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E166B0)
#define CLASS_1_6545FC19FD7354A7___C___ONFINALEND_B__369_0_OFFSET UNITYSDK_OFFSET(0x15E16870)
#define CLASS_1_6545FC19FD7354A7___C___PLAYSCREENCUT_B__154_0_OFFSET UNITYSDK_OFFSET(0x15E166C0)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex = 57999;

class Class_1_6545FC19FD7354A7___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__154_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0xD590);
	}
	static ::System::Action** StaticGet___9__369_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0xD598);
	}
	static ::Class_1_6545FC19FD7354A7___c** StaticGet___9()
	{
		return (::Class_1_6545FC19FD7354A7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0xD5A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__CTOR_OFFSET))(this);
	}

	::System::Void __PlayScreenCut_b__154_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C___PLAYSCREENCUT_B__154_0_OFFSET))(this);
	}

	::System::Void __OnFinalEnd_b__369_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C___ONFINALEND_B__369_0_OFFSET))(this);
	}
};
