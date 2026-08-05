#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_STRUCT_2_E499DDD21BF551C3_1_COMPARE_OFFSET UNITYSDK_OFFSET(0x730780)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_STRUCT_2_E499DDD21BF551C3_1_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x7307E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_STRUCT_2_E499DDD21BF551C3_1_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x7307D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_STRUCT_2_E499DDD21BF551C3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x730740)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameOnePointInCorePolicy_ByTrack_Struct_2_E499DDD21BF551C3_1_TypeDefinitionIndex = 86849;

	struct alignas(4) FrameOnePointInCorePolicy_ByTrack_Struct_2_E499DDD21BF551C3_1
	{
		::UnityEngine::Quaternion Field_2_0; // 0x10

		::System::Void _ctor(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_STRUCT_2_E499DDD21BF551C3_1__CTOR_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a1, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_STRUCT_2_E499DDD21BF551C3_1_COMPARE_OFFSET))(this, a1, a2);
		}
		*/

		::System::Double get_MinPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_STRUCT_2_E499DDD21BF551C3_1_GET_MINPITCH_OFFSET))(this);
		}

		::System::Double get_MaxPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_STRUCT_2_E499DDD21BF551C3_1_GET_MAXPITCH_OFFSET))(this);
		}
	};
}
