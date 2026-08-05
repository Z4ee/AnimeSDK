#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EE0106BAC68200BB_Struct_2_813E40854E4D2E88.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }

#define CLASS_3_18B555B070570165_METHOD_3_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x137DC260)
#define CLASS_3_18B555B070570165_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x137DC230)
#define CLASS_3_18B555B070570165_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x137DC240)
#define CLASS_3_18B555B070570165_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x137DC250)
#define CLASS_3_18B555B070570165_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x137DC220)
#define CLASS_3_18B555B070570165_ONATTACH_OFFSET UNITYSDK_OFFSET(0x137DBC90)
#define CLASS_3_18B555B070570165_ONDETACH_OFFSET UNITYSDK_OFFSET(0x137DC140)
#define CLASS_3_18B555B070570165_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x137DC010)
#define CLASS_3_18B555B070570165_ONENABLE_OFFSET UNITYSDK_OFFSET(0x137DBE10)
#define CLASS_3_18B555B070570165__CCTOR_OFFSET UNITYSDK_OFFSET(0x137DC1C0)
#define CLASS_3_18B555B070570165__CTOR_OFFSET UNITYSDK_OFFSET(0x137DC180)

inline static constexpr unsigned int Class_3_18B555B070570165_TypeDefinitionIndex = 58961;

class Class_3_18B555B070570165 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_18B555B070570165*>
{
public:
	static ::System::String** StaticGet_Field_3_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_18B555B070570165_TypeDefinitionIndex)->GetStaticField(0x31540);
	}
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_18B555B070570165_TypeDefinitionIndex)->GetStaticField(0x31548);
	}
	static ::System::String** StaticGet_Field_3_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_18B555B070570165_TypeDefinitionIndex)->GetStaticField(0x31550);
	}
	::System::String* Field_3_6; // 0x20
	::Class_2_EE0106BAC68200BB_Struct_2_813E40854E4D2E88 Field_3_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165__CCTOR_OFFSET))();
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_18B555B070570165_METHOD_3_050E70FEDB783306_OFFSET))(this, a1);
	}
};
