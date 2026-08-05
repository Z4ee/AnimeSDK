#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Struct_2_4355D25F091C65D0.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_AAD4F4215611A948_METHOD_2_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x775890)
#define STRUCT_2_AAD4F4215611A948_METHOD_2_5E4D9647B627DDD4_OFFSET UNITYSDK_OFFSET(0x775790)
#define STRUCT_2_AAD4F4215611A948_METHOD_2_CC0DA00945B2DC22_OFFSET UNITYSDK_OFFSET(0x775110)
#define STRUCT_2_AAD4F4215611A948_METHOD_2_D18A34A3D69E165C_OFFSET UNITYSDK_OFFSET(0x7755F0)
#define STRUCT_2_AAD4F4215611A948__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BC8790)
#define STRUCT_2_AAD4F4215611A948__CTOR_1_OFFSET UNITYSDK_OFFSET(0x774FB0)
#define STRUCT_2_AAD4F4215611A948__CTOR_OFFSET UNITYSDK_OFFSET(0x774E60)

inline static constexpr unsigned int Struct_2_AAD4F4215611A948_TypeDefinitionIndex = 81496;

struct alignas(8) Struct_2_AAD4F4215611A948
{
	static ::Struct_2_AAD4F4215611A948* StaticGet_Field_2_6()
	{
		return (::Struct_2_AAD4F4215611A948*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_AAD4F4215611A948_TypeDefinitionIndex)->GetStaticField(0xED00);
	}
	::Struct_2_4355D25F091C65D0 Field_2_1; // 0x10
	::Struct_2_4355D25F091C65D0 Field_2_0; // 0x70
	::Struct_2_4355D25F091C65D0 Field_2_7; // 0xD0

	::System::Void _ctor(::Foundation::DefaultConstruct a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Struct_2_4355D25F091C65D0 a1, ::Struct_2_4355D25F091C65D0 a2, ::Struct_2_4355D25F091C65D0 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4355D25F091C65D0, ::Struct_2_4355D25F091C65D0, ::Struct_2_4355D25F091C65D0))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948__CCTOR_OFFSET))();
	}

	/*
	::UnityEngine::Vector3 Method_2_CC0DA00945B2DC22(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_METHOD_2_CC0DA00945B2DC22_OFFSET))(this, a1);
	}
	*/

	/*
	::Foundation::Unreal::Interval_1<::System::Single> Method_2_D18A34A3D69E165C()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_METHOD_2_D18A34A3D69E165C_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Vector3 Method_2_5E4D9647B627DDD4(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_METHOD_2_5E4D9647B627DDD4_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_METHOD_2_41EC8E0AD6EE8093_OFFSET))(this);
	}
};
