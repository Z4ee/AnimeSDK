#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_24B2CA816EFA1FA5_OFFSET UNITYSDK_OFFSET(0x80AE60)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_7D90392CC948E0F1_1_OFFSET UNITYSDK_OFFSET(0x80B020)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_7D90392CC948E0F1_OFFSET UNITYSDK_OFFSET(0x80AC20)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_7E69B386DB903252_OFFSET UNITYSDK_OFFSET(0x80AE30)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_953A3E0C70D9A2D6_OFFSET UNITYSDK_OFFSET(0x80AE40)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_A00569663953DD78_OFFSET UNITYSDK_OFFSET(0x15C99C00)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x80AD30)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_DB2E7EF3706BD932_OFFSET UNITYSDK_OFFSET(0x80AB30)
#define STRUCT_2_EBB8F49C837ECBC8__CTOR_OFFSET UNITYSDK_OFFSET(0x80AA90)

inline static constexpr unsigned int Struct_2_EBB8F49C837ECBC8_TypeDefinitionIndex = 56940;

struct alignas(8) Struct_2_EBB8F49C837ECBC8
{
	::Foundation::Variable_1<::UnityEngine::Vector3> Field_2_0; // 0x10
	::Foundation::Clamped_1<::System::Single> Field_2_1; // 0x30
	::PipelineCamera::EulerRotation Field_2_2; // 0x48

	::System::Void _ctor(::Foundation::Variable_1<::UnityEngine::Vector3> a1, ::Foundation::Clamped_1<::System::Single> a2, ::PipelineCamera::EulerRotation a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::UnityEngine::Vector3>, ::Foundation::Clamped_1<::System::Single>, ::PipelineCamera::EulerRotation))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DB2E7EF3706BD932(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_DB2E7EF3706BD932_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7D90392CC948E0F1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_7D90392CC948E0F1_OFFSET))(this, a1, a2, a3);
	}

	/*
	::UnityEngine::Quaternion Method_2_C34AC80B04BCFF1B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_C34AC80B04BCFF1B_OFFSET))(this);
	}
	*/

	/*
	static ::PipelineCamera::WorldBasicCameraData Method_2_A00569663953DD78(::Struct_2_EBB8F49C837ECBC8& a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Struct_2_EBB8F49C837ECBC8&))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_A00569663953DD78_OFFSET))(a1);
	}
	*/

	::System::Void Method_2_7E69B386DB903252(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_7E69B386DB903252_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_953A3E0C70D9A2D6(::Foundation::Unreal::Interval_1<::System::Single> a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>, ::System::Single&))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_953A3E0C70D9A2D6_OFFSET))(this, a1, a2);
	}
	*/

	::System::Void Method_2_24B2CA816EFA1FA5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_24B2CA816EFA1FA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D90392CC948E0F1_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_7D90392CC948E0F1_1_OFFSET))(this, a1, a2, a3);
	}
};
