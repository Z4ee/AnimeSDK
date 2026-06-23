#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Unreal/FRotator.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class TelescopeCameraConfig; }

#define STRUCT_2_684D98DEC5D1B919_METHOD_2_4DA56B3B1C112C8A_OFFSET UNITYSDK_OFFSET(0x813370)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x490100)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_C4FDF5DB46830B8A_1_OFFSET UNITYSDK_OFFSET(0x8138A0)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_C4FDF5DB46830B8A_OFFSET UNITYSDK_OFFSET(0x813780)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x388220)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_E995AC2C77AFC09F_OFFSET UNITYSDK_OFFSET(0x813680)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x8139E0)
#define STRUCT_2_684D98DEC5D1B919__CTOR_OFFSET UNITYSDK_OFFSET(0x813330)

inline static constexpr unsigned int Struct_2_684D98DEC5D1B919_TypeDefinitionIndex = 81667;

struct alignas(8) Struct_2_684D98DEC5D1B919
{
	::Foundation::Unreal::FTransform Field_2_0; // 0x10
	::Foundation::Unreal::FRotator Field_2_1; // 0x30
	::Foundation::Clamped_1<::System::Single> Field_2_2; // 0x40
	::System::Single Field_2_3; // 0x58
	::Foundation::Unreal::Interval_1<::System::Single> Field_2_4; // 0x5C
	::Foundation::Unreal::Interval_1<::System::Single> Field_2_5; // 0x6C
	::Foundation::Unreal::Interval_1<::System::Single> Field_2_6; // 0x7C

	/*
	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::MoleMole::Cameras::TelescopeCameraConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Cameras::TelescopeCameraConfig*))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919__CTOR_OFFSET))(this, a1, a2, a3);
	}
	*/

	::System::Void Method_2_4DA56B3B1C112C8A(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_4DA56B3B1C112C8A_OFFSET))(this, a1, a2, a3);
	}

	/*
	::UnityEngine::Quaternion Method_2_E995AC2C77AFC09F()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_E995AC2C77AFC09F_OFFSET))(this);
	}
	*/

	::System::Void Method_2_C4FDF5DB46830B8A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_C4FDF5DB46830B8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_C4FDF5DB46830B8A_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_C4FDF5DB46830B8A_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}
	*/
};
