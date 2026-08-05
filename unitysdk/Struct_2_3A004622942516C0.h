#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyClamping.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Space.h"

namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Zone; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace MoleMole::Spline { class NAPPointMeta; }
namespace MoleMole::Spline { class NAPZoneMeta; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define STRUCT_2_3A004622942516C0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7B2850)
#define STRUCT_2_3A004622942516C0_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B27B0)
#define STRUCT_2_3A004622942516C0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B2860)
#define STRUCT_2_3A004622942516C0_METHOD_2_03D3CF6EA43701B0_OFFSET UNITYSDK_OFFSET(0x7B2B30)
#define STRUCT_2_3A004622942516C0_METHOD_2_0C9B7637430E7C21_OFFSET UNITYSDK_OFFSET(0x7B29C0)
#define STRUCT_2_3A004622942516C0_METHOD_2_1124FCAC08FD070F_OFFSET UNITYSDK_OFFSET(0x7B28F0)
#define STRUCT_2_3A004622942516C0_METHOD_2_3C21339379AAD755_OFFSET UNITYSDK_OFFSET(0x7B2BA0)
#define STRUCT_2_3A004622942516C0_METHOD_2_3D303A5B3F73181A_OFFSET UNITYSDK_OFFSET(0x7B2890)
#define STRUCT_2_3A004622942516C0_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x12662F60)
#define STRUCT_2_3A004622942516C0_METHOD_2_43F35D215407097A_1_OFFSET UNITYSDK_OFFSET(0x7B2B00)
#define STRUCT_2_3A004622942516C0_METHOD_2_43F35D215407097A_OFFSET UNITYSDK_OFFSET(0x7B2920)
#define STRUCT_2_3A004622942516C0_METHOD_2_479371280647B9E8_OFFSET UNITYSDK_OFFSET(0x7B2B50)
#define STRUCT_2_3A004622942516C0_METHOD_2_53E75599CE829E95_1_OFFSET UNITYSDK_OFFSET(0x7B2BD0)
#define STRUCT_2_3A004622942516C0_METHOD_2_53E75599CE829E95_OFFSET UNITYSDK_OFFSET(0x7B2A60)
#define STRUCT_2_3A004622942516C0_METHOD_2_595362E05BE5F5E3_OFFSET UNITYSDK_OFFSET(0x7B2B80)
#define STRUCT_2_3A004622942516C0_METHOD_2_6796BFDB0FB01428_OFFSET UNITYSDK_OFFSET(0x7B2C00)
#define STRUCT_2_3A004622942516C0_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7B2A80)
#define STRUCT_2_3A004622942516C0_METHOD_2_718A29F5005F6A5D_1_OFFSET UNITYSDK_OFFSET(0x12663660)
#define STRUCT_2_3A004622942516C0_METHOD_2_718A29F5005F6A5D_OFFSET UNITYSDK_OFFSET(0x126606C0)
#define STRUCT_2_3A004622942516C0_METHOD_2_742A9A9FD744A86E_OFFSET UNITYSDK_OFFSET(0x7B2BC0)
#define STRUCT_2_3A004622942516C0_METHOD_2_8135A98363F34D82_OFFSET UNITYSDK_OFFSET(0x7B2950)
#define STRUCT_2_3A004622942516C0_METHOD_2_8157F96AF14C5FEB_OFFSET UNITYSDK_OFFSET(0x7B2B90)
#define STRUCT_2_3A004622942516C0_METHOD_2_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x7B2880)
#define STRUCT_2_3A004622942516C0_METHOD_2_88724CB50D00CC17_OFFSET UNITYSDK_OFFSET(0x7B2A70)
#define STRUCT_2_3A004622942516C0_METHOD_2_895F313BDAE3D4E3_OFFSET UNITYSDK_OFFSET(0x7B2AF0)
#define STRUCT_2_3A004622942516C0_METHOD_2_8E51D9ED71E4930C_OFFSET UNITYSDK_OFFSET(0x7B28C0)
#define STRUCT_2_3A004622942516C0_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7B2960)
#define STRUCT_2_3A004622942516C0_METHOD_2_968A4CDEE3A857BF_1_OFFSET UNITYSDK_OFFSET(0x7B2C30)
#define STRUCT_2_3A004622942516C0_METHOD_2_968A4CDEE3A857BF_OFFSET UNITYSDK_OFFSET(0x7B2870)
#define STRUCT_2_3A004622942516C0_METHOD_2_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x7B2B40)
#define STRUCT_2_3A004622942516C0_METHOD_2_AD8E0EB04A234B05_OFFSET UNITYSDK_OFFSET(0x7B2C40)
#define STRUCT_2_3A004622942516C0_METHOD_2_D7F0936662AC1A47_1_OFFSET UNITYSDK_OFFSET(0x7B2900)
#define STRUCT_2_3A004622942516C0_METHOD_2_D7F0936662AC1A47_2_OFFSET UNITYSDK_OFFSET(0x7B29D0)
#define STRUCT_2_3A004622942516C0_METHOD_2_D7F0936662AC1A47_3_OFFSET UNITYSDK_OFFSET(0x7B2B60)
#define STRUCT_2_3A004622942516C0_METHOD_2_D7F0936662AC1A47_4_OFFSET UNITYSDK_OFFSET(0x7B2BE0)
#define STRUCT_2_3A004622942516C0_METHOD_2_D7F0936662AC1A47_OFFSET UNITYSDK_OFFSET(0x7B28A0)
#define STRUCT_2_3A004622942516C0_METHOD_2_F7EA6F3BE6E33128_OFFSET UNITYSDK_OFFSET(0x7B29F0)
#define STRUCT_2_3A004622942516C0__CTOR_OFFSET UNITYSDK_OFFSET(0x7B27A0)

inline static constexpr unsigned int Struct_2_3A004622942516C0_TypeDefinitionIndex = 62323;

struct alignas(8) Struct_2_3A004622942516C0
{
	::FluffyUnderware::Curvy::CurvySpline* Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::UnityEngine::Space Field_2_0; // 0x1C

	::System::Void _ctor(::FluffyUnderware::Curvy::CurvySpline* a1, ::System::Boolean a2, ::UnityEngine::Space a3)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Equals(::Struct_2_3A004622942516C0 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3A004622942516C0))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_GETHASHCODE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* Method_2_968A4CDEE3A857BF()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_968A4CDEE3A857BF_OFFSET))(this);
	}

	static ::System::Boolean Method_2_718A29F5005F6A5D(::Struct_2_3A004622942516C0 a1, ::Struct_2_3A004622942516C0 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_3A004622942516C0, ::Struct_2_3A004622942516C0))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_718A29F5005F6A5D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_84EAB34EABC7F508_OFFSET))(this);
	}

	::MoleMole::Spline::NAPZoneMeta* Method_2_3D303A5B3F73181A(::System::String* a1)
	{
		return ((::MoleMole::Spline::NAPZoneMeta*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_3D303A5B3F73181A_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Vector3 Method_2_D7F0936662AC1A47(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_D7F0936662AC1A47_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Vector3 Method_2_8E51D9ED71E4930C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_8E51D9ED71E4930C_OFFSET))(this, a1);
	}
	*/

	::FluffyUnderware::Curvy::CurvySplineSegment* Method_2_1124FCAC08FD070F(::System::Single a1, ::System::Boolean& a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_1124FCAC08FD070F_OFFSET))(this, a1, a2);
	}

	/*
	::UnityEngine::Vector3 Method_2_D7F0936662AC1A47_1(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_D7F0936662AC1A47_1_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Single Method_2_43F35D215407097A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_43F35D215407097A_OFFSET))(this, a1);
	}
	*/

	::MoleMole::Spline::NAPPointMeta* Method_2_8135A98363F34D82(::System::String* a1)
	{
		return ((::MoleMole::Spline::NAPPointMeta*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_8135A98363F34D82_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::FluffyUnderware::Curvy::CurvySplineSegment* Method_2_0C9B7637430E7C21(::System::Single a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_0C9B7637430E7C21_OFFSET))(this, a1, a2);
	}

	/*
	::UnityEngine::Vector3 Method_2_D7F0936662AC1A47_2(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_D7F0936662AC1A47_2_OFFSET))(this, a1);
	}
	*/

	::Struct_2_3A004622942516C0 Method_2_F7EA6F3BE6E33128(::FluffyUnderware::Curvy::CurvySpline* a1)
	{
		return ((::Struct_2_3A004622942516C0(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_F7EA6F3BE6E33128_OFFSET))(this, a1);
	}

	::System::Void Method_2_53E75599CE829E95(::System::Single a1, ::System::Collections::Generic::IList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* a2, ::FluffyUnderware::Curvy::CurvyClamping a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>*, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_53E75599CE829E95_OFFSET))(this, a1, a2, a3);
	}

	::FluffyUnderware::Curvy::CurvySplineSegment* Method_2_88724CB50D00CC17(::System::Single a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_88724CB50D00CC17_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Single Method_2_895F313BDAE3D4E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_895F313BDAE3D4E3_OFFSET))(this);
	}

	/*
	::System::Single Method_2_43F35D215407097A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_43F35D215407097A_1_OFFSET))(this, a1);
	}
	*/

	::FluffyUnderware::Curvy::CurvySplineSegment* Method_2_03D3CF6EA43701B0(::System::Single a1, ::FluffyUnderware::Curvy::CurvyClamping a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_03D3CF6EA43701B0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::System::Single Method_2_479371280647B9E8(::System::Single a1, ::FluffyUnderware::Curvy::CurvyClamping a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_479371280647B9E8_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_3A004622942516C0 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_3A004622942516C0(*)())((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_3D78D2E0F9F95F07_OFFSET))();
	}

	/*
	::UnityEngine::Vector3 Method_2_D7F0936662AC1A47_3(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_D7F0936662AC1A47_3_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_595362E05BE5F5E3(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_595362E05BE5F5E3_OFFSET))(this, a1, a2, a3);
	}
	*/

	::System::Single Method_2_8157F96AF14C5FEB(::System::Single a1, ::FluffyUnderware::Curvy::CurvyClamping a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_8157F96AF14C5FEB_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_718A29F5005F6A5D_1(::Struct_2_3A004622942516C0 a1, ::Struct_2_3A004622942516C0 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_3A004622942516C0, ::Struct_2_3A004622942516C0))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_718A29F5005F6A5D_1_OFFSET))(a1, a2);
	}

	/*
	::UnityEngine::Quaternion Method_2_3C21339379AAD755(::System::Single a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_3C21339379AAD755_OFFSET))(this, a1, a2);
	}
	*/

	/*
	::System::Void Method_2_742A9A9FD744A86E(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_742A9A9FD744A86E_OFFSET))(this, a1, a2, a3, a4);
	}
	*/

	::System::Void Method_2_53E75599CE829E95_1(::System::Single a1, ::System::Collections::Generic::IList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* a2, ::FluffyUnderware::Curvy::CurvyClamping a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>*, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_53E75599CE829E95_1_OFFSET))(this, a1, a2, a3);
	}

	/*
	::UnityEngine::Vector3 Method_2_D7F0936662AC1A47_4(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_D7F0936662AC1A47_4_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Single Method_2_6796BFDB0FB01428(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_6796BFDB0FB01428_OFFSET))(this, a1, a2);
	}
	*/

	::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* Method_2_968A4CDEE3A857BF_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_968A4CDEE3A857BF_1_OFFSET))(this);
	}

	::FluffyUnderware::Curvy::CurvySplineSegment* Method_2_AD8E0EB04A234B05(::System::Single a1)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3A004622942516C0_METHOD_2_AD8E0EB04A234B05_OFFSET))(this, a1);
	}
};
