#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/InteractTargetBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphSplineLocatorComponent; }
namespace NPCCrowd::AI { class WaitingSlotTemplatesSO; }
namespace NPCCrowd::Ability { class InteractSlot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT_CHECKINTERACTVALID_OFFSET UNITYSDK_OFFSET(0xF853130)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT_INITDATA_OFFSET UNITYSDK_OFFSET(0xF852AA0)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xF852680)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT_ONSTARTINTERACT_OFFSET UNITYSDK_OFFSET(0xF854080)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xF852550)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT_REALRELEASESLOT_OFFSET UNITYSDK_OFFSET(0xF8546D0)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT_TRYOCCUPYVALIDSLOT_OFFSET UNITYSDK_OFFSET(0xF853540)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT_TRYRELEASESLOT_OFFSET UNITYSDK_OFFSET(0xF854830)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT_UPDATESLOTS_OFFSET UNITYSDK_OFFSET(0xF8540D0)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT__CCTOR_OFFSET UNITYSDK_OFFSET(0xF854B90)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xF854AD0)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT___BASE_CHECKINTERACTVALID_OFFSET UNITYSDK_OFFSET(0xF854BD0)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT___BASE_ONSTARTINTERACT_OFFSET UNITYSDK_OFFSET(0xF854CE0)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT___BASE_TRYOCCUPYVALIDSLOT_OFFSET UNITYSDK_OFFSET(0xF854D70)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT___BASE_TRYRELEASESLOT_OFFSET UNITYSDK_OFFSET(0xF854E60)
#define NPCCROWD_ABILITY_INTERACTWAITINGSLOT___BASE_UPDATESLOTS_OFFSET UNITYSDK_OFFSET(0xF854EF0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int InteractWaitingSlot_TypeDefinitionIndex = 76193;

	class InteractWaitingSlot : public ::NPCCrowd::Ability::InteractTargetBase
	{
	public:
		static ::NPCCrowd::AI::WaitingSlotTemplatesSO** StaticGet_WaitingSlotTemplateAsset()
		{
			return (::NPCCrowd::AI::WaitingSlotTemplatesSO**)Il2CppClass::FromTypeDefinitionIndex(InteractWaitingSlot_TypeDefinitionIndex)->GetStaticField(0x40E30);
		}
		static ::System::String** StaticGet_TEMPLATE_ASSET_SO()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(InteractWaitingSlot_TypeDefinitionIndex)->GetStaticField(0x40E38);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_AssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(InteractWaitingSlot_TypeDefinitionIndex)->GetStaticField(0x40E40);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::Ability::InteractSlot*>*>* node2NearestSlots; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineLocatorComponent*>* _toLocators; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* tmpList; // 0x30
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineLocatorComponent*>* _fromLocators; // 0x38
		::UnityEngine::Vector3 rotation; // 0x40
		::System::Single effectRange; // 0x4C
		::UnityEngine::Vector3 position; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT__CCTOR_OFFSET))();
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		static ::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT_ONPRELOADFINISHED_OFFSET))();
		}

		::System::Void InitData(::System::Int32 templateID, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 rot, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineLocatorComponent*>* fromLocators, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineLocatorComponent*>* toLocators)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineLocatorComponent*>*, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineLocatorComponent*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT_INITDATA_OFFSET))(this, templateID, pos, rot, fromLocators, toLocators);
		}

		::System::Boolean CheckInteractValid(::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT_CHECKINTERACTVALID_OFFSET))(this, entityID, pathFollow, pos);
		}

		::System::Boolean TryOccupyValidSlot(::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::NPCCrowd::Ability::InteractSlot*& slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::NPCCrowd::Ability::InteractSlot*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT_TRYOCCUPYVALIDSLOT_OFFSET))(this, entityID, pathFollow, slot);
		}

		::System::Void OnStartInteract(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT_ONSTARTINTERACT_OFFSET))(this, entityID);
		}

		::System::Void UpdateSlots(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT_UPDATESLOTS_OFFSET))(this, deltaTime);
		}

		::System::Boolean TryReleaseSlot(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT_TRYRELEASESLOT_OFFSET))(this, entityID);
		}

		::System::Void RealReleaseSlot(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT_REALRELEASESLOT_OFFSET))(this, entityID);
		}

		::System::Boolean __base_CheckInteractValid(::System::UInt32 P0, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT___BASE_CHECKINTERACTVALID_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnStartInteract(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT___BASE_ONSTARTINTERACT_OFFSET))(this, P0);
		}

		::System::Boolean __base_TryOccupyValidSlot(::System::UInt32 P0, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 P1, ::NPCCrowd::Ability::InteractSlot*& P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::NPCCrowd::Ability::InteractSlot*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT___BASE_TRYOCCUPYVALIDSLOT_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean __base_TryReleaseSlot(::System::UInt32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT___BASE_TRYRELEASESLOT_OFFSET))(this, P0);
		}

		::System::Void __base_UpdateSlots(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTWAITINGSLOT___BASE_UPDATESLOTS_OFFSET))(this, P0);
		}
	};
}
