#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_246E24AFA647197C_CLEAR_OFFSET UNITYSDK_OFFSET(0xBF48CE0)
#define CLASS_1_246E24AFA647197C_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0xBF49240)
#define CLASS_1_246E24AFA647197C_METHOD_1_6DCCBA012138E764_OFFSET UNITYSDK_OFFSET(0xBF48D30)
#define CLASS_1_246E24AFA647197C_METHOD_1_A10567177DDE0779_OFFSET UNITYSDK_OFFSET(0xBF491E0)
#define CLASS_1_246E24AFA647197C_METHOD_1_BAD919AA5E7DD49E_OFFSET UNITYSDK_OFFSET(0xBF49000)
#define CLASS_1_246E24AFA647197C_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xBF48C60)
#define CLASS_1_246E24AFA647197C_SET_PRECISION_OFFSET UNITYSDK_OFFSET(0xBF49250)
#define CLASS_1_246E24AFA647197C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF49270)
#define CLASS_1_246E24AFA647197C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF49260)

inline static constexpr unsigned int Class_1_246E24AFA647197C_TypeDefinitionIndex = 73284;

class Class_1_246E24AFA647197C : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_AKGDJAPIODG()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_246E24AFA647197C_TypeDefinitionIndex)->GetStaticField(0x671A0);
	}
	::System::Int32 _Precision_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_246E24AFA647197C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_246E24AFA647197C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_246E24AFA647197C_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_246E24AFA647197C_CLEAR_OFFSET))(this);
	}

	::System::String* Method_1_6DCCBA012138E764(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_246E24AFA647197C_METHOD_1_6DCCBA012138E764_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_BAD919AA5E7DD49E(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_246E24AFA647197C_METHOD_1_BAD919AA5E7DD49E_OFFSET))(a1);
	}

	static ::System::String* Method_1_A10567177DDE0779(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_246E24AFA647197C_METHOD_1_A10567177DDE0779_OFFSET))(a1);
	}

	::System::Int32 get_Precision()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_246E24AFA647197C_GET_PRECISION_OFFSET))(this);
	}

	::System::Void set_Precision(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_246E24AFA647197C_SET_PRECISION_OFFSET))(this, a1);
	}
};
