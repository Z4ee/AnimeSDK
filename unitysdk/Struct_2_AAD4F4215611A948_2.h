#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Struct_2_4355D25F091C65D0.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_AAD4F4215611A948_2_METHOD_2_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x67D990)
#define STRUCT_2_AAD4F4215611A948_2_METHOD_2_C2857113F5F21C53_OFFSET UNITYSDK_OFFSET(0x67DAE0)
#define STRUCT_2_AAD4F4215611A948_2_METHOD_2_D18A34A3D69E165C_OFFSET UNITYSDK_OFFSET(0x67D7F0)
#define STRUCT_2_AAD4F4215611A948_2_METHOD_2_D352DF11BA880B57_OFFSET UNITYSDK_OFFSET(0x67D320)
#define STRUCT_2_AAD4F4215611A948_2__CCTOR_OFFSET UNITYSDK_OFFSET(0xF1EADF0)
#define STRUCT_2_AAD4F4215611A948_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x67D1C0)
#define STRUCT_2_AAD4F4215611A948_2__CTOR_OFFSET UNITYSDK_OFFSET(0x67D070)

inline static constexpr unsigned int Struct_2_AAD4F4215611A948_2_TypeDefinitionIndex = 44310;

struct alignas(8) Struct_2_AAD4F4215611A948_2
{
	static ::Struct_2_AAD4F4215611A948_2* StaticGet_Field_2_3()
	{
		return (::Struct_2_AAD4F4215611A948_2*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_AAD4F4215611A948_2_TypeDefinitionIndex)->GetStaticField(0xD980);
	}
	::Struct_2_4355D25F091C65D0 Field_2_0; // 0x10
	::Struct_2_4355D25F091C65D0 Field_2_1; // 0x70
	::Struct_2_4355D25F091C65D0 Field_2_2; // 0xD0

	::System::Void _ctor(::Foundation::DefaultConstruct a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Struct_2_4355D25F091C65D0 a1, ::Struct_2_4355D25F091C65D0 a2, ::Struct_2_4355D25F091C65D0 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4355D25F091C65D0, ::Struct_2_4355D25F091C65D0, ::Struct_2_4355D25F091C65D0))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_2__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_2__CCTOR_OFFSET))();
	}

	/*
	::UnityEngine::Vector3 Method_2_D352DF11BA880B57(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_2_METHOD_2_D352DF11BA880B57_OFFSET))(this, a1);
	}
	*/

	/*
	::Foundation::Unreal::Interval_1<::System::Single> Method_2_D18A34A3D69E165C()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_2_METHOD_2_D18A34A3D69E165C_OFFSET))(this);
	}
	*/

	::System::Boolean Method_2_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_2_METHOD_2_41EC8E0AD6EE8093_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector3 Method_2_C2857113F5F21C53(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_2_METHOD_2_C2857113F5F21C53_OFFSET))(this, a1);
	}
	*/
};
