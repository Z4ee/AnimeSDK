#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryAnimatorManager_SampleData.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryAnimatorManager_SamplePoseJob.h"
#include "unitysdk/NPCCrowd/Animation/NPCAnimationLib_AnimationId.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimationAssetsSO; }
namespace NPCCrowd::Animation { class NPCAnimationLib; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Avatar; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_ADD_OFFSET UNITYSDK_OFFSET(0xBDDE420)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_BUILDSAMPLEPOSEJOB_OFFSET UNITYSDK_OFFSET(0xBDDE870)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_CLEARJOBDATA_OFFSET UNITYSDK_OFFSET(0xBDDEBB0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_CONSUMEJOBDATA_OFFSET UNITYSDK_OFFSET(0xBDDEC40)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_DISPATCHSAMPLEPOSEJOB_OFFSET UNITYSDK_OFFSET(0xBDDE4F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_GENERATESAMPLEDATA_OFFSET UNITYSDK_OFFSET(0xBDDEE50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_GETROOTINDEX_OFFSET UNITYSDK_OFFSET(0xBDDDC80)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xBDDE0C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_NEW_OFFSET UNITYSDK_OFFSET(0xBDDE0F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_REMOVE_OFFSET UNITYSDK_OFFSET(0xBDDE480)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDD4F0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimatorManager_AvatarLookupItem_TypeDefinitionIndex = 75924;

	class NPCAccessoryAnimatorManager_AvatarLookupItem : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _rootIndex; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* _accessories; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Animation::NPCAnimationLib_AnimationId>* _lookupTable; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* _addedAccessories; // 0x28
		::UnityEngine::Avatar* _avatar; // 0x30
		::System::Nullable_1<::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_SamplePoseJob> _job; // 0x38
		::System::Int32 _rootBoneIndex; // 0x80

		::System::Void _ctor(::NPCCrowd::Animation::NPCAnimationLib* lib, ::UnityEngine::Avatar* avatar, ::NPCCrowd::Accessories::NPCAccessoryAnimationAssetsSO* animation)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCAnimationLib*, ::UnityEngine::Avatar*, ::NPCCrowd::Accessories::NPCAccessoryAnimationAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM__CTOR_OFFSET))(this, lib, avatar, animation);
		}

		static ::Il2CppArray<::System::Int32>* GetRootIndex(::NPCCrowd::Animation::NPCAnimationLib* lib, ::UnityEngine::Avatar* avatar, ::System::Int32& rootBoneIndex)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::NPCCrowd::Animation::NPCAnimationLib*, ::UnityEngine::Avatar*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_GETROOTINDEX_OFFSET))(lib, avatar, rootBoneIndex);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_GET_COUNT_OFFSET))(this);
		}

		static ::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_AvatarLookupItem* New(::NPCCrowd::Animation::NPCAnimationLib* lib, ::UnityEngine::Avatar* avatar, ::NPCCrowd::Accessories::NPCAccessoryAnimationAssetsSO* animation)
		{
			return ((::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_AvatarLookupItem*(*)(::NPCCrowd::Animation::NPCAnimationLib*, ::UnityEngine::Avatar*, ::NPCCrowd::Accessories::NPCAccessoryAnimationAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_NEW_OFFSET))(lib, avatar, animation);
		}

		::System::Void Add(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_ADD_OFFSET))(this, accessory);
		}

		::System::Void Remove(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_REMOVE_OFFSET))(this, accessory);
		}

		::System::Nullable_1<::Unity::Jobs::JobHandle> DispatchSamplePoseJob()
		{
			return ((::System::Nullable_1<::Unity::Jobs::JobHandle>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_DISPATCHSAMPLEPOSEJOB_OFFSET))(this);
		}

		::System::Void ClearJobData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_CLEARJOBDATA_OFFSET))(this);
		}

		::System::Void ConsumeJobData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_CONSUMEJOBDATA_OFFSET))(this);
		}

		::System::Nullable_1<::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_SamplePoseJob> BuildSamplePoseJob(::NPCCrowd::Animation::NPCAnimationLib* animationLib, ::UnityEngine::Avatar* avatar, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories)
		{
			return ((::System::Nullable_1<::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_SamplePoseJob>(*)(::PVOID, ::NPCCrowd::Animation::NPCAnimationLib*, ::UnityEngine::Avatar*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_BUILDSAMPLEPOSEJOB_OFFSET))(this, animationLib, avatar, accessories);
		}

		::System::Nullable_1<::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_SampleData> GenerateSampleData(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Nullable_1<::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_SampleData>(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM_GENERATESAMPLEDATA_OFFSET))(this, accessory);
		}
	};
}
