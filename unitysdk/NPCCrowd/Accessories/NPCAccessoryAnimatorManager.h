#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimatorManager_AvatarLookupItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Avatar; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CLEARNATIVECOLLECTIONS_OFFSET UNITYSDK_OFFSET(0x952E680)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CONSUMESAMPLEDPOSE_OFFSET UNITYSDK_OFFSET(0x952E890)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CREATEACCESSORYANIMATOR_OFFSET UNITYSDK_OFFSET(0x9530A20)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_DISPATCHSAMPLEPOSEJOB_OFFSET UNITYSDK_OFFSET(0x952EC40)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x952DFC0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x952E140)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_INSERTACCESSORY_OFFSET UNITYSDK_OFFSET(0x9530060)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x952FD50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x952E270)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_REMOVEACCESSORYANIMATOR_OFFSET UNITYSDK_OFFSET(0x9531300)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_REMOVEACCESSORY_OFFSET UNITYSDK_OFFSET(0x95306F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x952F870)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0x952EC10)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9531380)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x9531390)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9531420)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x95314C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9531550)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimatorManager_TypeDefinitionIndex = 87991;

	class NPCAccessoryAnimatorManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Avatar*, ::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_AvatarLookupItem*>* _avatarLookupTable; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* _accessories; // 0x20
		::Unity::Jobs::JobHandle _handle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Accessories::NPCAccessoryAnimatorManager* Get()
		{
			return ((::NPCCrowd::Accessories::NPCAccessoryAnimatorManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearNativeCollections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CLEARNATIVECOLLECTIONS_OFFSET))(this);
		}

		::System::Void ConsumeSampledPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CONSUMESAMPLEDPOSE_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_WAIT_OFFSET))(this);
		}

		::System::Void DispatchSamplePoseJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_DISPATCHSAMPLEPOSEJOB_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void InsertAccessory(::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Boolean drivenInternal)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_INSERTACCESSORY_OFFSET))(this, accessory, drivenInternal);
		}

		::System::Void RemoveAccessory(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_REMOVEACCESSORY_OFFSET))(this, accessory);
		}

		::System::Void CreateAccessoryAnimator(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_CREATEACCESSORYANIMATOR_OFFSET))(this, acc);
		}

		::System::Void RemoveAccessoryAnimator(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_REMOVEACCESSORYANIMATOR_OFFSET))(this, acc);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
