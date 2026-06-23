#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeHandle.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeInstanceHandle.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { template <typename T> class ManagedListJobWrapper_1; }
namespace UnrealTypes { template <typename T> class ManagedStructListJobWrapper_1; }

#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xA676840)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA6769C0)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_LOADORGETSTATETREE_OFFSET UNITYSDK_OFFSET(0xA676CA0)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA676AF0)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xA676B30)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_SENDSTATETREEEVENT_OFFSET UNITYSDK_OFFSET(0xA677650)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xA676A00)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_STARTSTATETREE_OFFSET UNITYSDK_OFFSET(0xA677230)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER_STOPSTATETREE_OFFSET UNITYSDK_OFFSET(0xA6774D0)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA677990)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA677780)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xA6779A0)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA677A30)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xA677AC0)
#define NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xA677B60)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCStateTreeManager_TypeDefinitionIndex = 70175;

	class NPCStateTreeManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Int32* StaticGet_MaxStateTreeNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCStateTreeManager_TypeDefinitionIndex)->GetStaticField(0xF4A0);
		}
		// static const ::System::Int32 MaxInstanceNum = 0x80; // 0x0
		::UnrealTypes::ManagedStructListJobWrapper_1<::StateTreeCore::StateTreeInstanceData>* _instanceData; // 0x18
		::UnrealTypes::ManagedStructListJobWrapper_1<::StateTreeCore::StateTree>* StateTrees; // 0x20
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::NPCCrowd::Ability::StateTreeHandle>* _mapStateTreeAssetPathToIndex; // 0x28
		::UnrealTypes::ManagedListJobWrapper_1<::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTree>>* _stateTree; // 0x30
		::UnrealTypes::ManagedListJobWrapper_1<::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>* _contextObject; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Ability::NPCStateTreeManager* Get()
		{
			return ((::NPCCrowd::Ability::NPCStateTreeManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::NPCCrowd::Ability::StateTreeHandle LoadOrGetStateTree(::Foundation::AssetPath assetPath)
		{
			return ((::NPCCrowd::Ability::StateTreeHandle(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_LOADORGETSTATETREE_OFFSET))(this, assetPath);
		}

		::NPCCrowd::Ability::StateTreeInstanceHandle StartStateTree(::Foundation::AssetPath assetPath, ::UnrealTypes::Object* contextObject, ::System::Int32 debugInstanceID)
		{
			return ((::NPCCrowd::Ability::StateTreeInstanceHandle(*)(::PVOID, ::Foundation::AssetPath, ::UnrealTypes::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_STARTSTATETREE_OFFSET))(this, assetPath, contextObject, debugInstanceID);
		}

		::System::Void StopStateTree(::NPCCrowd::Ability::StateTreeInstanceHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::StateTreeInstanceHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_STOPSTATETREE_OFFSET))(this, handle);
		}

		::System::Void SendStateTreeEvent(::NPCCrowd::Ability::StateTreeInstanceHandle handle, ::Foundation::Unreal::FGameplayTag eventTag)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::StateTreeInstanceHandle, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER_SENDSTATETREEEVENT_OFFSET))(this, handle, eventTag);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
