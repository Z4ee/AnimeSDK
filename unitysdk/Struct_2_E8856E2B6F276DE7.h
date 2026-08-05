#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class PlaneCameraConfig; }

#define STRUCT_2_E8856E2B6F276DE7_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x6F5140)
#define STRUCT_2_E8856E2B6F276DE7_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x6F5120)
#define STRUCT_2_E8856E2B6F276DE7_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x4963E0)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_1F4A04CEE762335A_1_OFFSET UNITYSDK_OFFSET(0x6F51C0)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_1F4A04CEE762335A_OFFSET UNITYSDK_OFFSET(0x6F5160)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_480EACF8B499351F_1_OFFSET UNITYSDK_OFFSET(0x6F51E0)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_480EACF8B499351F_2_OFFSET UNITYSDK_OFFSET(0x6F5330)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x6F51D0)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x6F5310)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x5ED190)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x6F51F0)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_7C7377C794E8973C_1_OFFSET UNITYSDK_OFFSET(0x6F5340)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0x6F5200)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_C21A7AC6282FB0D0_1_OFFSET UNITYSDK_OFFSET(0x6F5450)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x6F5170)
#define STRUCT_2_E8856E2B6F276DE7_METHOD_2_E1159787734BD959_OFFSET UNITYSDK_OFFSET(0x6F5320)
#define STRUCT_2_E8856E2B6F276DE7__CTOR_OFFSET UNITYSDK_OFFSET(0x6F5150)

inline static constexpr unsigned int Struct_2_E8856E2B6F276DE7_TypeDefinitionIndex = 81397;

struct alignas(8) Struct_2_E8856E2B6F276DE7
{
	::PipelineCamera::FinalCameraData Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x30
	::Foundation::Clamped_1<::System::Single> Field_2_0; // 0x38
	::Foundation::Clamped_1<::System::Single> Field_2_7; // 0x50
	::Foundation::Clamped_1<::System::Single> Field_2_6; // 0x68
	::Foundation::Clamped_1<::System::Single> Field_2_5; // 0x80

	::System::Void _ctor(::MoleMole::Cameras::PlaneCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PlaneCameraConfig*))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7__CTOR_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Vector3 get_Location()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_GET_LOCATION_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_GET_ROTATION_OFFSET))(this);
	}
	*/

	::System::Single get_FieldOfView()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_GET_FIELDOFVIEW_OFFSET))(this);
	}

	::System::Void Method_2_1F4A04CEE762335A(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_1F4A04CEE762335A_OFFSET))(this, a1, a2);
	}

	/*
	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_C21A7AC6282FB0D0_OFFSET))(this);
	}
	*/

	::System::Void Method_2_1F4A04CEE762335A_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_1F4A04CEE762335A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_480EACF8B499351F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_480EACF8B499351F_OFFSET))(this, a1);
	}

	::System::Void Method_2_480EACF8B499351F_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_480EACF8B499351F_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	/*
	::System::Void Method_2_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_7C7377C794E8973C_OFFSET))(this, a1);
	}
	*/

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_2_E1159787734BD959()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_E1159787734BD959_OFFSET))(this);
	}

	::System::Void Method_2_480EACF8B499351F_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_480EACF8B499351F_2_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_7C7377C794E8973C_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_7C7377C794E8973C_1_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0_1()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_C21A7AC6282FB0D0_1_OFFSET))(this);
	}
	*/

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8856E2B6F276DE7_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}
};
