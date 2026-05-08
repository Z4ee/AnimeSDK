#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_STRUCT_2_3FA97CC54A1F2DCC_2_COMPARE_OFFSET UNITYSDK_OFFSET(0x7A2B40)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_STRUCT_2_3FA97CC54A1F2DCC_2_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x746E80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_STRUCT_2_3FA97CC54A1F2DCC_2_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x746E70)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_STRUCT_2_3FA97CC54A1F2DCC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x746D80)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameTwoPointsInCorePolicy_LevelSettlement_Struct_2_3FA97CC54A1F2DCC_2_TypeDefinitionIndex = 58217;

	struct alignas(4) FrameTwoPointsInCorePolicy_LevelSettlement_Struct_2_3FA97CC54A1F2DCC_2
	{
		::System::Single Field_2_0; // 0x10
		::System::Single Field_2_1; // 0x14
		::System::Single Field_2_2; // 0x18

		/*
		::System::Void _ctor(::UnityEngine::Quaternion a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_STRUCT_2_3FA97CC54A1F2DCC_2__CTOR_OFFSET))(this, a1, a2, a3);
		}
		*/

		/*
		::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a1, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_STRUCT_2_3FA97CC54A1F2DCC_2_COMPARE_OFFSET))(this, a1, a2);
		}
		*/

		::System::Double get_MinPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_STRUCT_2_3FA97CC54A1F2DCC_2_GET_MINPITCH_OFFSET))(this);
		}

		::System::Double get_MaxPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_STRUCT_2_3FA97CC54A1F2DCC_2_GET_MAXPITCH_OFFSET))(this);
		}
	};
}
