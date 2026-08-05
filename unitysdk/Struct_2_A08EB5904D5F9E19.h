#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_A08EB5904D5F9E19_METHOD_2_1EC5449CB6B84B92_OFFSET UNITYSDK_OFFSET(0x1098D160)
#define STRUCT_2_A08EB5904D5F9E19_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x6CCD80)
#define STRUCT_2_A08EB5904D5F9E19_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x6CCD30)
#define STRUCT_2_A08EB5904D5F9E19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6CCD20)
#define STRUCT_2_A08EB5904D5F9E19__CCTOR_OFFSET UNITYSDK_OFFSET(0x1098D070)
#define STRUCT_2_A08EB5904D5F9E19__CTOR_OFFSET UNITYSDK_OFFSET(0x6CCD00)

inline static constexpr unsigned int Struct_2_A08EB5904D5F9E19_TypeDefinitionIndex = 62729;

struct alignas(8) Struct_2_A08EB5904D5F9E19
{
	static ::Struct_2_A08EB5904D5F9E19* StaticGet_Field_2_6()
	{
		return (::Struct_2_A08EB5904D5F9E19*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A08EB5904D5F9E19_TypeDefinitionIndex)->GetStaticField(0x41890);
	}
	::System::Single Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x14
	::System::String* Field_2_7; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*&))((::PBYTE)hIl2Cpp + STRUCT_2_A08EB5904D5F9E19__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_A08EB5904D5F9E19__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A08EB5904D5F9E19_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A08EB5904D5F9E19_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A08EB5904D5F9E19_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	/*
	static ::System::Single Method_2_1EC5449CB6B84B92(::Struct_2_A08EB5904D5F9E19& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Single(*)(::Struct_2_A08EB5904D5F9E19&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_A08EB5904D5F9E19_METHOD_2_1EC5449CB6B84B92_OFFSET))(a1, a2, a3);
	}
	*/
};
