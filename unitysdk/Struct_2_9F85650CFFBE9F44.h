#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/Struct_2_1D8544ED9994013F.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

#define STRUCT_2_9F85650CFFBE9F44_METHOD_2_2B6F93527747D435_OFFSET UNITYSDK_OFFSET(0x81E950)
#define STRUCT_2_9F85650CFFBE9F44_METHOD_2_66FF6A49D33160A6_OFFSET UNITYSDK_OFFSET(0x81EBE0)
#define STRUCT_2_9F85650CFFBE9F44_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x81F000)
#define STRUCT_2_9F85650CFFBE9F44_METHOD_2_9105DD8C2E46A983_OFFSET UNITYSDK_OFFSET(0x81EE20)
#define STRUCT_2_9F85650CFFBE9F44_METHOD_2_9D1B88251DDC8FC8_OFFSET UNITYSDK_OFFSET(0x81EA80)
#define STRUCT_2_9F85650CFFBE9F44_METHOD_2_B924E6EC33D07211_OFFSET UNITYSDK_OFFSET(0x81EDC0)
#define STRUCT_2_9F85650CFFBE9F44_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x81ED00)
#define STRUCT_2_9F85650CFFBE9F44_METHOD_2_E61C6F60E6FAC4A6_OFFSET UNITYSDK_OFFSET(0x81ED30)
#define STRUCT_2_9F85650CFFBE9F44_METHOD_2_F07C04A9683D4FD0_1_OFFSET UNITYSDK_OFFSET(0x81ED80)
#define STRUCT_2_9F85650CFFBE9F44_METHOD_2_F07C04A9683D4FD0_OFFSET UNITYSDK_OFFSET(0x81E910)
#define STRUCT_2_9F85650CFFBE9F44__CCTOR_OFFSET UNITYSDK_OFFSET(0x1555E700)
#define STRUCT_2_9F85650CFFBE9F44__CTOR_OFFSET UNITYSDK_OFFSET(0x81E870)

inline static constexpr unsigned int Struct_2_9F85650CFFBE9F44_TypeDefinitionIndex = 61963;

struct alignas(8) Struct_2_9F85650CFFBE9F44
{
	static ::Struct_2_9F85650CFFBE9F44* StaticGet_Field_2_6()
	{
		return (::Struct_2_9F85650CFFBE9F44*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9F85650CFFBE9F44_TypeDefinitionIndex)->GetStaticField(0x48370);
	}
	::Struct_2_1D8544ED9994013F Field_2_2; // 0x10
	::Foundation::Variable_1<::Foundation::DualQuaternion> Field_2_1; // 0x50
	::Foundation::Variable_1<::UnityEngine::Vector3> Field_2_0; // 0x88
	::Foundation::Variable_1<::UnityEngine::Vector3> Field_2_7; // 0xA8

	::System::Void _ctor(::Struct_2_1D8544ED9994013F a1, ::Foundation::Variable_1<::Foundation::DualQuaternion> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_1D8544ED9994013F, ::Foundation::Variable_1<::Foundation::DualQuaternion>))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44__CCTOR_OFFSET))();
	}

	::Struct_2_9F85650CFFBE9F44 Method_2_F07C04A9683D4FD0(::Foundation::Variable_1<::UnityEngine::Vector3> a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::PVOID, ::Foundation::Variable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44_METHOD_2_F07C04A9683D4FD0_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Bounds Method_2_2B6F93527747D435()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44_METHOD_2_2B6F93527747D435_OFFSET))(this);
	}
	*/

	/*
	::System::Nullable_1<::System::Single> Method_2_9D1B88251DDC8FC8(::PipelineCamera::FinalCameraData a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::PipelineCamera::FinalCameraData, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44_METHOD_2_9D1B88251DDC8FC8_OFFSET))(this, a1, a2, a3);
	}
	*/

	::System::Boolean Method_2_66FF6A49D33160A6(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44_METHOD_2_66FF6A49D33160A6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::Struct_2_9F85650CFFBE9F44 Method_2_E61C6F60E6FAC4A6(::System::Func_1<::UnityEngine::Vector3>* a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::PVOID, ::System::Func_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44_METHOD_2_E61C6F60E6FAC4A6_OFFSET))(this, a1);
	}

	::Struct_2_9F85650CFFBE9F44 Method_2_F07C04A9683D4FD0_1(::Foundation::Variable_1<::UnityEngine::Vector3> a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::PVOID, ::Foundation::Variable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44_METHOD_2_F07C04A9683D4FD0_1_OFFSET))(this, a1);
	}

	::Struct_2_9F85650CFFBE9F44 Method_2_B924E6EC33D07211(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44_METHOD_2_B924E6EC33D07211_OFFSET))(this, a1);
	}

	/*
	::Foundation::Geometry::ExtendConvexHull2D::ConvexHull Method_2_9105DD8C2E46A983(::PipelineCamera::FinalCameraData a1, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a2)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::PVOID, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44_METHOD_2_9105DD8C2E46A983_OFFSET))(this, a1, a2);
	}
	*/

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9F85650CFFBE9F44_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}
};
