#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE.h"
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

#define CLASS_1_773F38EF4C64A7E6_METHOD_1_039FE13C11C6DC25_1_OFFSET UNITYSDK_OFFSET(0xE1E5D80)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_039FE13C11C6DC25_OFFSET UNITYSDK_OFFSET(0xE1DB410)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_05E463748ADF8DD0_OFFSET UNITYSDK_OFFSET(0xE1E18C0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_1FD8EE3075794147_OFFSET UNITYSDK_OFFSET(0xE1DF8A0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_24EE67B32AA3A651_OFFSET UNITYSDK_OFFSET(0xE1E2010)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_2F893D21E9B9DB15_OFFSET UNITYSDK_OFFSET(0xE1EACC0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_3A2D90AC95638FD5_OFFSET UNITYSDK_OFFSET(0xE1E39D0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_44764E7E52AAB0DA_OFFSET UNITYSDK_OFFSET(0xE1DCB90)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_5127591DAAAAA33F_OFFSET UNITYSDK_OFFSET(0xE1E9850)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_552B2EF01B506131_OFFSET UNITYSDK_OFFSET(0xE1DC380)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_5901A6ADC17CB14B_OFFSET UNITYSDK_OFFSET(0xE1E6390)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_765BACD49FC624E5_OFFSET UNITYSDK_OFFSET(0xE1E7E00)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_78D7055CA07ADDFD_OFFSET UNITYSDK_OFFSET(0xE1DB710)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_794877D9B8F98C64_1_OFFSET UNITYSDK_OFFSET(0xE1E3BF0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_794877D9B8F98C64_OFFSET UNITYSDK_OFFSET(0xE1D91D0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_8E4BA14601F56E2C_OFFSET UNITYSDK_OFFSET(0xE1E2F20)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_9A317504C7252920_1_OFFSET UNITYSDK_OFFSET(0xE1D8FC0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_9A317504C7252920_OFFSET UNITYSDK_OFFSET(0xE1D8DA0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_A47AB6638F0182AC_OFFSET UNITYSDK_OFFSET(0xE1E13B0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_AA6B6417B9295BBB_OFFSET UNITYSDK_OFFSET(0xE1E08A0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_BF9AE1272157288B_OFFSET UNITYSDK_OFFSET(0xE1DB880)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_C0676621F15B9C90_OFFSET UNITYSDK_OFFSET(0xE1D8D60)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_C764AF2D9293D8CE_1_OFFSET UNITYSDK_OFFSET(0xE1E1360)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_C764AF2D9293D8CE_OFFSET UNITYSDK_OFFSET(0xE1DF2F0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_D881E80D1995337D_OFFSET UNITYSDK_OFFSET(0xE1E1B90)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_D9615D57B0F2720C_OFFSET UNITYSDK_OFFSET(0xE1E2430)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_DADE5DD413E5D7B8_OFFSET UNITYSDK_OFFSET(0xE1DF860)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_E284B6CC0181534A_OFFSET UNITYSDK_OFFSET(0xE1E8BD0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_E2ACB74788155523_OFFSET UNITYSDK_OFFSET(0xE1E5DA0)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_E67198FEDB98DB84_OFFSET UNITYSDK_OFFSET(0xE1DF340)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_E6B66E68DBDC64DD_OFFSET UNITYSDK_OFFSET(0xE1E3250)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_F06530C9A75E89AC_OFFSET UNITYSDK_OFFSET(0xE1EA290)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_F7627575F03D9894_OFFSET UNITYSDK_OFFSET(0xE1D8450)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_F9A812A1F11BCF2A_OFFSET UNITYSDK_OFFSET(0xE1E0F00)
#define CLASS_1_773F38EF4C64A7E6_METHOD_1_FCBFE383D4B93843_OFFSET UNITYSDK_OFFSET(0xE1D8820)

inline static constexpr unsigned int Class_1_773F38EF4C64A7E6_TypeDefinitionIndex = 79872;

class Class_1_773F38EF4C64A7E6 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0

	static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull Method_1_F7627575F03D9894(::Dest::Math::Sphere3 a1, ::PipelineCamera::FinalCameraData a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a3)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::Dest::Math::Sphere3, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_F7627575F03D9894_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_FCBFE383D4B93843(::Dest::Math::Box3 a1, ::System::Span_1<::UnityEngine::Vector2> a2)
	{
		return ((::System::Boolean(*)(::Dest::Math::Box3, ::System::Span_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_FCBFE383D4B93843_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double> Method_1_9A317504C7252920(::Foundation::Geometry::ConicSection2D a1)
	{
		return ((::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double>(*)(::Foundation::Geometry::ConicSection2D))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_9A317504C7252920_OFFSET))(a1);
	}

	static ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double> Method_1_9A317504C7252920_1(::Foundation::Geometry::ConicSection2D a1)
	{
		return ((::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double>(*)(::Foundation::Geometry::ConicSection2D))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_9A317504C7252920_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_794877D9B8F98C64(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Span_1<::UnityEngine::Vector2> a3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a4, ::System::Int32& a5)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_794877D9B8F98C64_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_039FE13C11C6DC25(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_039FE13C11C6DC25_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_78D7055CA07ADDFD(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_78D7055CA07ADDFD_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_1_BF9AE1272157288B(::Dest::Math::Box3 a1, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a2)
	{
		return ((::System::Int32(*)(::Dest::Math::Box3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_BF9AE1272157288B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_552B2EF01B506131(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Span_1<::UnityEngine::Vector2> a3, ::System::Span_1<::UnityEngine::Vector2> a4, ::System::Int32& a5, ::System::Int32& a6)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::UnityEngine::Vector2>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_552B2EF01B506131_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_E67198FEDB98DB84(::Dest::Math::Box3 a1, ::System::Span_1<::UnityEngine::Vector3> a2)
	{
		return ((::System::Boolean(*)(::Dest::Math::Box3, ::System::Span_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_E67198FEDB98DB84_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C764AF2D9293D8CE(::System::Span_1<::UnityEngine::Vector2> a1, ::UnityEngine::Vector2 a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::System::Span_1<::UnityEngine::Vector2>, ::UnityEngine::Vector2, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_C764AF2D9293D8CE_OFFSET))(a1, a2, a3);
	}

	static ::System::Nullable_1<::System::Single> Method_1_1FD8EE3075794147(::Dest::Math::Box3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Box3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_1FD8EE3075794147_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C764AF2D9293D8CE_1(::System::Span_1<::UnityEngine::Vector2> a1, ::UnityEngine::Vector2 a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::System::Span_1<::UnityEngine::Vector2>, ::UnityEngine::Vector2, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_C764AF2D9293D8CE_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A47AB6638F0182AC(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Single a3, ::System::Span_1<::UnityEngine::Vector2> a4, ::System::Span_1<::UnityEngine::Vector2> a5, ::System::Int32& a6, ::System::Int32& a7)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Single, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::UnityEngine::Vector2>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_A47AB6638F0182AC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Int32 Method_1_05E463748ADF8DD0(::Dest::Math::Capsule3 a1, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a2)
	{
		return ((::System::Int32(*)(::Dest::Math::Capsule3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_05E463748ADF8DD0_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Single> Method_1_D9615D57B0F2720C(::Dest::Math::Sphere3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Sphere3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_D9615D57B0F2720C_OFFSET))(a1, a2, a3);
	}

	static ::System::Nullable_1<::System::Single> Method_1_E6B66E68DBDC64DD(::Dest::Math::Sphere3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Sphere3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_E6B66E68DBDC64DD_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_D881E80D1995337D(::Dest::Math::Sphere3 a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>& a2)
	{
		return ((::System::Boolean(*)(::Dest::Math::Sphere3, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_D881E80D1995337D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_794877D9B8F98C64_1(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Span_1<::UnityEngine::Vector2> a3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a4, ::System::Int32& a5)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_794877D9B8F98C64_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Nullable_1<::Foundation::Geometry::ConicSection2D> Method_1_3A2D90AC95638FD5(::Dest::Math::Sphere3 a1)
	{
		return ((::System::Nullable_1<::Foundation::Geometry::ConicSection2D>(*)(::Dest::Math::Sphere3))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_3A2D90AC95638FD5_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> Method_1_44764E7E52AAB0DA(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::System::Single a2)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_44764E7E52AAB0DA_OFFSET))(a1, a2);
	}

	static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull Method_1_E2ACB74788155523(::Dest::Math::Capsule3 a1, ::PipelineCamera::FinalCameraData a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a3)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::Dest::Math::Capsule3, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_E2ACB74788155523_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C0676621F15B9C90(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_C0676621F15B9C90_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_5901A6ADC17CB14B(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Span_1<::System::Single> a3, ::System::Single a4)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_5901A6ADC17CB14B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_F9A812A1F11BCF2A(::System::ReadOnlySpan_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a1)
	{
		return ((::System::Single(*)(::System::ReadOnlySpan_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_F9A812A1F11BCF2A_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_8E4BA14601F56E2C(::Dest::Math::Sphere3 a1, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a2)
	{
		return ((::System::Int32(*)(::Dest::Math::Sphere3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_8E4BA14601F56E2C_OFFSET))(a1, a2);
	}

	static ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> Method_1_AA6B6417B9295BBB(::System::ReadOnlySpan_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a1, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a2, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>(*)(::System::ReadOnlySpan_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_AA6B6417B9295BBB_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Nullable_1<::System::Single> Method_1_765BACD49FC624E5(::Dest::Math::Capsule3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Capsule3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_765BACD49FC624E5_OFFSET))(a1, a2, a3);
	}

	static ::System::Nullable_1<::System::Single> Method_1_E284B6CC0181534A(::Dest::Math::Box3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Box3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_E284B6CC0181534A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DADE5DD413E5D7B8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_DADE5DD413E5D7B8_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Single> Method_1_5127591DAAAAA33F(::Dest::Math::Capsule3 a1, ::PipelineCamera::FinalCameraData a2, ::System::Single a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Capsule3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_5127591DAAAAA33F_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_F06530C9A75E89AC(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::ReadOnlySpan_1<::System::Single> a3, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a4)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::ReadOnlySpan_1<::System::Single>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_F06530C9A75E89AC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_24EE67B32AA3A651(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> a2, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE> a3)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::Class_1_773F38EF4C64A7E6_Struct_2_0D8D3A20F723C0DE>))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_24EE67B32AA3A651_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull Method_1_2F893D21E9B9DB15(::Dest::Math::Box3 a1, ::PipelineCamera::FinalCameraData a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a3)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::Dest::Math::Box3, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_2F893D21E9B9DB15_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_039FE13C11C6DC25_1(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_773F38EF4C64A7E6_METHOD_1_039FE13C11C6DC25_1_OFFSET))(a1, a2);
	}
};
