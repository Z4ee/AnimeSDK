#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/Axis.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_F05FA2639984AB9F_METHOD_2_08B13B541773FBB0_1_OFFSET UNITYSDK_OFFSET(0x61E950)
#define STRUCT_2_F05FA2639984AB9F_METHOD_2_08B13B541773FBB0_OFFSET UNITYSDK_OFFSET(0x61E820)
#define STRUCT_2_F05FA2639984AB9F_METHOD_2_0C2475D66B7731A6_OFFSET UNITYSDK_OFFSET(0x61E8C0)
#define STRUCT_2_F05FA2639984AB9F_METHOD_2_2FBCD398A9261AD9_OFFSET UNITYSDK_OFFSET(0x61E7E0)
#define STRUCT_2_F05FA2639984AB9F_METHOD_2_A7E1C6A1FC599256_OFFSET UNITYSDK_OFFSET(0x61E830)
#define STRUCT_2_F05FA2639984AB9F_METHOD_2_B1ECD783BD361910_OFFSET UNITYSDK_OFFSET(0xECED780)
#define STRUCT_2_F05FA2639984AB9F_METHOD_2_CBA4B4666B09026D_OFFSET UNITYSDK_OFFSET(0xECEC650)
#define STRUCT_2_F05FA2639984AB9F_METHOD_2_DC91253AA06C6A80_OFFSET UNITYSDK_OFFSET(0x61E910)
#define STRUCT_2_F05FA2639984AB9F__CTOR_OFFSET UNITYSDK_OFFSET(0x61E7A0)

inline static constexpr unsigned int Struct_2_F05FA2639984AB9F_TypeDefinitionIndex = 66181;

struct alignas(4) Struct_2_F05FA2639984AB9F
{
	::UnityEngine::Vector3 Field_2_1; // 0x10
	::UnityEngine::Vector3 Field_2_0; // 0x1C
	::System::Single Field_2_7; // 0x28

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_F05FA2639984AB9F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Struct_2_F05FA2639984AB9F Method_2_CBA4B4666B09026D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::Struct_2_F05FA2639984AB9F(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_F05FA2639984AB9F_METHOD_2_CBA4B4666B09026D_OFFSET))(a1, a2, a3);
	}

	/*
	::UnityEngine::Vector3 Method_2_2FBCD398A9261AD9(::Foundation::DualQuaternion a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + STRUCT_2_F05FA2639984AB9F_METHOD_2_2FBCD398A9261AD9_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Single Method_2_08B13B541773FBB0(::Foundation::DualQuaternion a1)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + STRUCT_2_F05FA2639984AB9F_METHOD_2_08B13B541773FBB0_OFFSET))(this, a1);
	}
	*/

	/*
	::Foundation::Geometry::ExtendConvexHull2D::ConvexHull Method_2_A7E1C6A1FC599256(::Foundation::DualQuaternion a1, ::PipelineCamera::FinalCameraData a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a3)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + STRUCT_2_F05FA2639984AB9F_METHOD_2_A7E1C6A1FC599256_OFFSET))(this, a1, a2, a3);
	}
	*/

	static ::Struct_2_F05FA2639984AB9F Method_2_B1ECD783BD361910(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Animations::Axis a4)
	{
		return ((::Struct_2_F05FA2639984AB9F(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Animations::Axis))((::PBYTE)hIl2Cpp + STRUCT_2_F05FA2639984AB9F_METHOD_2_B1ECD783BD361910_OFFSET))(a1, a2, a3, a4);
	}

	/*
	::System::Nullable_1<::System::Single> Method_2_0C2475D66B7731A6(::Foundation::DualQuaternion a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_F05FA2639984AB9F_METHOD_2_0C2475D66B7731A6_OFFSET))(this, a1, a2, a3, a4);
	}
	*/

	/*
	::UnityEngine::Bounds Method_2_DC91253AA06C6A80(::Foundation::DualQuaternion a1)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + STRUCT_2_F05FA2639984AB9F_METHOD_2_DC91253AA06C6A80_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Single Method_2_08B13B541773FBB0_1(::Foundation::DualQuaternion a1)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + STRUCT_2_F05FA2639984AB9F_METHOD_2_08B13B541773FBB0_1_OFFSET))(this, a1);
	}
	*/
};
