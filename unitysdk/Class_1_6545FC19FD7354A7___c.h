#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_6545FC19FD7354A7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x118F3F90)
#define CLASS_1_6545FC19FD7354A7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x118F3FC0)
#define CLASS_1_6545FC19FD7354A7___C___ONFINALEND_B__366_0_OFFSET UNITYSDK_OFFSET(0x118F4180)
#define CLASS_1_6545FC19FD7354A7___C___PLAYSCREENCUT_B__153_0_OFFSET UNITYSDK_OFFSET(0x118F3FD0)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex = 56752;

class Class_1_6545FC19FD7354A7___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__366_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0x18350);
	}
	static ::Class_1_6545FC19FD7354A7___c** StaticGet___9()
	{
		return (::Class_1_6545FC19FD7354A7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0x18358);
	}
	static ::System::Action** StaticGet___9__153_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0x18360);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__CTOR_OFFSET))(this);
	}

	::System::Void __PlayScreenCut_b__153_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C___PLAYSCREENCUT_B__153_0_OFFSET))(this);
	}

	::System::Void __OnFinalEnd_b__366_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C___ONFINALEND_B__366_0_OFFSET))(this);
	}
};
