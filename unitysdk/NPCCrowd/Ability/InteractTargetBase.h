#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability { class InteractSlot; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_INTERACTTARGETBASE_CHECKINTERACTVALID_OFFSET UNITYSDK_OFFSET(0x11362180)
#define NPCCROWD_ABILITY_INTERACTTARGETBASE_INITSLOTS_OFFSET UNITYSDK_OFFSET(0x11362130)
#define NPCCROWD_ABILITY_INTERACTTARGETBASE_ONSTARTINTERACT_OFFSET UNITYSDK_OFFSET(0x113622A0)
#define NPCCROWD_ABILITY_INTERACTTARGETBASE_TRYOCCUPYVALIDSLOT_OFFSET UNITYSDK_OFFSET(0x11362210)
#define NPCCROWD_ABILITY_INTERACTTARGETBASE_TRYRELEASESLOT_OFFSET UNITYSDK_OFFSET(0x11362350)
#define NPCCROWD_ABILITY_INTERACTTARGETBASE_UPDATESLOTS_OFFSET UNITYSDK_OFFSET(0x113622F0)
#define NPCCROWD_ABILITY_INTERACTTARGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x113623A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int InteractTargetBase_TypeDefinitionIndex = 64543;

	class InteractTargetBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::InteractSlot*>* slotMap; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::InteractSlot*>* slots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTTARGETBASE__CTOR_OFFSET))(this);
		}

		::System::Void InitSlots(::System::Int32 slotCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTTARGETBASE_INITSLOTS_OFFSET))(this, slotCnt);
		}

		::System::Boolean CheckInteractValid(::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTTARGETBASE_CHECKINTERACTVALID_OFFSET))(this, entityID, pathFollow, pos);
		}

		::System::Boolean TryOccupyValidSlot(::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::NPCCrowd::Ability::InteractSlot*& slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::NPCCrowd::Ability::InteractSlot*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTTARGETBASE_TRYOCCUPYVALIDSLOT_OFFSET))(this, entityID, pathFollow, slot);
		}

		::System::Void OnStartInteract(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTTARGETBASE_ONSTARTINTERACT_OFFSET))(this, entityID);
		}

		::System::Void UpdateSlots(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTTARGETBASE_UPDATESLOTS_OFFSET))(this, deltaTime);
		}

		::System::Boolean TryReleaseSlot(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_INTERACTTARGETBASE_TRYRELEASESLOT_OFFSET))(this, entityID);
		}
	};
}
