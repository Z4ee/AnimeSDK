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
namespace NPCCrowd::Animation { class NPCCrowdFrameKeyManager_PendingSeqFramePlayRequest; }
namespace NPCCrowd::Animation { class NPCCrowdFrameKeyManager_SeqFrameRuntimeState; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ADDENTITYRUNTIMEKEY_OFFSET UNITYSDK_OFFSET(0x157BBA50)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_APPLYENTITYHIDDENPARTS_OFFSET UNITYSDK_OFFSET(0x157BD160)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CANCELPENDINGSEQUENCEFRAMEPLAYS_OFFSET UNITYSDK_OFFSET(0x157BC5F0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CANCELPENDINGSEQUENCEFRAMEPLAY_OFFSET UNITYSDK_OFFSET(0x157B9570)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CLEANUPINVALIDENTITIES_OFFSET UNITYSDK_OFFSET(0x157B7A30)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CLEARALLRUNTIMESTATES_OFFSET UNITYSDK_OFFSET(0x157B83C0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CONTAINSPARTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x157BD560)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ENQUEUEPENDINGSEQUENCEFRAMEPLAY_OFFSET UNITYSDK_OFFSET(0x157BBCC0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ENSUREAUTOTICKSTATE_OFFSET UNITYSDK_OFFSET(0x157BC890)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_FINDACCESSORY_OFFSET UNITYSDK_OFFSET(0x157B8C30)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_FINDPARTINFOBYTYPE_OFFSET UNITYSDK_OFFSET(0x157BD090)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_FINDPARTINFO_OFFSET UNITYSDK_OFFSET(0x157B8CE0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_GETSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x157BCEE0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x157B77B0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEENTEREVENT_OFFSET UNITYSDK_OFFSET(0x157BAAA0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEEXITEVENT_OFFSET UNITYSDK_OFFSET(0x157BAEC0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEMONTAGESEQUENCEKEYCOMMANDSTATIC_OFFSET UNITYSDK_OFFSET(0x157B9BD0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLEMONTAGESEQUENCEKEYCOMMAND_OFFSET UNITYSDK_OFFSET(0x157B9CA0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HANDLETICKEVENT_OFFSET UNITYSDK_OFFSET(0x157BACB0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_HASTARGETSEQUENCEFRAMECONFIG_OFFSET UNITYSDK_OFFSET(0x157B8860)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x157B7920)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ISLODPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x157BBC60)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x157B8310)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x157B79D0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RELEASEENTITYLAYERRUNTIMESTATES_OFFSET UNITYSDK_OFFSET(0x157BA6C0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RELEASEENTITYRUNTIMESTATES_OFFSET UNITYSDK_OFFSET(0x157B9FD0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_REMOVEENTITYRUNTIMEKEY_OFFSET UNITYSDK_OFFSET(0x157BC8F0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RESOLVETARGETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x157B95F0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RESTOREALLHIDDENPARTS_OFFSET UNITYSDK_OFFSET(0x157BCD00)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_RESTOREENTITYHIDDENPARTS_OFFSET UNITYSDK_OFFSET(0x157BCA70)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_STOPANDREMOVERUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x157BB720)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TICKPENDINGSEQUENCEFRAMEPLAYS_OFFSET UNITYSDK_OFFSET(0x157B7C50)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYCREATEORDELAYSEQUENCEFRAMEPLAYER_1_OFFSET UNITYSDK_OFFSET(0x157BB2B0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYCREATEORDELAYSEQUENCEFRAMEPLAYER_OFFSET UNITYSDK_OFFSET(0x157B8EF0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYCREATEORREFRESHSEQUENCEFRAMEPLAYERNOW_OFFSET UNITYSDK_OFFSET(0x157BC190)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYCREATESEQUENCEFRAMEPLAYERNOW_OFFSET UNITYSDK_OFFSET(0x157BBF30)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYENSURERUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x157BB0B0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYGETNPCCOMPONENT_OFFSET UNITYSDK_OFFSET(0x157B89F0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYGETSEQUENCEFRAMECLIPDATA_OFFSET UNITYSDK_OFFSET(0x157BA250)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYPLAYTARGETSEQUENCEFRAME_OFFSET UNITYSDK_OFFSET(0x157B8DB0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYSTOPTARGETSEQUENCEFRAME_OFFSET UNITYSDK_OFFSET(0x157B9260)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_UPDATESEQUENCEPARTVISIBILITY_OFFSET UNITYSDK_OFFSET(0x157BA930)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x157BD820)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x157BD5E0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x157BD880)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x157BD910)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x157BD9A0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdFrameKeyManager_TypeDefinitionIndex = 56698;

	class NPCCrowdFrameKeyManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Action_1<::NPCCrowd::Animation::MontageCommand>** StaticGet_SequenceKeyCommandListener()
		{
			return (::System::Action_1<::NPCCrowd::Animation::MontageCommand>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdFrameKeyManager_TypeDefinitionIndex)->GetStaticField(0x47650);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey>* _pendingSeqFramePlayRemoveBuffer; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey>*>* _entityRuntimeKeyMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_PendingSeqFramePlayRequest*>* _pendingSeqFramePlayMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_EntityPartHideRuntimeState*>* _entityPartHideStateMap; // 0x30
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState*>* _runtimeStateMap; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _entityRemoveBuffer; // 0x40

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

		::System::Boolean TryEnsureRuntimeState(::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState*& runtimeState)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYENSURERUNTIMESTATE_OFFSET))(this, runtimeKey, runtimeState);
		}

		::System::Boolean TryCreateOrDelaySequenceFramePlayer(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey, ::System::String* textureSheetKey, ::System::Single playStartTime, ::System::Single playbackSpeed)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYCREATEORDELAYSEQUENCEFRAMEPLAYER_OFFSET))(this, npcComp, runtimeKey, textureSheetKey, playStartTime, playbackSpeed);
		}

		::System::Boolean TryCreateOrDelaySequenceFramePlayer_1(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState* runtimeState, ::NPCCrowd::Animation::MontageSeqFrameRawData clipData, ::System::Single playbackSpeed, ::System::Int32 activeLayer)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState*, ::NPCCrowd::Animation::MontageSeqFrameRawData, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYCREATEORDELAYSEQUENCEFRAMEPLAYER_1_OFFSET))(this, npcComp, runtimeKey, runtimeState, clipData, playbackSpeed, activeLayer);
		}

		::System::Boolean TryCreateOrRefreshSequenceFramePlayerNow(::UnityEngine::GameObject* targetGo, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState* runtimeState, ::System::String* textureSheetKey, ::System::Single playStartTime, ::System::Boolean loop, ::System::Single playbackSpeed)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeState*, ::System::String*, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYCREATEORREFRESHSEQUENCEFRAMEPLAYERNOW_OFFSET))(this, targetGo, runtimeState, textureSheetKey, playStartTime, loop, playbackSpeed);
		}

		::System::Boolean TryCreateSequenceFramePlayerNow(::UnityEngine::GameObject* targetGo, ::System::String* textureSheetKey, ::System::Single playStartTime, ::System::Single playbackSpeed)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TRYCREATESEQUENCEFRAMEPLAYERNOW_OFFSET))(this, targetGo, textureSheetKey, playStartTime, playbackSpeed);
		}

		static ::System::Boolean IsLodPreloadFinished(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Boolean(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ISLODPRELOADFINISHED_OFFSET))(npcComp);
		}

		::System::Void EnqueuePendingSequenceFramePlay(::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey, ::System::String* textureSheetKey, ::System::Single playStartTime, ::System::Single playbackSpeed, ::System::Int32 activeLayer, ::System::Boolean trackRuntimeState, ::System::Boolean loop)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey, ::System::String*, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_ENQUEUEPENDINGSEQUENCEFRAMEPLAY_OFFSET))(this, runtimeKey, textureSheetKey, playStartTime, playbackSpeed, activeLayer, trackRuntimeState, loop);
		}

		::System::Boolean CancelPendingSequenceFramePlay(::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CANCELPENDINGSEQUENCEFRAMEPLAY_OFFSET))(this, runtimeKey);
		}

		::System::Void CancelPendingSequenceFramePlays(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_CANCELPENDINGSEQUENCEFRAMEPLAYS_OFFSET))(this, entityId);
		}

		::System::Void TickPendingSequenceFramePlays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_TICKPENDINGSEQUENCEFRAMEPLAYS_OFFSET))(this);
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
