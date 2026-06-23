#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Capsule3.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/Foundation/Geometry/ConicSection2D.h"
#include "unitysdk/Foundation/Geometry/ConicSection2D_1.h"
#include "unitysdk/Foundation/Geometry/Ellipse2D.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHull.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHullBuffer.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_773F38EF4C64A7E6_METHOD_1_039FE13C11C6DC25_1_OFFSET UNITYSDK_OFFSET(0xB7B7370)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_039FE13C11C6DC25_OFFSET UNITYSDK_OFFSET(0xB7BAF60)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_05E463748ADF8DD0_OFFSET UNITYSDK_OFFSET(0xB7BC010)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_1FD8EE3075794147_OFFSET UNITYSDK_OFFSET(0xB7B0EE0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_24EE67B32AA3A651_OFFSET UNITYSDK_OFFSET(0xB7B87B0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_25F1E1994B68DCE2_OFFSET UNITYSDK_OFFSET(0xB7B7CC0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_2629BA8B78DD5A81_OFFSET UNITYSDK_OFFSET(0xB7B0A70)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_2F893D21E9B9DB15_OFFSET UNITYSDK_OFFSET(0xB7BEDD0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_44764E7E52AAB0DA_OFFSET UNITYSDK_OFFSET(0xB7B2A30)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_5901A6ADC17CB14B_OFFSET UNITYSDK_OFFSET(0xB7B8BD0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_765BACD49FC624E5_OFFSET UNITYSDK_OFFSET(0xB7BCDB0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_794877D9B8F98C64_1_OFFSET UNITYSDK_OFFSET(0xB7BFAA0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_794877D9B8F98C64_OFFSET UNITYSDK_OFFSET(0xB7B5270)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_8E4BA14601F56E2C_OFFSET UNITYSDK_OFFSET(0xB7BBCE0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_9A317504C7252920_1_OFFSET UNITYSDK_OFFSET(0xB7BAF80)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_9A317504C7252920_OFFSET UNITYSDK_OFFSET(0xB7B8570)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_9C193E3A20612C53_OFFSET UNITYSDK_OFFSET(0xB7B7390)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_A2148380D97390D0_OFFSET UNITYSDK_OFFSET(0xB7B81B0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_A47AB6638F0182AC_OFFSET UNITYSDK_OFFSET(0xB7B2500)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_AA6B6417B9295BBB_OFFSET UNITYSDK_OFFSET(0xB7B1E90)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_AF6CFE95D6A26D48_OFFSET UNITYSDK_OFFSET(0xB7BC800)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_B40007C122C49628_OFFSET UNITYSDK_OFFSET(0xB7B0900)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_BF9AE1272157288B_OFFSET UNITYSDK_OFFSET(0xB7AFE30)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_C0676621F15B9C90_OFFSET UNITYSDK_OFFSET(0xB7BED90)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_C764AF2D9293D8CE_1_OFFSET UNITYSDK_OFFSET(0xB7B5220)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_C764AF2D9293D8CE_OFFSET UNITYSDK_OFFSET(0xB7B7C70)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_D81AA04C7E63E318_OFFSET UNITYSDK_OFFSET(0xB7BDAF0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_D9615D57B0F2720C_OFFSET UNITYSDK_OFFSET(0xB7BB1D0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_DADE5DD413E5D7B8_OFFSET UNITYSDK_OFFSET(0xB7BB190)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_E284B6CC0181534A_OFFSET UNITYSDK_OFFSET(0xB7AF200)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_E67198FEDB98DB84_OFFSET UNITYSDK_OFFSET(0xB7BC2E0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_E6B66E68DBDC64DD_OFFSET UNITYSDK_OFFSET(0xB7C1BA0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_F06530C9A75E89AC_OFFSET UNITYSDK_OFFSET(0xB7BA530)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_F7627575F03D9894_OFFSET UNITYSDK_OFFSET(0xB7BE9D0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_FCBFE383D4B93843_OFFSET UNITYSDK_OFFSET(0xB7BE4B0)

inline static constexpr unsigned int Class_1_773F38EF4C64A7E6_TypeDefinitionIndex = 67043;

class Class_1_773F38EF4C64A7E6 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0

	static ::System::Nullable_1<::System::Single> Method_1_E284B6CC0181534A(::Dest::Math::Box3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Box3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_E284B6CC0181534A_OFFSET))(a1, a2, a3);
	}

	static ::System::Nullable_1<::System::Single> Method_1_1FD8EE3075794147(::Dest::Math::Box3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Box3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_1FD8EE3075794147_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A47AB6638F0182AC(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Single a3, ::System::Span_1<::UnityEngine::Vector2> a4, ::System::Span_1<::UnityEngine::Vector2> a5, ::System::Int32& a6, ::System::Int32& a7)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Single, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::UnityEngine::Vector2>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_A47AB6638F0182AC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_794877D9B8F98C64(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Span_1<::UnityEngine::Vector2> a3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a4, ::System::Int32& a5)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_794877D9B8F98C64_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_9C193E3A20612C53(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Span_1<::UnityEngine::Vector2> a3, ::System::Span_1<::UnityEngine::Vector2> a4, ::System::Int32& a5, ::System::Int32& a6)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::UnityEngine::Vector2>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_9C193E3A20612C53_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_25F1E1994B68DCE2(::Dest::Math::Sphere3 a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>& a2)
	{
		return ((::System::Boolean(*)(::Dest::Math::Sphere3, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_25F1E1994B68DCE2_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double> Method_1_9A317504C7252920(::Foundation::Geometry::ConicSection2D a1)
	{
		return ((::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double>(*)(::Foundation::Geometry::ConicSection2D))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_9A317504C7252920_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_24EE67B32AA3A651(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a3)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_24EE67B32AA3A651_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_039FE13C11C6DC25(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_039FE13C11C6DC25_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C764AF2D9293D8CE(::System::Span_1<::UnityEngine::Vector2> a1, ::UnityEngine::Vector2 a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::System::Span_1<::UnityEngine::Vector2>, ::UnityEngine::Vector2, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_C764AF2D9293D8CE_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double> Method_1_9A317504C7252920_1(::Foundation::Geometry::ConicSection2D a1)
	{
		return ((::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double>(*)(::Foundation::Geometry::ConicSection2D))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_9A317504C7252920_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DADE5DD413E5D7B8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_DADE5DD413E5D7B8_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Single> Method_1_D9615D57B0F2720C(::Dest::Math::Sphere3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Sphere3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_D9615D57B0F2720C_OFFSET))(a1, a2, a3);
	}

	static ::System::Nullable_1<::Foundation::Geometry::ConicSection2D> Method_1_A2148380D97390D0(::Dest::Math::Sphere3 a1)
	{
		return ((::System::Nullable_1<::Foundation::Geometry::ConicSection2D>(*)(::Dest::Math::Sphere3))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_A2148380D97390D0_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_05E463748ADF8DD0(::Dest::Math::Capsule3 a1, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a2)
	{
		return ((::System::Int32(*)(::Dest::Math::Capsule3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_05E463748ADF8DD0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E67198FEDB98DB84(::Dest::Math::Box3 a1, ::System::Span_1<::UnityEngine::Vector3> a2)
	{
		return ((::System::Boolean(*)(::Dest::Math::Box3, ::System::Span_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_E67198FEDB98DB84_OFFSET))(a1, a2);
	}

	static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull Method_1_AF6CFE95D6A26D48(::Dest::Math::Capsule3 a1, ::PipelineCamera::FinalCameraData a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a3)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::Dest::Math::Capsule3, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_AF6CFE95D6A26D48_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_5901A6ADC17CB14B(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Span_1<::System::Single> a3, ::System::Single a4)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_5901A6ADC17CB14B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_039FE13C11C6DC25_1(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_039FE13C11C6DC25_1_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Single> Method_1_765BACD49FC624E5(::Dest::Math::Capsule3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Capsule3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_765BACD49FC624E5_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_8E4BA14601F56E2C(::Dest::Math::Sphere3 a1, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a2)
	{
		return ((::System::Int32(*)(::Dest::Math::Sphere3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_8E4BA14601F56E2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C764AF2D9293D8CE_1(::System::Span_1<::UnityEngine::Vector2> a1, ::UnityEngine::Vector2 a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::System::Span_1<::UnityEngine::Vector2>, ::UnityEngine::Vector2, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_C764AF2D9293D8CE_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Nullable_1<::System::Single> Method_1_D81AA04C7E63E318(::Dest::Math::Capsule3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Capsule3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_D81AA04C7E63E318_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_2629BA8B78DD5A81(::System::ReadOnlySpan_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a1)
	{
		return ((::System::Single(*)(::System::ReadOnlySpan_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_2629BA8B78DD5A81_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_BF9AE1272157288B(::Dest::Math::Box3 a1, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a2)
	{
		return ((::System::Int32(*)(::Dest::Math::Box3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_BF9AE1272157288B_OFFSET))(a1, a2);
	}

	static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull Method_1_F7627575F03D9894(::Dest::Math::Sphere3 a1, ::PipelineCamera::FinalCameraData a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a3)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::Dest::Math::Sphere3, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_F7627575F03D9894_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C0676621F15B9C90(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_C0676621F15B9C90_OFFSET))(a1, a2);
	}

	static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull Method_1_2F893D21E9B9DB15(::Dest::Math::Box3 a1, ::PipelineCamera::FinalCameraData a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a3)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::Dest::Math::Box3, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_2F893D21E9B9DB15_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_F06530C9A75E89AC(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::ReadOnlySpan_1<::System::Single> a3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a4)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::ReadOnlySpan_1<::System::Single>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_F06530C9A75E89AC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B40007C122C49628(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_B40007C122C49628_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Nullable_1<::System::Single> Method_1_E6B66E68DBDC64DD(::Dest::Math::Sphere3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Sphere3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_E6B66E68DBDC64DD_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_794877D9B8F98C64_1(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Span_1<::UnityEngine::Vector2> a3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a4, ::System::Int32& a5)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_794877D9B8F98C64_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_FCBFE383D4B93843(::Dest::Math::Box3 a1, ::System::Span_1<::UnityEngine::Vector2> a2)
	{
		return ((::System::Boolean(*)(::Dest::Math::Box3, ::System::Span_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_FCBFE383D4B93843_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> Method_1_44764E7E52AAB0DA(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::System::Single a2)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_44764E7E52AAB0DA_OFFSET))(a1, a2);
	}

	static ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> Method_1_AA6B6417B9295BBB(::System::ReadOnlySpan_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a1, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a2, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4> a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>(*)(::System::ReadOnlySpan_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_C850233ED47F35B4>, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_AA6B6417B9295BBB_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
