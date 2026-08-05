#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_18A3BFC9738829A7_OFFSET UNITYSDK_OFFSET(0x865200)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x8651F0)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_953A3E0C70D9A2D6_OFFSET UNITYSDK_OFFSET(0x864F00)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_A00569663953DD78_OFFSET UNITYSDK_OFFSET(0x17200820)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0x864F20)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_C122AB2878DA896C_1_OFFSET UNITYSDK_OFFSET(0x8650E0)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_C122AB2878DA896C_OFFSET UNITYSDK_OFFSET(0x864D50)
#define STRUCT_2_EBB8F49C837ECBC8_METHOD_2_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x864E00)
#define STRUCT_2_EBB8F49C837ECBC8__CTOR_OFFSET UNITYSDK_OFFSET(0x864CB0)

inline static constexpr unsigned int Struct_2_EBB8F49C837ECBC8_TypeDefinitionIndex = 79647;

struct alignas(8) Struct_2_EBB8F49C837ECBC8
{
	::Foundation::Variable_1<::UnityEngine::Vector3> Field_2_2; // 0x10
	::Foundation::Clamped_1<::System::Single> Field_2_1; // 0x30
	::PipelineCamera::EulerRotation Field_2_0; // 0x48

	::System::Void _ctor(::Foundation::Variable_1<::UnityEngine::Vector3> a1, ::Foundation::Clamped_1<::System::Single> a2, ::PipelineCamera::EulerRotation a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::UnityEngine::Vector3>, ::Foundation::Clamped_1<::System::Single>, ::PipelineCamera::EulerRotation))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C122AB2878DA896C(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_C122AB2878DA896C_OFFSET))(this, a1, a2, a3);
	}

	/*
	::UnityEngine::Quaternion Method_2_C34AC80B04BCFF1B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_C34AC80B04BCFF1B_OFFSET))(this);
	}
	*/

	/*
	::System::Void Method_2_953A3E0C70D9A2D6(::Foundation::Unreal::Interval_1<::System::Single> a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>, ::System::Single&))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_953A3E0C70D9A2D6_OFFSET))(this, a1, a2);
	}
	*/

	::System::Void Method_2_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_C122AB2878DA896C_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_C122AB2878DA896C_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_480EACF8B499351F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_480EACF8B499351F_OFFSET))(this, a1);
	}

	::System::Void Method_2_18A3BFC9738829A7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_18A3BFC9738829A7_OFFSET))(this, a1, a2);
	}

	/*
	static ::PipelineCamera::WorldBasicCameraData Method_2_A00569663953DD78(::Struct_2_EBB8F49C837ECBC8& a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Struct_2_EBB8F49C837ECBC8&))((::PBYTE)hIl2Cpp + STRUCT_2_EBB8F49C837ECBC8_METHOD_2_A00569663953DD78_OFFSET))(a1);
	}
	*/
};
