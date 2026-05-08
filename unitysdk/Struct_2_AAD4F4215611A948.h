#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4355D25F091C65D0.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_AAD4F4215611A948_METHOD_2_2B6A659AA6A8398C_OFFSET UNITYSDK_OFFSET(0x81CD30)
#define STRUCT_2_AAD4F4215611A948_METHOD_2_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x67D990)
#define STRUCT_2_AAD4F4215611A948_METHOD_2_D18A34A3D69E165C_OFFSET UNITYSDK_OFFSET(0x81CB90)
#define STRUCT_2_AAD4F4215611A948_METHOD_2_DEEDAB6D2953EE52_OFFSET UNITYSDK_OFFSET(0x81CDC0)
#define STRUCT_2_AAD4F4215611A948__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E01EB0)
#define STRUCT_2_AAD4F4215611A948__CTOR_OFFSET UNITYSDK_OFFSET(0x67D1C0)

inline static constexpr unsigned int Struct_2_AAD4F4215611A948_TypeDefinitionIndex = 63586;

struct alignas(8) Struct_2_AAD4F4215611A948
{
	static ::Struct_2_AAD4F4215611A948* StaticGet_Field_2_3()
	{
		return (::Struct_2_AAD4F4215611A948*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_AAD4F4215611A948_TypeDefinitionIndex)->GetStaticField(0xC3A0);
	}
	::Struct_2_4355D25F091C65D0 Field_2_0; // 0x10
	::Struct_2_4355D25F091C65D0 Field_2_1; // 0x70
	::Struct_2_4355D25F091C65D0 Field_2_2; // 0xD0

	::System::Void _ctor(::Struct_2_4355D25F091C65D0 a1, ::Struct_2_4355D25F091C65D0 a2, ::Struct_2_4355D25F091C65D0 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4355D25F091C65D0, ::Struct_2_4355D25F091C65D0, ::Struct_2_4355D25F091C65D0))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948__CCTOR_OFFSET))();
	}

	/*
	::Foundation::Unreal::Interval_1<::System::Single> Method_2_D18A34A3D69E165C()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_METHOD_2_D18A34A3D69E165C_OFFSET))(this);
	}
	*/

	::System::Boolean Method_2_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_METHOD_2_41EC8E0AD6EE8093_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector3 Method_2_2B6A659AA6A8398C(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_METHOD_2_2B6A659AA6A8398C_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Vector3 Method_2_DEEDAB6D2953EE52(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_METHOD_2_DEEDAB6D2953EE52_OFFSET))(this, a1);
	}
	*/
};
