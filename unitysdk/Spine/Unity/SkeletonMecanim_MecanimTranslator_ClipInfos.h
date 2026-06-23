#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLIPINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD39FB0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_ClipInfos_TypeDefinitionIndex = 39464;

	class SkeletonMecanim_MecanimTranslator_ClipInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* nextClipInfos; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* interruptingClipInfos; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clipInfos; // 0x20
		::System::Int32 clipInfoCount; // 0x28
		::UnityEngine::AnimatorStateInfo interruptingStateInfo; // 0x2C
		::UnityEngine::AnimatorStateInfo nextStateInfo; // 0x54
		::System::Int32 interruptingClipInfoCount; // 0x7C
		::System::Single interruptingClipTimeAddition; // 0x80
		::System::Int32 nextClipInfoCount; // 0x84
		::System::Boolean isLastFrameOfInterruption; // 0x88
		::System::Boolean isInterruptionActive; // 0x89
		::UnityEngine::AnimatorStateInfo stateInfo; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLIPINFOS__CTOR_OFFSET))(this);
		}
	};
}
