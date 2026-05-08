#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A948.h"
#include "unitysdk/Struct_2_AAD4F4215611A948_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_E2016BDCE994E996_METHOD_2_04308B9775AF6012_OFFSET UNITYSDK_OFFSET(0x657120)
#define STRUCT_2_E2016BDCE994E996_METHOD_2_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x656E60)
#define STRUCT_2_E2016BDCE994E996_METHOD_2_75F172D815149F7C_OFFSET UNITYSDK_OFFSET(0x6571B0)
#define STRUCT_2_E2016BDCE994E996_METHOD_2_D1D7BFA62EAC5DA7_OFFSET UNITYSDK_OFFSET(0x657950)
#define STRUCT_2_E2016BDCE994E996_METHOD_2_FF8B6CCF49B31B74_OFFSET UNITYSDK_OFFSET(0x656E40)
#define STRUCT_2_E2016BDCE994E996__CCTOR_OFFSET UNITYSDK_OFFSET(0xF08FA20)

inline static constexpr unsigned int Struct_2_E2016BDCE994E996_TypeDefinitionIndex = 40759;

struct alignas(8) Struct_2_E2016BDCE994E996
{
	static ::Struct_2_E2016BDCE994E996* StaticGet_Field_2_2()
	{
		return (::Struct_2_E2016BDCE994E996*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_E2016BDCE994E996_TypeDefinitionIndex)->GetStaticField(0xD330);
	}
	::Struct_2_AAD4F4215611A948 Field_2_0; // 0x10
	::Struct_2_AAD4F4215611A948_1 Field_2_1; // 0x130

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E2016BDCE994E996__CCTOR_OFFSET))();
	}

	/*
	::Foundation::Unreal::FTransform Method_2_FF8B6CCF49B31B74(::System::Single a1)
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_E2016BDCE994E996_METHOD_2_FF8B6CCF49B31B74_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E2016BDCE994E996_METHOD_2_41EC8E0AD6EE8093_OFFSET))(this);
	}

	/*
	::Foundation::Unreal::FTransform Method_2_04308B9775AF6012(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_E2016BDCE994E996_METHOD_2_04308B9775AF6012_OFFSET))(this, a1);
	}
	*/

	/*
	::Foundation::Unreal::FTransform Method_2_75F172D815149F7C(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_E2016BDCE994E996_METHOD_2_75F172D815149F7C_OFFSET))(this, a1);
	}
	*/

	/*
	::Foundation::Unreal::Interval_1<::System::Single> Method_2_D1D7BFA62EAC5DA7()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E2016BDCE994E996_METHOD_2_D1D7BFA62EAC5DA7_OFFSET))(this);
	}
	*/
};
