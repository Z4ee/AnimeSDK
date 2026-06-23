#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_STRUCT_2_3FA97CC54A1F2DCC_1_COMPARE_OFFSET UNITYSDK_OFFSET(0x640060)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_STRUCT_2_3FA97CC54A1F2DCC_1_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x6400C0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_STRUCT_2_3FA97CC54A1F2DCC_1_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x6400B0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_STRUCT_2_3FA97CC54A1F2DCC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x63FFC0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraData_Struct_2_3FA97CC54A1F2DCC_1_TypeDefinitionIndex = 67974;

	struct alignas(4) OverShoulderCameraData_Struct_2_3FA97CC54A1F2DCC_1
	{
		::System::Single Field_2_0; // 0x10
		::System::Single Field_2_1; // 0x14
		::System::Single Field_2_2; // 0x18

		/*
		::System::Void _ctor(::UnityEngine::Quaternion a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_STRUCT_2_3FA97CC54A1F2DCC_1__CTOR_OFFSET))(this, a1, a2, a3);
		}
		*/

		/*
		::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a1, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_STRUCT_2_3FA97CC54A1F2DCC_1_COMPARE_OFFSET))(this, a1, a2);
		}
		*/

		::System::Double get_MinPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_STRUCT_2_3FA97CC54A1F2DCC_1_GET_MINPITCH_OFFSET))(this);
		}

		::System::Double get_MaxPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_STRUCT_2_3FA97CC54A1F2DCC_1_GET_MAXPITCH_OFFSET))(this);
		}
	};
}
