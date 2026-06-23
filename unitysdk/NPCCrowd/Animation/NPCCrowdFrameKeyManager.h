#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/NPCCrowd/Animation/MontageCommand.h"
#include "unitysdk/NPCCrowd/Animation/MontageSeqFrameRawData.h"
#include "unitysdk/NPCCrowd/Animation/MontageSeqFrameTargetType.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdFrameKeyManager_HiddenPartVisibilitySnapshot.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdFrameKeyManager_SeqFrameRuntimeKey.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

class Class_3_F2DAD7F45F518868;
class NPCAvatarMeshAssetsSO_SequenceFrameHidePartMapping;
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Animation { class NPCCrowdFrameKeyManager_EntityPartHideRuntimeState; }
namespace NPCCrowd::Animation { class NPCCrowdFrameKeyManager_SeqFrameRuntimeState; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ADDENTITYRUNTIMEKEY_OFFSET UNITYSDK_OFFSET(0x10A06AD0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_APPLYENTITYHIDDENPARTS_OFFSET UNITYSDK_OFFSET(0x10A075A0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CLEANUPINVALIDENTITIES_OFFSET UNITYSDK_OFFSET(0x10A032B0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CLEARALLRUNTIMESTATES_OFFSET UNITYSDK_OFFSET(0x10A03580)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CONTAINSPARTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x10A079B0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ENSUREAUTOTICKSTATE_OFFSET UNITYSDK_OFFSET(0x10A06CE0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_FINDACCESSORY_OFFSET UNITYSDK_OFFSET(0x10A03D60)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_FINDPARTINFOBYTYPE_OFFSET UNITYSDK_OFFSET(0x10A074D0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_FINDPARTINFO_OFFSET UNITYSDK_OFFSET(0x10A03E10)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_GETSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x10A07320)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x10A03030)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEENTEREVENT_OFFSET UNITYSDK_OFFSET(0x10A058C0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEEXITEVENT_OFFSET UNITYSDK_OFFSET(0x10A05F30)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEMONTAGESEQUENCEKEYCOMMANDSTATIC_OFFSET UNITYSDK_OFFSET(0x10A04A00)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEMONTAGESEQUENCEKEYCOMMAND_OFFSET UNITYSDK_OFFSET(0x10A04AD0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLETICKEVENT_OFFSET UNITYSDK_OFFSET(0x10A05C70)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HASTARGETSEQUENCEFRAMECONFIG_OFFSET UNITYSDK_OFFSET(0x10A039B0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x10A031A0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10A034D0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x10A03250)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RELEASEENTITYLAYERRUNTIMESTATES_OFFSET UNITYSDK_OFFSET(0x10A054F0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RELEASEENTITYRUNTIMESTATES_OFFSET UNITYSDK_OFFSET(0x10A04E10)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_REMOVEENTITYRUNTIMEKEY_OFFSET UNITYSDK_OFFSET(0x10A06D40)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RESOLVETARGETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x10A041A0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RESTOREALLHIDDENPARTS_OFFSET UNITYSDK_OFFSET(0x10A07140)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RESTOREENTITYHIDDENPARTS_OFFSET UNITYSDK_OFFSET(0x10A06EC0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_STOPANDREMOVERUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x10A06840)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYENSURERUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x10A06090)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYGETNPCCOMPONENT_OFFSET UNITYSDK_OFFSET(0x10A03B30)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYGETSEQUENCEFRAMECLIPDATA_OFFSET UNITYSDK_OFFSET(0x10A05070)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYPLAYTARGETSEQUENCEFRAME_OFFSET UNITYSDK_OFFSET(0x10A03EE0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYSTOPTARGETSEQUENCEFRAME_OFFSET UNITYSDK_OFFSET(0x10A04780)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_UPDATESEQUENCEPARTVISIBILITY_OFFSET UNITYSDK_OFFSET(0x10A05750)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A07BE0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10A07A30)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x10A07C40)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10A07CD0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x10A07D60)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdFrameKeyManager_TypeDefinitionIndex = 87207;

	class NPCCrowdFrameKeyManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Action_1<::NPCCrowd::Animation::MontageCommand>** StaticGet_SequenceKeyCommandListener()
		{
			return (::System::Action_1<::NPCCrowd::Animation::MontageCommand>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdFrameKeyManager_TypeDefinitionIndex)->GetStaticField(0x437A0);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _entityRemoveBuffer; // 0x18
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState*>* _runtimeStateMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_EntityPartHideRuntimeState*>* _entityPartHideStateMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey>*>* _entityRuntimeKeyMap; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Animation::NPCCrowdFrameKeyManager* Get()
		{
			return ((::NPCCrowd::Animation::NPCCrowdFrameKeyManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_INIT_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean HasTargetSequenceFrameConfig(::System::UInt32 entityId, ::NPCCrowd::Animation::MontageSeqFrameTargetType targetType, ::System::Int32 targetId, ::System::String*& textureSheetKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::MontageSeqFrameTargetType, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HASTARGETSEQUENCEFRAMECONFIG_OFFSET))(this, entityId, targetType, targetId, textureSheetKey);
		}

		::System::Boolean TryPlayTargetSequenceFrame(::System::UInt32 entityId, ::NPCCrowd::Animation::MontageSeqFrameTargetType targetType, ::System::Int32 targetId, ::System::String* textureSheetKey, ::System::Boolean loop, ::System::Single startTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::MontageSeqFrameTargetType, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYPLAYTARGETSEQUENCEFRAME_OFFSET))(this, entityId, targetType, targetId, textureSheetKey, loop, startTime);
		}

		::System::Boolean TryStopTargetSequenceFrame(::System::UInt32 entityId, ::NPCCrowd::Animation::MontageSeqFrameTargetType targetType, ::System::Int32 targetId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::MontageSeqFrameTargetType, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYSTOPTARGETSEQUENCEFRAME_OFFSET))(this, entityId, targetType, targetId);
		}

		static ::System::Void HandleMontageSequenceKeyCommandStatic(::NPCCrowd::Animation::MontageCommand command)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::MontageCommand))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEMONTAGESEQUENCEKEYCOMMANDSTATIC_OFFSET))(command);
		}

		::System::Void HandleMontageSequenceKeyCommand(::NPCCrowd::Animation::MontageCommand command)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::MontageCommand))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEMONTAGESEQUENCEKEYCOMMAND_OFFSET))(this, command);
		}

		::System::Boolean TryGetSequenceFrameClipData(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Animation::MontageCommand command, ::NPCCrowd::Animation::MontageSeqFrameRawData& clipData, ::System::Single& montagePlaySpeed)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::MontageCommand, ::NPCCrowd::Animation::MontageSeqFrameRawData&, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYGETSEQUENCEFRAMECLIPDATA_OFFSET))(this, npcComp, command, clipData, montagePlaySpeed);
		}

		::System::Void HandleEnterEvent(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey, ::System::Int32 layerIndex, ::NPCCrowd::Animation::MontageSeqFrameRawData clipData, ::System::Single montagePlaySpeed)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::System::Int32, ::NPCCrowd::Animation::MontageSeqFrameRawData, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEENTEREVENT_OFFSET))(this, npcComp, runtimeKey, layerIndex, clipData, montagePlaySpeed);
		}

		::System::Void HandleTickEvent(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey, ::System::Int32 layerIndex, ::NPCCrowd::Animation::MontageSeqFrameRawData clipData, ::System::Single montagePlaySpeed)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::System::Int32, ::NPCCrowd::Animation::MontageSeqFrameRawData, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLETICKEVENT_OFFSET))(this, npcComp, runtimeKey, layerIndex, clipData, montagePlaySpeed);
		}

		::System::Void HandleExitEvent(::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEEXITEVENT_OFFSET))(this, runtimeKey, layerIndex);
		}

		::System::Boolean TryEnsureRuntimeState(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey, ::NPCCrowd::Animation::MontageSeqFrameRawData clipData, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState*& runtimeState, ::UnityEngine::GameObject*& targetGo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::NPCCrowd::Animation::MontageSeqFrameRawData, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState*&, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYENSURERUNTIMESTATE_OFFSET))(this, npcComp, runtimeKey, clipData, runtimeState, targetGo);
		}

		static ::System::Void EnsureAutoTickState(::UnityEngine::GameObject* targetGo, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState* runtimeState, ::System::Boolean enableAutoTick)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ENSUREAUTOTICKSTATE_OFFSET))(targetGo, runtimeState, enableAutoTick);
		}

		::System::Void AddEntityRuntimeKey(::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ADDENTITYRUNTIMEKEY_OFFSET))(this, runtimeKey);
		}

		::System::Void RemoveEntityRuntimeKey(::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_REMOVEENTITYRUNTIMEKEY_OFFSET))(this, runtimeKey);
		}

		::System::Void StopAndRemoveRuntimeState(::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState* runtimeState)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_STOPANDREMOVERUNTIMESTATE_OFFSET))(this, runtimeKey, runtimeState);
		}

		::System::Void ReleaseEntityLayerRuntimeStates(::System::UInt32 entityId, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RELEASEENTITYLAYERRUNTIMESTATES_OFFSET))(this, entityId, layerIndex);
		}

		::System::Void ReleaseEntityRuntimeStates(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RELEASEENTITYRUNTIMESTATES_OFFSET))(this, entityId);
		}

		::System::Void ClearAllRuntimeStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CLEARALLRUNTIMESTATES_OFFSET))(this);
		}

		::System::Void CleanupInvalidEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CLEANUPINVALIDENTITIES_OFFSET))(this);
		}

		static ::System::Single GetScaledDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_GETSCALEDDELTATIME_OFFSET))();
		}

		static ::NPCCrowd::Accessories::NPCAccessory* FindAccessory(::Class_3_F2DAD7F45F518868* npcComp, ::System::Int32 accessoryId)
		{
			return ((::NPCCrowd::Accessories::NPCAccessory*(*)(::Class_3_F2DAD7F45F518868*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_FINDACCESSORY_OFFSET))(npcComp, accessoryId);
		}

		static ::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* FindPartInfo(::Class_3_F2DAD7F45F518868* npcComp, ::System::Int32 partId)
		{
			return ((::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*(*)(::Class_3_F2DAD7F45F518868*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_FINDPARTINFO_OFFSET))(npcComp, partId);
		}

		static ::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* FindPartInfoByType(::Class_3_F2DAD7F45F518868* npcComp, ::ENPCAvatarBodyPart partType)
		{
			return ((::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*(*)(::Class_3_F2DAD7F45F518868*, ::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_FINDPARTINFOBYTYPE_OFFSET))(npcComp, partType);
		}

		::System::Void UpdateSequencePartVisibility(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_UPDATESEQUENCEPARTVISIBILITY_OFFSET))(this, npcComp);
		}

		::System::Void ApplyEntityHiddenParts(::Class_3_F2DAD7F45F518868* npcComp, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_SequenceFrameHidePartMapping*>* hideMappings)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_SequenceFrameHidePartMapping*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_APPLYENTITYHIDDENPARTS_OFFSET))(this, npcComp, hideMappings);
		}

		::System::Void RestoreEntityHiddenParts(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RESTOREENTITYHIDDENPARTS_OFFSET))(this, entityId);
		}

		::System::Void RestoreAllHiddenParts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RESTOREALLHIDDENPARTS_OFFSET))(this);
		}

		static ::System::Boolean ContainsPartSnapshot(::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdFrameKeyManager_HiddenPartVisibilitySnapshot>* snapshots, ::ENPCAvatarBodyPart partType)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdFrameKeyManager_HiddenPartVisibilitySnapshot>*, ::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CONTAINSPARTSNAPSHOT_OFFSET))(snapshots, partType);
		}

		static ::UnityEngine::GameObject* ResolveTargetGameObject(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Animation::MontageSeqFrameTargetType targetType, ::System::Int32 targetId)
		{
			return ((::UnityEngine::GameObject*(*)(::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::MontageSeqFrameTargetType, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RESOLVETARGETGAMEOBJECT_OFFSET))(npcComp, targetType, targetId);
		}

		static ::System::Boolean TryGetNpcComponent(::System::UInt32 entityId, ::Class_3_F2DAD7F45F518868*& npcComp)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYGETNPCCOMPONENT_OFFSET))(entityId, npcComp);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}
	};
}
