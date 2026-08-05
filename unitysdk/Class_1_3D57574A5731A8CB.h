#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHull.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHullBuffer.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldScreenCameraData.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_3D57574A5731A8CB_METHOD_1_03427E78688CE9A6_OFFSET UNITYSDK_OFFSET(0x1C134040)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_0B7DB58570700F2E_OFFSET UNITYSDK_OFFSET(0x1C12D840)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_1790C9BB34C526E9_OFFSET UNITYSDK_OFFSET(0x1C135220)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_2F375D2FC26A1523_OFFSET UNITYSDK_OFFSET(0x1C12C770)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_63DF395B3BDEB938_OFFSET UNITYSDK_OFFSET(0x1C135230)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_8083FEBFE16F3196_OFFSET UNITYSDK_OFFSET(0x1C12B560)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_8B55B3CB9F9819A0_OFFSET UNITYSDK_OFFSET(0x1C12B800)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_A3E416C233D305F8_OFFSET UNITYSDK_OFFSET(0x1C12D300)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_A517DCCC3AE1DC83_OFFSET UNITYSDK_OFFSET(0x1C12D9C0)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_ABFAC0EC1D3B5CF4_1_OFFSET UNITYSDK_OFFSET(0x1C135200)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_ABFAC0EC1D3B5CF4_OFFSET UNITYSDK_OFFSET(0x1C12D830)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_BB4FA584E8AD685A_1_OFFSET UNITYSDK_OFFSET(0x1C12D7F0)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_BB4FA584E8AD685A_2_OFFSET UNITYSDK_OFFSET(0x1C12D9B0)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_BB4FA584E8AD685A_3_OFFSET UNITYSDK_OFFSET(0x1C1351B0)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_BB4FA584E8AD685A_4_OFFSET UNITYSDK_OFFSET(0x1C1351C0)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_BB4FA584E8AD685A_OFFSET UNITYSDK_OFFSET(0x1C12C760)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_BC4B58627F534F7C_OFFSET UNITYSDK_OFFSET(0x1C1351D0)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1C135170)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C134000)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_CC1B635418AD2262_1_OFFSET UNITYSDK_OFFSET(0x1C12D800)
#define CLASS_1_3D57574A5731A8CB_METHOD_1_CC1B635418AD2262_OFFSET UNITYSDK_OFFSET(0x1C12D2D0)
#define CLASS_1_3D57574A5731A8CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12B530)

inline static constexpr unsigned int Class_1_3D57574A5731A8CB_TypeDefinitionIndex = 43516;

class Class_1_3D57574A5731A8CB : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_9 = 0x10; // 0x0
	::UnityEngine::AnimationCurve* Field_1_8; // 0x10
	::UnityEngine::AnimationCurve* Field_1_15; // 0x18
	::Foundation::Clamped_1<::System::Single> Field_1_0; // 0x20
	::UnityEngine::AnimationCurve* Field_1_13; // 0x38
	::UnityEngine::AnimationCurve* Field_1_12; // 0x40
	::UnityEngine::AnimationCurve* Field_1_14; // 0x48
	::System::Single Field_1_6; // 0x50
	::PipelineCamera::WorldBasicCameraData Field_1_7; // 0x54
	::System::Single Field_1_4; // 0x80
	::System::Single Field_1_11; // 0x84
	::System::Single Field_1_5; // 0x88
	::System::Boolean Field_1_10; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_8083FEBFE16F3196(::System::Single a1, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_8083FEBFE16F3196_OFFSET))(a1, a2, a3);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_8B55B3CB9F9819A0(::Struct_2_9F85650CFFBE9F44 a1, ::Struct_2_9F85650CFFBE9F44 a2, ::System::Single a3)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_8B55B3CB9F9819A0_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_3D57574A5731A8CB* Method_1_BB4FA584E8AD685A(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_BB4FA584E8AD685A_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_2F375D2FC26A1523(::PipelineCamera::WorldScreenCameraData& a1, ::System::Single a2, ::Struct_2_9F85650CFFBE9F44 a3, ::Struct_2_9F85650CFFBE9F44 a4, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a5, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a6)
	{
		return ((::System::Void(*)(::PipelineCamera::WorldScreenCameraData&, ::System::Single, ::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_2F375D2FC26A1523_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::Class_1_3D57574A5731A8CB* Method_1_CC1B635418AD2262(::System::Single a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_CC1B635418AD2262_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_A3E416C233D305F8(::System::Single a1, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_A3E416C233D305F8_OFFSET))(a1, a2, a3);
	}

	::Class_1_3D57574A5731A8CB* Method_1_BB4FA584E8AD685A_1(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_BB4FA584E8AD685A_1_OFFSET))(this, a1);
	}

	::Class_1_3D57574A5731A8CB* Method_1_CC1B635418AD2262_1(::System::Single a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_CC1B635418AD2262_1_OFFSET))(this, a1);
	}

	::Class_1_3D57574A5731A8CB* Method_1_ABFAC0EC1D3B5CF4(::System::Single a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_ABFAC0EC1D3B5CF4_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_0B7DB58570700F2E(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_0B7DB58570700F2E_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_3D57574A5731A8CB* Method_1_BB4FA584E8AD685A_2(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_BB4FA584E8AD685A_2_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_A517DCCC3AE1DC83(::Foundation::DualQuaternion a1, ::UnityEngine::Bounds a2, ::UnityEngine::Bounds a3)
	{
		return ((::System::Single(*)(::Foundation::DualQuaternion, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_A517DCCC3AE1DC83_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_03427E78688CE9A6(::PipelineCamera::WorldScreenCameraData& a1, ::System::Single a2, ::Struct_2_9F85650CFFBE9F44 a3, ::Struct_2_9F85650CFFBE9F44 a4, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a5, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a6)
	{
		return ((::System::Void(*)(::PipelineCamera::WorldScreenCameraData&, ::System::Single, ::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_03427E78688CE9A6_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_1_3D57574A5731A8CB* Method_1_BB4FA584E8AD685A_3(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_BB4FA584E8AD685A_3_OFFSET))(this, a1);
	}

	::Class_1_3D57574A5731A8CB* Method_1_BB4FA584E8AD685A_4(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_BB4FA584E8AD685A_4_OFFSET))(this, a1);
	}

	::Class_1_3D57574A5731A8CB* Method_1_BC4B58627F534F7C(::PipelineCamera::WorldBasicCameraData a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_BC4B58627F534F7C_OFFSET))(this, a1);
	}

	::Class_1_3D57574A5731A8CB* Method_1_ABFAC0EC1D3B5CF4_1(::System::Single a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_ABFAC0EC1D3B5CF4_1_OFFSET))(this, a1);
	}

	::Class_1_3D57574A5731A8CB* Method_1_1790C9BB34C526E9(::System::Boolean a1)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_1790C9BB34C526E9_OFFSET))(this, a1);
	}

	::Class_1_3D57574A5731A8CB* Method_1_63DF395B3BDEB938(::System::Single a1, ::System::Single a2)
	{
		return ((::Class_1_3D57574A5731A8CB*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D57574A5731A8CB_METHOD_1_63DF395B3BDEB938_OFFSET))(this, a1, a2);
	}
};
