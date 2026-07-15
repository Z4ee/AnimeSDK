#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_5EAE88E6779FD27F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1765E3E0)
#define CLASS_1_5EAE88E6779FD27F_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0x1765F140)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_6DAC75DD0138A9D3_OFFSET UNITYSDK_OFFSET(0x1765E430)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_6DCCBA012138E764_OFFSET UNITYSDK_OFFSET(0x1765EA40)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_BAD919AA5E7DD49E_OFFSET UNITYSDK_OFFSET(0x1765EF30)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_C221236C2C54E9F7_OFFSET UNITYSDK_OFFSET(0x1765F0A0)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x1765E340)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_EF6DA9B4BE6A40D9_OFFSET UNITYSDK_OFFSET(0x1765E670)
#define CLASS_1_5EAE88E6779FD27F_SET_PRECISION_OFFSET UNITYSDK_OFFSET(0x1765F150)
#define CLASS_1_5EAE88E6779FD27F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1765F170)
#define CLASS_1_5EAE88E6779FD27F__CTOR_OFFSET UNITYSDK_OFFSET(0x1765F160)

inline static constexpr unsigned int Class_1_5EAE88E6779FD27F_TypeDefinitionIndex = 70034;

class Class_1_5EAE88E6779FD27F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5EAE88E6779FD27F_TypeDefinitionIndex)->GetStaticField(0x59F20);
	}
	// static const ::System::Double Field_1_1; // 0x0
	// static const ::System::Double Field_1_2; // 0x0
	// static const ::System::Double Field_1_3; // 0x0
	// static const ::System::Double Field_1_4; // 0x0
	::System::Int32 _Precision_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F_CLEAR_OFFSET))(this);
	}

	::System::String* Method_1_6DAC75DD0138A9D3(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F_METHOD_1_6DAC75DD0138A9D3_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_EF6DA9B4BE6A40D9(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F_METHOD_1_EF6DA9B4BE6A40D9_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_6DCCBA012138E764(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F_METHOD_1_6DCCBA012138E764_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_BAD919AA5E7DD49E(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F_METHOD_1_BAD919AA5E7DD49E_OFFSET))(a1);
	}

	static ::System::String* Method_1_C221236C2C54E9F7(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F_METHOD_1_C221236C2C54E9F7_OFFSET))(a1);
	}

	::System::Int32 get_Precision()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F_GET_PRECISION_OFFSET))(this);
	}

	::System::Void set_Precision(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5EAE88E6779FD27F_SET_PRECISION_OFFSET))(this, a1);
	}
};
