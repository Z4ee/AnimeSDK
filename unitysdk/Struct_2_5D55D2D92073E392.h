#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Cameras/PhotoCameraDefaultSetting.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/Struct_2_AE85181E37549DEA.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1;
namespace MoleMole::Cameras { class PhotoCameraConfig; }

#define STRUCT_2_5D55D2D92073E392_METHOD_2_3FC6AC1F995D6A9B_1_OFFSET UNITYSDK_OFFSET(0x7E07B0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_3FC6AC1F995D6A9B_OFFSET UNITYSDK_OFFSET(0x7E0460)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x7E08A0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0x7E0950)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_4BFD2E5829BD9CCE_OFFSET UNITYSDK_OFFSET(0x13D0FA40)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_511B61D38246765F_OFFSET UNITYSDK_OFFSET(0x7E07A0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x7E0960)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x6F5140)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x66AB70)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_8A23BF8F8D991E98_1_OFFSET UNITYSDK_OFFSET(0x7E04E0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_8A23BF8F8D991E98_2_OFFSET UNITYSDK_OFFSET(0x7E0500)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_8A23BF8F8D991E98_OFFSET UNITYSDK_OFFSET(0x7E04D0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_8AC4AD728738E938_OFFSET UNITYSDK_OFFSET(0x7E04F0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_A96412DEBF421DB9_OFFSET UNITYSDK_OFFSET(0x7E0890)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_ABFCD9C8B7F359A4_OFFSET UNITYSDK_OFFSET(0x7E08B0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_AFB60E5E2FFBAC40_OFFSET UNITYSDK_OFFSET(0x13D0ED70)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_E611AC6D7F575A2D_1_OFFSET UNITYSDK_OFFSET(0x7E0970)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_E611AC6D7F575A2D_OFFSET UNITYSDK_OFFSET(0x7E0820)
#define STRUCT_2_5D55D2D92073E392__CTOR_OFFSET UNITYSDK_OFFSET(0x7E0450)

inline static constexpr unsigned int Struct_2_5D55D2D92073E392_TypeDefinitionIndex = 75672;

struct alignas(8) Struct_2_5D55D2D92073E392
{
	::Foundation::Variable_1<::UnityEngine::Vector3> Field_2_3; // 0x10
	::PipelineCamera::EulerRotation Field_2_2; // 0x30
	::UnityEngine::Vector2 Field_2_1; // 0x78
	::Foundation::Clamped_1<::System::Single> Field_2_0; // 0x80
	::Foundation::Clamped_1<::System::Single> Field_2_7; // 0x98
	::PipelineCamera::EulerRotation Field_2_6; // 0xB0
	::System::Single Field_2_5; // 0xF8
	::System::Single Field_2_4; // 0xFC
	::System::Single Field_2_11; // 0x100
	::System::Single Field_2_10; // 0x104
	::MoleMole::Cameras::PhotoCameraDefaultSetting Field_2_9; // 0x108
	::System::Nullable_1<::Struct_2_AE85181E37549DEA> Field_2_8; // 0x128

	::System::Void _ctor(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::MoleMole::Cameras::PhotoCameraDefaultSetting& a6, ::UnityEngine::Vector3& a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::PhotoCameraDefaultSetting&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_3FC6AC1F995D6A9B(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_3FC6AC1F995D6A9B_OFFSET))(this, a1);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_8A23BF8F8D991E98(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_8A23BF8F8D991E98_OFFSET))(this, a1);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_8A23BF8F8D991E98_1(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_8A23BF8F8D991E98_1_OFFSET))(this, a1);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_8AC4AD728738E938(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_8AC4AD728738E938_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_8A23BF8F8D991E98_2(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_8A23BF8F8D991E98_2_OFFSET))(this, a1);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_511B61D38246765F(::System::Single a1, ::System::Single a2)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_511B61D38246765F_OFFSET))(this, a1, a2);
	}

	/*
	static ::PipelineCamera::WorldBasicCameraData Method_2_AFB60E5E2FFBAC40(::Struct_2_5D55D2D92073E392& a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Struct_2_5D55D2D92073E392&))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_AFB60E5E2FFBAC40_OFFSET))(a1);
	}
	*/

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_3FC6AC1F995D6A9B_1(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_3FC6AC1F995D6A9B_1_OFFSET))(this, a1);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_E611AC6D7F575A2D(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_E611AC6D7F575A2D_OFFSET))(this, a1);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_A96412DEBF421DB9(::System::Single a1, ::System::Single a2)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_A96412DEBF421DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_41146E620D694011_OFFSET))(this);
	}

	/*
	static ::Struct_2_5D55D2D92073E392 Method_2_4BFD2E5829BD9CCE(::System::UInt32 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::System::Single& a4, ::UnityEngine::Vector3& a5, ::MoleMole::Cameras::PhotoCameraConfig*& a6)
	{
		return ((::Struct_2_5D55D2D92073E392(*)(::System::UInt32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&, ::UnityEngine::Vector3&, ::MoleMole::Cameras::PhotoCameraConfig*&))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_4BFD2E5829BD9CCE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
	*/

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_ABFCD9C8B7F359A4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_ABFCD9C8B7F359A4_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_2_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_486AF1E6C0038D4C_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1* Method_2_E611AC6D7F575A2D_1(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_E611AC6D7F575A2D_1_OFFSET))(this, a1);
	}
};
