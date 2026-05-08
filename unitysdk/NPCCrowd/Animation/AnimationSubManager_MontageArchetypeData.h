#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView_1.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MontageArchetypeChunkData.h"
#include "unitysdk/NPCCrowd/Animation/MontageChunkData.h"
#include "unitysdk/NPCCrowd/Animation/MontageData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Adapter { template <typename T> class ChunkList_1; }
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_ADDSHAREDDATA_OFFSET UNITYSDK_OFFSET(0xCD34FE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_CLEARCOLLECTDATA_OFFSET UNITYSDK_OFFSET(0xCD47890)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_COLLECT_OFFSET UNITYSDK_OFFSET(0xCD47970)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD36D30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_GETMONTAGESTARTIDX_OFFSET UNITYSDK_OFFSET(0xCD35840)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_GETSHAREDDATA_OFFSET UNITYSDK_OFFSET(0xCD479D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_GET_SHAREDDATAVIEW_OFFSET UNITYSDK_OFFSET(0xCD47800)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD34BD0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MontageArchetypeData_TypeDefinitionIndex = 70458;

	class AnimationSubManager_MontageArchetypeData : public ::System::Object
	{
	public:
		// static const ::System::Int32 ChunkSizeBit = 0x4; // 0x0
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::MontageChunkData>* _sharedData; // 0x10
		::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>* _chunkData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* montageKeyMap; // 0x20
		::Foundation::Container::NativeVector_1<::System::Int32> _count; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA__CTOR_OFFSET))(this);
		}

		::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::MontageChunkData> get_SharedDataView()
		{
			return ((::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::MontageChunkData>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_GET_SHAREDDATAVIEW_OFFSET))(this);
		}

		::System::Void ClearCollectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_CLEARCOLLECTDATA_OFFSET))(this);
		}

		::System::Boolean Collect(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_COLLECT_OFFSET))(this, data);
		}

		::System::Void AddSharedData(::System::Int32 montageKey, ::NPCCrowd::Animation::MontageData data, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Boolean& addedClip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::MontageData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_ADDSHAREDDATA_OFFSET))(this, montageKey, data, instanceConfig, addedClip);
		}

		::System::Boolean GetMontageStartIdx(::System::Int32 montageKey, ::System::Int32 layer, ::System::Int32& startIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_GETMONTAGESTARTIDX_OFFSET))(this, montageKey, layer, startIdx);
		}

		::NPCCrowd::Animation::MontageChunkData GetSharedData(::System::Int32 sharedIndex)
		{
			return ((::NPCCrowd::Animation::MontageChunkData(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_GETSHAREDDATA_OFFSET))(this, sharedIndex);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEARCHETYPEDATA_DISPOSE_OFFSET))(this);
		}
	};
}
