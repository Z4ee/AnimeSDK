#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCustomIdleManager_CustomIdleInstanceData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CREATREQUESTJOB_BUILDSAMPLEPOSEREQUEST_OFFSET UNITYSDK_OFFSET(0x5EF3F0)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CREATREQUESTJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5EF3E0)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CREATREQUESTJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x5EF390)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCustomIdleManager_CreatRequestJob_TypeDefinitionIndex = 53780;

	struct alignas(8) NPCCustomIdleManager_CreatRequestJob
	{
		::Unity::Collections::NativeList_1<::NPCCrowd::Animation::NPCCustomIdleManager_CustomIdleInstanceData> _insatnceDatas; // 0x10
		::Unity::Collections::NativeList_1<::UnityEngine::NapTransformData> _bones; // 0x20
		::Unity::Collections::NativeList_1<::System::IntPtr> _requests; // 0x30
		::System::Single _time; // 0x40

		::System::Void _ctor(::Unity::Collections::NativeList_1<::NPCCrowd::Animation::NPCCustomIdleManager_CustomIdleInstanceData> instances, ::Unity::Collections::NativeList_1<::UnityEngine::NapTransformData> bones, ::Unity::Collections::NativeList_1<::System::IntPtr> requests, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeList_1<::NPCCrowd::Animation::NPCCustomIdleManager_CustomIdleInstanceData>, ::Unity::Collections::NativeList_1<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeList_1<::System::IntPtr>, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CREATREQUESTJOB__CTOR_OFFSET))(this, instances, bones, requests, time);
		}

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CREATREQUESTJOB_EXECUTE_OFFSET))(this, idx);
		}

		/*
		::System::Void BuildSamplePoseRequest(::NPCCrowd::Animation::NPCCustomIdleManager_CustomIdleInstanceData instance, ::Unity::Collections::NativeSlice_1<::UnityEngine::NapTransformData>& bones)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCustomIdleManager_CustomIdleInstanceData, ::Unity::Collections::NativeSlice_1<::UnityEngine::NapTransformData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CREATREQUESTJOB_BUILDSAMPLEPOSEREQUEST_OFFSET))(this, instance, bones);
		}
		*/
	};
}
