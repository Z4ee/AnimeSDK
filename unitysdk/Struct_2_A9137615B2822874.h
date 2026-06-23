#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class PlaneCameraConfig; }

#define STRUCT_2_A9137615B2822874_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x677610)
#define STRUCT_2_A9137615B2822874_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x703CC0)
#define STRUCT_2_A9137615B2822874_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x417280)
#define STRUCT_2_A9137615B2822874_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x703FE0)
#define STRUCT_2_A9137615B2822874_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x6C8E30)
#define STRUCT_2_A9137615B2822874_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x4900C0)
#define STRUCT_2_A9137615B2822874_METHOD_2_7C7377C794E8973C_1_OFFSET UNITYSDK_OFFSET(0x703EB0)
#define STRUCT_2_A9137615B2822874_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0x703DA0)
#define STRUCT_2_A9137615B2822874_METHOD_2_7E69B386DB903252_1_OFFSET UNITYSDK_OFFSET(0x703FD0)
#define STRUCT_2_A9137615B2822874_METHOD_2_7E69B386DB903252_2_OFFSET UNITYSDK_OFFSET(0x704010)
#define STRUCT_2_A9137615B2822874_METHOD_2_7E69B386DB903252_OFFSET UNITYSDK_OFFSET(0x703FC0)
#define STRUCT_2_A9137615B2822874_METHOD_2_C103F3728197B281_1_OFFSET UNITYSDK_OFFSET(0x704000)
#define STRUCT_2_A9137615B2822874_METHOD_2_C103F3728197B281_OFFSET UNITYSDK_OFFSET(0x703FF0)
#define STRUCT_2_A9137615B2822874_METHOD_2_C21A7AC6282FB0D0_1_OFFSET UNITYSDK_OFFSET(0x703D50)
#define STRUCT_2_A9137615B2822874_METHOD_2_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x703CF0)
#define STRUCT_2_A9137615B2822874_METHOD_2_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x703D40)
#define STRUCT_2_A9137615B2822874__CTOR_OFFSET UNITYSDK_OFFSET(0x703CE0)

inline static constexpr unsigned int Struct_2_A9137615B2822874_TypeDefinitionIndex = 49729;

struct alignas(8) Struct_2_A9137615B2822874
{
	::PipelineCamera::FinalCameraData Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x30
	::Foundation::Clamped_1<::System::Single> Field_2_2; // 0x38
	::Foundation::Clamped_1<::System::Single> Field_2_3; // 0x50
	::Foundation::Clamped_1<::System::Single> Field_2_4; // 0x68
	::Foundation::Clamped_1<::System::Single> Field_2_5; // 0x80

	::System::Void _ctor(::MoleMole::Cameras::PlaneCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PlaneCameraConfig*))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874__CTOR_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Vector3 get_Location()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_GET_LOCATION_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_GET_ROTATION_OFFSET))(this);
	}
	*/

	::System::Single get_FieldOfView()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_GET_FIELDOFVIEW_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_C21A7AC6282FB0D0_OFFSET))(this);
	}
	*/

	::System::Void Method_2_C6159FCF4A6D407A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_C6159FCF4A6D407A_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0_1()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_C21A7AC6282FB0D0_1_OFFSET))(this);
	}
	*/

	/*
	::System::Void Method_2_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_7C7377C794E8973C_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_7C7377C794E8973C_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_7C7377C794E8973C_1_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_7E69B386DB903252(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_7E69B386DB903252_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E69B386DB903252_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_7E69B386DB903252_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_2_C103F3728197B281(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_C103F3728197B281_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C103F3728197B281_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_C103F3728197B281_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7E69B386DB903252_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_7E69B386DB903252_2_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9137615B2822874_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}
};
