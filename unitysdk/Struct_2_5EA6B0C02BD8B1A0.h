#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_08B13B541773FBB0_OFFSET UNITYSDK_OFFSET(0x478130)
#define STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_2FBCD398A9261AD9_OFFSET UNITYSDK_OFFSET(0x7DB110)
#define STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_371A55F2C8CB01A5_OFFSET UNITYSDK_OFFSET(0x7E4A10)
#define STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_58FEC22ED8D18E98_OFFSET UNITYSDK_OFFSET(0x7E4BD0)
#define STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_5C18560E727BC523_OFFSET UNITYSDK_OFFSET(0x13E078D0)
#define STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_BF6F8FDC48A86D8B_OFFSET UNITYSDK_OFFSET(0x7E4B40)
#define STRUCT_2_5EA6B0C02BD8B1A0__CTOR_OFFSET UNITYSDK_OFFSET(0x478110)

inline static constexpr unsigned int Struct_2_5EA6B0C02BD8B1A0_TypeDefinitionIndex = 72680;

struct alignas(4) Struct_2_5EA6B0C02BD8B1A0
{
	::UnityEngine::Vector3 Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5EA6B0C02BD8B1A0__CTOR_OFFSET))(this, a1, a2);
	}

	/*
	::UnityEngine::Vector3 Method_2_2FBCD398A9261AD9(::Foundation::DualQuaternion a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_2FBCD398A9261AD9_OFFSET))(this, a1);
	}
	*/

	static ::Struct_2_5EA6B0C02BD8B1A0 Method_2_5C18560E727BC523(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::Struct_2_5EA6B0C02BD8B1A0(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_5C18560E727BC523_OFFSET))(a1, a2);
	}

	/*
	::Foundation::Geometry::ExtendConvexHull2D::ConvexHull Method_2_371A55F2C8CB01A5(::Foundation::DualQuaternion a1, ::PipelineCamera::FinalCameraData a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a3)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_371A55F2C8CB01A5_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	::System::Single Method_2_08B13B541773FBB0(::Foundation::DualQuaternion a1)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_08B13B541773FBB0_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Bounds Method_2_BF6F8FDC48A86D8B(::Foundation::DualQuaternion a1)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_BF6F8FDC48A86D8B_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Nullable_1<::System::Single> Method_2_58FEC22ED8D18E98(::Foundation::DualQuaternion a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_5EA6B0C02BD8B1A0_METHOD_2_58FEC22ED8D18E98_OFFSET))(this, a1, a2, a3, a4);
	}
	*/
};
