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

class Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7;
namespace MoleMole::Cameras { class PhotoCameraConfig; }

#define STRUCT_2_5D55D2D92073E392_METHOD_2_3FC6AC1F995D6A9B_1_OFFSET UNITYSDK_OFFSET(0x7B0610)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_3FC6AC1F995D6A9B_OFFSET UNITYSDK_OFFSET(0x7B0450)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x7B04C0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0x7B04E0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_4BFD2E5829BD9CCE_OFFSET UNITYSDK_OFFSET(0x16524450)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x7B0420)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x76A050)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x58C170)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_8AC4AD728738E938_OFFSET UNITYSDK_OFFSET(0x7B0600)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_A96412DEBF421DB9_OFFSET UNITYSDK_OFFSET(0x7B0440)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_ABFCD9C8B7F359A4_OFFSET UNITYSDK_OFFSET(0x7B04F0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_AFB60E5E2FFBAC40_OFFSET UNITYSDK_OFFSET(0x16526DA0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_C7FA529A7C6C5B70_1_OFFSET UNITYSDK_OFFSET(0x7B06A0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_C7FA529A7C6C5B70_OFFSET UNITYSDK_OFFSET(0x7B0590)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_D09C1CCEF6125527_1_OFFSET UNITYSDK_OFFSET(0x7B04D0)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_D09C1CCEF6125527_2_OFFSET UNITYSDK_OFFSET(0x7B0680)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_D09C1CCEF6125527_OFFSET UNITYSDK_OFFSET(0x7B0430)
#define STRUCT_2_5D55D2D92073E392_METHOD_2_ED478E52EC90F59B_OFFSET UNITYSDK_OFFSET(0x7B0690)
#define STRUCT_2_5D55D2D92073E392__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0410)

inline static constexpr unsigned int Struct_2_5D55D2D92073E392_TypeDefinitionIndex = 78853;

struct alignas(8) Struct_2_5D55D2D92073E392
{
	::Foundation::Variable_1<::UnityEngine::Vector3> Field_2_0; // 0x10
	::PipelineCamera::EulerRotation Field_2_1; // 0x30
	::UnityEngine::Vector2 Field_2_2; // 0x78
	::Foundation::Clamped_1<::System::Single> Field_2_3; // 0x80
	::Foundation::Clamped_1<::System::Single> Field_2_4; // 0x98
	::PipelineCamera::EulerRotation Field_2_5; // 0xB0
	::System::Single Field_2_6; // 0xF8
	::System::Single Field_2_7; // 0xFC
	::System::Single Field_2_8; // 0x100
	::System::Single Field_2_9; // 0x104
	::MoleMole::Cameras::PhotoCameraDefaultSetting Field_2_10; // 0x108
	::System::Nullable_1<::Struct_2_AE85181E37549DEA> Field_2_11; // 0x128

	::System::Void _ctor(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::MoleMole::Cameras::PhotoCameraDefaultSetting& a6, ::UnityEngine::Vector3& a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::PhotoCameraDefaultSetting&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	/*
	static ::Struct_2_5D55D2D92073E392 Method_2_4BFD2E5829BD9CCE(::System::UInt32 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::System::Single& a4, ::UnityEngine::Vector3& a5, ::MoleMole::Cameras::PhotoCameraConfig*& a6)
	{
		return ((::Struct_2_5D55D2D92073E392(*)(::System::UInt32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&, ::UnityEngine::Vector3&, ::MoleMole::Cameras::PhotoCameraConfig*&))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_4BFD2E5829BD9CCE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
	*/

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_D09C1CCEF6125527(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_D09C1CCEF6125527_OFFSET))(this, a1);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_A96412DEBF421DB9(::System::Single a1, ::System::Single a2)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_A96412DEBF421DB9_OFFSET))(this, a1, a2);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_3FC6AC1F995D6A9B(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_3FC6AC1F995D6A9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_41146E620D694011_OFFSET))(this);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_D09C1CCEF6125527_1(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_D09C1CCEF6125527_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_486AF1E6C0038D4C_OFFSET))(this);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_ABFCD9C8B7F359A4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_ABFCD9C8B7F359A4_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_C7FA529A7C6C5B70(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_C7FA529A7C6C5B70_OFFSET))(this, a1);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_8AC4AD728738E938(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_8AC4AD728738E938_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_3FC6AC1F995D6A9B_1(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_3FC6AC1F995D6A9B_1_OFFSET))(this, a1);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_D09C1CCEF6125527_2(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_D09C1CCEF6125527_2_OFFSET))(this, a1);
	}

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_ED478E52EC90F59B(::System::Single a1, ::System::Single a2)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_ED478E52EC90F59B_OFFSET))(this, a1, a2);
	}

	/*
	static ::PipelineCamera::WorldBasicCameraData Method_2_AFB60E5E2FFBAC40(::Struct_2_5D55D2D92073E392& a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Struct_2_5D55D2D92073E392&))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_AFB60E5E2FFBAC40_OFFSET))(a1);
	}
	*/

	::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7* Method_2_C7FA529A7C6C5B70_1(::System::Single a1)
	{
		return ((::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_7*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_METHOD_2_C7FA529A7C6C5B70_1_OFFSET))(this, a1);
	}
};
