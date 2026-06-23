#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4355D25F091C65D0.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_AAD4F4215611A948_1_METHOD_2_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x790120)
#define STRUCT_2_AAD4F4215611A948_1_METHOD_2_84A2DCA3D61BDDE8_OFFSET UNITYSDK_OFFSET(0x7D8F60)
#define STRUCT_2_AAD4F4215611A948_1_METHOD_2_D18A34A3D69E165C_OFFSET UNITYSDK_OFFSET(0x7D8DC0)
#define STRUCT_2_AAD4F4215611A948_1_METHOD_2_FD1216823B1FE956_OFFSET UNITYSDK_OFFSET(0x7D9050)
#define STRUCT_2_AAD4F4215611A948_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x145CD7F0)
#define STRUCT_2_AAD4F4215611A948_1__CTOR_OFFSET UNITYSDK_OFFSET(0x78F9E0)

inline static constexpr unsigned int Struct_2_AAD4F4215611A948_1_TypeDefinitionIndex = 53773;

struct alignas(8) Struct_2_AAD4F4215611A948_1
{
	static ::Struct_2_AAD4F4215611A948_1* StaticGet_Field_2_3()
	{
		return (::Struct_2_AAD4F4215611A948_1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_AAD4F4215611A948_1_TypeDefinitionIndex)->GetStaticField(0xE090);
	}
	::Struct_2_4355D25F091C65D0 Field_2_0; // 0x10
	::Struct_2_4355D25F091C65D0 Field_2_1; // 0x70
	::Struct_2_4355D25F091C65D0 Field_2_2; // 0xD0

	::System::Void _ctor(::Struct_2_4355D25F091C65D0 a1, ::Struct_2_4355D25F091C65D0 a2, ::Struct_2_4355D25F091C65D0 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4355D25F091C65D0, ::Struct_2_4355D25F091C65D0, ::Struct_2_4355D25F091C65D0))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_1__CCTOR_OFFSET))();
	}

	/*
	::Foundation::Unreal::Interval_1<::System::Single> Method_2_D18A34A3D69E165C()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_1_METHOD_2_D18A34A3D69E165C_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Quaternion Method_2_84A2DCA3D61BDDE8(::System::Single a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_1_METHOD_2_84A2DCA3D61BDDE8_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_1_METHOD_2_41EC8E0AD6EE8093_OFFSET))(this);
	}

	/*
	::UnityEngine::Quaternion Method_2_FD1216823B1FE956(::System::Single a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_AAD4F4215611A948_1_METHOD_2_FD1216823B1FE956_OFFSET))(this, a1);
	}
	*/
};
