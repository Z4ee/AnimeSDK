#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_5EAE88E6779FD27F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A7EEFB0)
#define CLASS_1_5EAE88E6779FD27F_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0x1A7EFD10)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_6DAC75DD0138A9D3_OFFSET UNITYSDK_OFFSET(0x1A7EF000)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_6DCCBA012138E764_OFFSET UNITYSDK_OFFSET(0x1A7EF610)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_BAD919AA5E7DD49E_OFFSET UNITYSDK_OFFSET(0x1A7EFB00)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_C221236C2C54E9F7_OFFSET UNITYSDK_OFFSET(0x1A7EFC70)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x1A7EEF10)
#define CLASS_1_5EAE88E6779FD27F_METHOD_1_EF6DA9B4BE6A40D9_OFFSET UNITYSDK_OFFSET(0x1A7EF240)
#define CLASS_1_5EAE88E6779FD27F_SET_PRECISION_OFFSET UNITYSDK_OFFSET(0x1A7EFD20)
#define CLASS_1_5EAE88E6779FD27F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7EFD40)
#define CLASS_1_5EAE88E6779FD27F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EFD30)

inline static constexpr unsigned int Class_1_5EAE88E6779FD27F_TypeDefinitionIndex = 73291;

class Class_1_5EAE88E6779FD27F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_AKGDJAPIODG()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5EAE88E6779FD27F_TypeDefinitionIndex)->GetStaticField(0x613D0);
	}
	// static const ::System::Double PIHPADHCDGM; // 0x0
	// static const ::System::Double GLGNDNODFCM; // 0x0
	// static const ::System::Double CLFGGFOALGB; // 0x0
	// static const ::System::Double PPCFAKLGFNM; // 0x0
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
