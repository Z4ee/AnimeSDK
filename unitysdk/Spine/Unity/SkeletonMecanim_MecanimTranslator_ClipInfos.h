#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLIPINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C188030)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_ClipInfos_TypeDefinitionIndex = 40129;

	class SkeletonMecanim_MecanimTranslator_ClipInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* nextClipInfos; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clipInfos; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* interruptingClipInfos; // 0x20
		::System::Int32 clipInfoCount; // 0x28
		::System::Single interruptingClipTimeAddition; // 0x2C
		::System::Int32 interruptingClipInfoCount; // 0x30
		::UnityEngine::AnimatorStateInfo nextStateInfo; // 0x34
		::System::Boolean isInterruptionActive; // 0x5C
		::System::Boolean isLastFrameOfInterruption; // 0x5D
		::UnityEngine::AnimatorStateInfo interruptingStateInfo; // 0x60
		::UnityEngine::AnimatorStateInfo stateInfo; // 0x88
		::System::Int32 nextClipInfoCount; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLIPINFOS__CTOR_OFFSET))(this);
		}
	};
}
