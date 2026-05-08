#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Ability { class InteractSlot; }
namespace NPCCrowd::Ability { class InteractTargetBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xFAC9B20)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFAC9EA0)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xFAC9DD0)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xFAC9D40)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_REGISTERINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xD445F40)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xFAC9CA0)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_TRYGETINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xD446B50)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_TRYINTERACTINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xD446080)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_TRYRELEASEINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xD446870)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_UNREGISTERINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xD445FF0)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD447010)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD446F50)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD4470B0)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD447150)
#define NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD4471E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCInteractTargetManager_TypeDefinitionIndex = 60285;

	class NPCInteractTargetManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::InteractTargetBase*>** StaticGet_interactMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::InteractTargetBase*>**)Il2CppClass::FromTypeDefinitionIndex(NPCInteractTargetManager_TypeDefinitionIndex)->GetStaticField(0x48BF0);
		}
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x18
		::System::Collections::Generic::HashSet_1<::NPCCrowd::Ability::InteractTargetBase*>* allInteractTargets; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Ability::NPCInteractTargetManager* Get()
		{
			return ((::NPCCrowd::Ability::NPCInteractTargetManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_GET_OFFSET))();
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void RegisterInteractTarget(::NPCCrowd::Ability::InteractTargetBase* it)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::InteractTargetBase*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_REGISTERINTERACTTARGET_OFFSET))(this, it);
		}

		::System::Void UnRegisterInteractTarget(::NPCCrowd::Ability::InteractTargetBase* it)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::InteractTargetBase*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_UNREGISTERINTERACTTARGET_OFFSET))(this, it);
		}

		::System::Boolean TryInteractInteractTarget(::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::UnityEngine::Vector3 pos, ::NPCCrowd::Ability::InteractSlot*& s)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::UnityEngine::Vector3, ::NPCCrowd::Ability::InteractSlot*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_TRYINTERACTINTERACTTARGET_OFFSET))(this, entityID, pathFollow, pos, s);
		}

		::System::Boolean TryReleaseInteractTarget(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_TRYRELEASEINTERACTTARGET_OFFSET))(this, entityID);
		}

		::System::Boolean TryGetInteractTarget(::System::UInt32 entityID, ::NPCCrowd::Ability::InteractSlot*& slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::InteractSlot*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER_TRYGETINTERACTTARGET_OFFSET))(this, entityID, slot);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCINTERACTTARGETMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
