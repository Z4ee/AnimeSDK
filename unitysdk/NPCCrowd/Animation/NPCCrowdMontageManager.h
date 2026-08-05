#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Ability/EMontageEndBehavior.h"
#include "unitysdk/NPCCrowd/Ability/EMontagePriorityLayer.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageLayerFragment.h"
#include "unitysdk/NPCCrowd/Animation/ClipSequenceMontageData.h"
#include "unitysdk/NPCCrowd/Animation/EMontageFallbackSource.h"
#include "unitysdk/NPCCrowd/Animation/MontageClipDataIndex.h"
#include "unitysdk/NPCCrowd/Animation/MontageClipType.h"
#include "unitysdk/NPCCrowd/Animation/MontageCommand.h"
#include "unitysdk/NPCCrowd/Animation/MontageData.h"
#include "unitysdk/NPCCrowd/Animation/MontageFallbackState.h"
#include "unitysdk/NPCCrowd/Animation/MontageLayerClipData.h"
#include "unitysdk/NPCCrowd/Animation/MontageRawData.h"
#include "unitysdk/NPCCrowd/Animation/MontageSeqFrameRawData.h"
#include "unitysdk/NPCCrowd/Animation/MontageTickData.h"
#include "unitysdk/NPCCrowd/Animation/MontageTickLayerData.h"
#include "unitysdk/NPCCrowd/Animation/MontageTimeEventType.h"
#include "unitysdk/NPCCrowd/Animation/MontageTrackTypeFlags.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdMontageManager_MontageLayerMetaCache.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdMontageManager_MontageSourceInfo.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdMontageManager_SequenceLayerClipState.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdMontageManager_SequenceLayerSourceData.h"
#include "unitysdk/NPCCrowd/Animation/RuntimeClipMontageKey.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace NPCCrowd::Animation { class NPCCrowdMontageManager_SequenceMontageCommandState; }
namespace NPCCrowd::Animation { class NPCCrowdMontageManager_SequenceTrackedMontageData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CACHEMONTAGELAYERMETA_OFFSET UNITYSDK_OFFSET(0x11293500)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CHECKGENDERSIZE_OFFSET UNITYSDK_OFFSET(0x11294F90)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CLEARALLSEQUENCECOMMANDSTATES_OFFSET UNITYSDK_OFFSET(0x1129DC00)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CLEARMONTAGEFALLBACKS_OFFSET UNITYSDK_OFFSET(0x11292F00)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CLEARMONTAGELAYERDATA_OFFSET UNITYSDK_OFFSET(0x11296FC0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_COLLECTSEQUENCEFRAMECOMMANDSBYREGISTEREDENTITIES_OFFSET UNITYSDK_OFFSET(0x1129DEB0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_COLLECTSEQUENCEFRAMECOMMANDS_OFFSET UNITYSDK_OFFSET(0x11292360)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CONVERTLOOPTOENDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1129DBC0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CREATECOMMANDEVENTSWITCH_OFFSET UNITYSDK_OFFSET(0x1129F960)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_DISABLEFALLBACK_OFFSET UNITYSDK_OFFSET(0x1129CEA0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_DISPATCHMONTAGECOMMANDS_OFFSET UNITYSDK_OFFSET(0x112923D0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_EMITALLLAYEREXITCOMMANDS_OFFSET UNITYSDK_OFFSET(0x1129F880)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_EMITSEQUENCECOMMAND_OFFSET UNITYSDK_OFFSET(0x1129F230)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ENABLEFALLBACK_OFFSET UNITYSDK_OFFSET(0x1129C1E0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ENQUEUEMONTAGECOMMAND_OFFSET UNITYSDK_OFFSET(0x11291CF0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ENSURELAYERSTATECOUNT_OFFSET UNITYSDK_OFFSET(0x1129EFB0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETANIMTRACKLAYERMASK_OFFSET UNITYSDK_OFFSET(0x11294160)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETHIGHESTPRIORITYLAYERFROMMASK_OFFSET UNITYSDK_OFFSET(0x11297020)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETMONTAGELENGTH_OFFSET UNITYSDK_OFFSET(0x11293F80)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETMONTAGETRACKTYPEMASK_OFFSET UNITYSDK_OFFSET(0x11294030)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETSEQUENCETRACKLAYERMASK_OFFSET UNITYSDK_OFFSET(0x11294290)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETSOURCELAYERMASK_OFFSET UNITYSDK_OFFSET(0x11297100)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETTRACKTYPEMASK_OFFSET UNITYSDK_OFFSET(0x11297150)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x11291B20)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_HASANYPLAYFLAG_OFFSET UNITYSDK_OFFSET(0x112947E0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_HASFALLBACK_OFFSET UNITYSDK_OFFSET(0x1129D750)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_HASSEQUENCEFRAMETRACKDATA_1_OFFSET UNITYSDK_OFFSET(0x112974D0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_HASSEQUENCEFRAMETRACKDATA_OFFSET UNITYSDK_OFFSET(0x11297470)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ISVALIDFALLBACKLAYER_OFFSET UNITYSDK_OFFSET(0x1129BB50)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x112927C0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_MAKEMONTAGEFALLBACKKEY_OFFSET UNITYSDK_OFFSET(0x1129BCA0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_NORMALIZEENDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1129B2A0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11292A50)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x1129D9B0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x11292990)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYFALLBACKIFALLOWED_OFFSET UNITYSDK_OFFSET(0x1129C520)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1129B300)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGERAW_OFFSET UNITYSDK_OFFSET(0x1129AFA0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_1_OFFSET UNITYSDK_OFFSET(0x1129A110)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_2_OFFSET UNITYSDK_OFFSET(0x1129A3A0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_3_OFFSET UNITYSDK_OFFSET(0x1129A5B0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_OFFSET UNITYSDK_OFFSET(0x112996E0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYOVERLAY_OFFSET UNITYSDK_OFFSET(0x112997E0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x11291CA0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x11292240)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PROCESSSEQUENCECOMMANDSFORENTITY_OFFSET UNITYSDK_OFFSET(0x1129E3C0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REBUILDMONTAGECOVERAGEONPLAYFLAG_OFFSET UNITYSDK_OFFSET(0x11295150)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCLIPSEQUENCEMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x11298F10)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCOMMANDLISTENER_OFFSET UNITYSDK_OFFSET(0x11291DD0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCONFIG_OFFSET UNITYSDK_OFFSET(0x11293050)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCURRENTLAYERASFALLBACK_OFFSET UNITYSDK_OFFSET(0x1129BCF0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERFALLBACK_OFFSET UNITYSDK_OFFSET(0x1129B770)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMECLIPMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x11298510)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMELAYERCLIPMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x11298990)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMEMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x11298280)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERSEQUENCECOMMANDENTITY_1_OFFSET UNITYSDK_OFFSET(0x112975A0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERSEQUENCECOMMANDENTITY_2_OFFSET UNITYSDK_OFFSET(0x112979F0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERSEQUENCECOMMANDENTITY_OFFSET UNITYSDK_OFFSET(0x11297540)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_RELEASESEQUENCECOMMANDSTATE_OFFSET UNITYSDK_OFFSET(0x1129F740)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_RESETLAYERCLIPSTATE_OFFSET UNITYSDK_OFFSET(0x1129F4C0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SCANMONTAGESOURCES_OFFSET UNITYSDK_OFFSET(0x11294A70)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SHOULDENQUEUEMONTAGECOMMAND_OFFSET UNITYSDK_OFFSET(0x11292820)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPALLMONTAGE_OFFSET UNITYSDK_OFFSET(0x1129AE40)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPALLOVERLAYANDRESTOREFALLBACK_OFFSET UNITYSDK_OFFSET(0x1129AEA0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPLAYERWITHOUTRESTORE_OFFSET UNITYSDK_OFFSET(0x1129D240)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPMONTAGERAW_OFFSET UNITYSDK_OFFSET(0x1129B4A0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPMONTAGE_1_OFFSET UNITYSDK_OFFSET(0x1129ADA0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPMONTAGE_OFFSET UNITYSDK_OFFSET(0x1129A6F0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPOVERLAYANDRESTOREFALLBACK_OFFSET UNITYSDK_OFFSET(0x1129A760)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SYNCEXTERNALSTATENOLOCK_OFFSET UNITYSDK_OFFSET(0x1129D190)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SYNCSEQUENCECOMMANDREGISTRATION_1_OFFSET UNITYSDK_OFFSET(0x11298220)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SYNCSEQUENCECOMMANDREGISTRATION_OFFSET UNITYSDK_OFFSET(0x112981A0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETANIMTRACKLAYERDATA_OFFSET UNITYSDK_OFFSET(0x112943C0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETDATA_OFFSET UNITYSDK_OFFSET(0x11293E60)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETLAYERTRACKBYMONTAGEKEY_OFFSET UNITYSDK_OFFSET(0x1129F510)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETLAYERTRACK_OFFSET UNITYSDK_OFFSET(0x1129F690)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETNPCCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1129E180)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETSEQUENCEFRAMERAWDATA_OFFSET UNITYSDK_OFFSET(0x112972F0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETSEQUENCETRACKLAYERDATA_OFFSET UNITYSDK_OFFSET(0x112945D0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYRESOLVELAYERCLIPSTATE_OFFSET UNITYSDK_OFFSET(0x1129F060)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYRESOLVESEQUENCETRACKTIME_OFFSET UNITYSDK_OFFSET(0x11296E60)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_UNREGISTERCOMMANDLISTENER_OFFSET UNITYSDK_OFFSET(0x11292070)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_UNREGISTERSEQUENCECOMMANDENTITYINTERNAL_OFFSET UNITYSDK_OFFSET(0x11298120)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_UNREGISTERSEQUENCECOMMANDENTITY_OFFSET UNITYSDK_OFFSET(0x11297950)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x112A0100)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1129FA40)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x112A0400)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x112A04A0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x112A0530)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x112A05C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageManager_TypeDefinitionIndex = 66970;

	class NPCCrowdMontageManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageCommand>** StaticGet_DispatchMontageCommandBuffer()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageCommand>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdMontageManager_TypeDefinitionIndex)->GetStaticField(0x50210);
		}
		static ::System::String** StaticGet_TEMPLATE_ASSET_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdMontageManager_TypeDefinitionIndex)->GetStaticField(0x50218);
		}
		static ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::MontageClipType, ::System::Collections::Generic::List_1<::System::Action_1<::NPCCrowd::Animation::MontageCommand>*>*>** StaticGet_MontageCommandListeners()
		{
			return (::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::MontageClipType, ::System::Collections::Generic::List_1<::System::Action_1<::NPCCrowd::Animation::MontageCommand>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdMontageManager_TypeDefinitionIndex)->GetStaticField(0x50220);
		}
		static ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageCommand>** StaticGet_PendingMontageCommands()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageCommand>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdMontageManager_TypeDefinitionIndex)->GetStaticField(0x50228);
		}
		static ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::MontageClipType, ::Il2CppArray<::System::Boolean>*>** StaticGet_MontageCommandEmitConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::MontageClipType, ::Il2CppArray<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdMontageManager_TypeDefinitionIndex)->GetStaticField(0x50230);
		}
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_AssetRequests()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdMontageManager_TypeDefinitionIndex)->GetStaticField(0x50238);
		}
		// static const ::System::Int32 InValidIndex = 0xFFFFFFFF; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Animation::MontageData>* RuntimeMontageData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* montageLength; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceMontageCommandState*>* _sequenceCommandStateMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData*>* _sequenceTrackedMontageMap; // 0x30
		::NPCCrowd::NPCIDGeneratorInt* _idGen; // 0x38
		::System::Collections::Generic::HashSet_1<::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*>* registedAsset; // 0x40
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::MontageLayerClipData, ::System::Int32>* RuntimeLayerClipMontageDictionary; // 0x48
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::RuntimeClipMontageKey, ::System::Int32>* RuntimeClipMontageDictionary; // 0x50
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::ClipSequenceMontageData, ::System::Int32>* RuntimeSequenceDataDictionary; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>>* MontageSizeData; // 0x60
		::System::Object* _montageFallbackLock; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _sequenceStateRemoveBuffer; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Animation::NPCCrowdMontageManager_MontageLayerMetaCache>* _montageLayerMetaCache; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::NPCCrowd::Animation::MontageFallbackState>* _montageFallbackStates; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::MontageData>* MontageTemplateData; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Animation::NPCCrowdMontageManager* Get()
		{
			return ((::NPCCrowd::Animation::NPCCrowdMontageManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GET_OFFSET))();
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		static ::System::Void EnqueueMontageCommand(::NPCCrowd::Animation::MontageCommand command)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::MontageCommand))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ENQUEUEMONTAGECOMMAND_OFFSET))(command);
		}

		static ::System::Void RegisterCommandListener(::NPCCrowd::Animation::MontageClipType clipType, ::System::Action_1<::NPCCrowd::Animation::MontageCommand>* listener)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::MontageClipType, ::System::Action_1<::NPCCrowd::Animation::MontageCommand>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCOMMANDLISTENER_OFFSET))(clipType, listener);
		}

		static ::System::Void UnregisterCommandListener(::NPCCrowd::Animation::MontageClipType clipType, ::System::Action_1<::NPCCrowd::Animation::MontageCommand>* listener)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::MontageClipType, ::System::Action_1<::NPCCrowd::Animation::MontageCommand>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_UNREGISTERCOMMANDLISTENER_OFFSET))(clipType, listener);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Boolean ShouldEnqueueMontageCommand(::NPCCrowd::Animation::MontageClipType clipType, ::NPCCrowd::Animation::MontageTimeEventType timeEvent)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::MontageClipType, ::NPCCrowd::Animation::MontageTimeEventType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SHOULDENQUEUEMONTAGECOMMAND_OFFSET))(clipType, timeEvent);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterConfig(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCONFIG_OFFSET))(this, asset);
		}

		::System::Boolean TryGetData(::System::Int32 montageKey, ::NPCCrowd::Animation::MontageData& montages)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::MontageData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETDATA_OFFSET))(this, montageKey, montages);
		}

		::System::Boolean GetMontageLength(::System::Int32 montageKey, ::System::Single& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETMONTAGELENGTH_OFFSET))(this, montageKey, length);
		}

		::NPCCrowd::Animation::MontageTrackTypeFlags GetMontageTrackTypeMask(::System::Int32 montageKey)
		{
			return ((::NPCCrowd::Animation::MontageTrackTypeFlags(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETMONTAGETRACKTYPEMASK_OFFSET))(this, montageKey);
		}

		::System::Int32 GetAnimTrackLayerMask(::System::Int32 montageKey)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETANIMTRACKLAYERMASK_OFFSET))(this, montageKey);
		}

		::System::Int32 GetSequenceTrackLayerMask(::System::Int32 montageKey)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETSEQUENCETRACKLAYERMASK_OFFSET))(this, montageKey);
		}

		::System::Boolean TryGetAnimTrackLayerData(::System::Int32 montageKey, ::System::Int32 layerIndex, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageRawData>*& trackData, ::System::Single& totalLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageRawData>*&, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETANIMTRACKLAYERDATA_OFFSET))(this, montageKey, layerIndex, trackData, totalLength);
		}

		::System::Boolean TryGetSequenceTrackLayerData(::System::Int32 montageKey, ::System::Int32 layerIndex, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*& trackData, ::System::Single& totalLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*&, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETSEQUENCETRACKLAYERDATA_OFFSET))(this, montageKey, layerIndex, trackData, totalLength);
		}

		::System::Boolean HasAnyPlayFlag(::NPCCrowd::Ability::FNPCMontageDataFragment& montageData)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_HASANYPLAYFLAG_OFFSET))(this, montageData);
		}

		::NPCCrowd::Animation::NPCCrowdMontageManager_MontageSourceInfo ScanMontageSources(::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Boolean& addedClip)
		{
			return ((::NPCCrowd::Animation::NPCCrowdMontageManager_MontageSourceInfo(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SCANMONTAGESOURCES_OFFSET))(this, montageData, instanceConfig, addedClip);
		}

		::System::Boolean RebuildMontageCoverageOnPlayFlag(::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Animation::MontageTickLayerData& montage, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Boolean& addedClip, ::System::Boolean& changed, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData*& sequenceTrackedData)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Animation::MontageTickLayerData&, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Boolean&, ::System::Boolean&, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REBUILDMONTAGECOVERAGEONPLAYFLAG_OFFSET))(this, montageData, montage, instanceConfig, addedClip, changed, sequenceTrackedData);
		}

		::System::Boolean TryResolveSequenceTrackTime(::System::Int32 montageKey, ::System::Int32 layerIndex, ::NPCCrowd::Ability::FNPCMontageLayerFragment sourceLayerData, ::System::Single& normalizedSequenceTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::NPCCrowd::Ability::FNPCMontageLayerFragment, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYRESOLVESEQUENCETRACKTIME_OFFSET))(this, montageKey, layerIndex, sourceLayerData, normalizedSequenceTime);
		}

		static ::System::Void ClearMontageLayerData(::NPCCrowd::Animation::MontageTickData& layerData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::MontageTickData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CLEARMONTAGELAYERDATA_OFFSET))(layerData);
		}

		static ::System::Int32 GetHighestPriorityLayerFromMask(::System::Int32 mask)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETHIGHESTPRIORITYLAYERFROMMASK_OFFSET))(mask);
		}

		static ::System::Int32 GetSourceLayerMask(::System::Int32 packedLayerMask, ::System::Int32 sourcePriorityLayer)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETSOURCELAYERMASK_OFFSET))(packedLayerMask, sourcePriorityLayer);
		}

		static ::NPCCrowd::Animation::MontageTrackTypeFlags GetTrackTypeMask(::NPCCrowd::Animation::MontageData data)
		{
			return ((::NPCCrowd::Animation::MontageTrackTypeFlags(*)(::NPCCrowd::Animation::MontageData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_GETTRACKTYPEMASK_OFFSET))(data);
		}

		::System::Void CacheMontageLayerMeta(::System::Int32 montageKey, ::NPCCrowd::Animation::MontageData data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::MontageData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CACHEMONTAGELAYERMETA_OFFSET))(this, montageKey, data);
		}

		::System::Boolean TryGetSequenceFrameRawData(::System::Int32 montageKey, ::NPCCrowd::Animation::MontageClipDataIndex clipDataIndex, ::NPCCrowd::Animation::MontageSeqFrameRawData& rawData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::MontageClipDataIndex, ::NPCCrowd::Animation::MontageSeqFrameRawData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETSEQUENCEFRAMERAWDATA_OFFSET))(this, montageKey, clipDataIndex, rawData);
		}

		::System::Boolean HasSequenceFrameTrackData(::System::Int32 montageKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_HASSEQUENCEFRAMETRACKDATA_OFFSET))(this, montageKey);
		}

		::System::Boolean HasSequenceFrameTrackData_1(::System::Int32 montageKey, ::System::Int32 layerIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_HASSEQUENCEFRAMETRACKDATA_1_OFFSET))(this, montageKey, layerIndex);
		}

		::System::Void RegisterSequenceCommandEntity(::System::UInt32 entityId, ::System::Int32 montageKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERSEQUENCECOMMANDENTITY_OFFSET))(this, entityId, montageKey);
		}

		::System::Void RegisterSequenceCommandEntity_1(::System::UInt32 entityId, ::System::Int32 montageKey, ::System::Single montageTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERSEQUENCECOMMANDENTITY_1_OFFSET))(this, entityId, montageKey, montageTime);
		}

		::System::Void RegisterSequenceCommandEntity_2(::System::UInt32 entityId, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData* trackedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERSEQUENCECOMMANDENTITY_2_OFFSET))(this, entityId, trackedData);
		}

		::System::Void UnregisterSequenceCommandEntity(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_UNREGISTERSEQUENCECOMMANDENTITY_OFFSET))(this, entityId);
		}

		::System::Void SyncSequenceCommandRegistration(::System::UInt32 entityId, ::System::Int32 montageKey, ::System::Single montageTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SYNCSEQUENCECOMMANDREGISTRATION_OFFSET))(this, entityId, montageKey, montageTime);
		}

		::System::Void SyncSequenceCommandRegistration_1(::System::UInt32 entityId, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData* trackedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SYNCSEQUENCECOMMANDREGISTRATION_1_OFFSET))(this, entityId, trackedData);
		}

		::System::Boolean RegisterRuntimeMontageData(::NPCCrowd::Animation::MontageData montages, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::MontageData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMEMONTAGEDATA_OFFSET))(this, montages, instanceConfig, handler);
		}

		::System::Boolean RegisterRuntimeClipMontageData(::System::Int32 clipID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32& handler, ::System::Int32 layer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMECLIPMONTAGEDATA_OFFSET))(this, clipID, instanceConfig, handler, layer);
		}

		::System::Boolean RegisterRuntimeLayerClipMontageData(::NPCCrowd::Animation::MontageLayerClipData clipData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::MontageLayerClipData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERRUNTIMELAYERCLIPMONTAGEDATA_OFFSET))(this, clipData, instanceConfig, handler);
		}

		::System::Boolean RegisterClipSequenceMontageData(::NPCCrowd::Animation::ClipSequenceMontageData sequenceData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::ClipSequenceMontageData, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCLIPSEQUENCEMONTAGEDATA_OFFSET))(this, sequenceData, instanceConfig, handler);
		}

		::System::Boolean CheckGenderSize(::System::Int32 montageKey, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CHECKGENDERSIZE_OFFSET))(this, montageKey, instanceConfig);
		}

		::System::Boolean PlayMontage(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer, ::System::Int32 handler, ::System::Single deltaTime, ::NPCCrowd::Ability::EMontageEndBehavior endBehavior, ::System::Single fadeinTime, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer, ::System::Int32, ::System::Single, ::NPCCrowd::Ability::EMontageEndBehavior, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_OFFSET))(this, entityId, montageData, layer, handler, deltaTime, endBehavior, fadeinTime, speed);
		}

		::System::Boolean PlayMontage_1(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer, ::System::Int32 handler, ::System::Single deltaTime, ::System::Boolean isLoop, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_1_OFFSET))(this, entityId, montageData, layer, handler, deltaTime, isLoop, speed);
		}

		::System::Boolean PlayMontage_2(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer, ::System::Int32 handler, ::System::Single deltaTime, ::NPCCrowd::Ability::EMontageEndBehavior endBehavior, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer, ::System::Int32, ::System::Single, ::NPCCrowd::Ability::EMontageEndBehavior, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_2_OFFSET))(this, entityId, montageData, layer, handler, deltaTime, endBehavior, speed);
		}

		::System::Boolean PlayMontage_3(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::System::Int32 handler, ::System::Single deltaTime, ::System::Boolean isLoop, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGE_3_OFFSET))(this, entityId, montageData, handler, deltaTime, isLoop, speed);
		}

		::System::Void StopMontage(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPMONTAGE_OFFSET))(this, entityId, montageData, layer);
		}

		::System::Void StopMontage_1(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPMONTAGE_1_OFFSET))(this, entityId, montageData);
		}

		::System::Void StopAllMontage(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPALLMONTAGE_OFFSET))(this, entityId, montageData);
		}

		::System::Boolean PlayMontageRaw(::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer, ::System::Int32 handler, ::System::Single deltaTime, ::NPCCrowd::Ability::EMontageEndBehavior endBehavior, ::System::Single fadeinTime, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer, ::System::Int32, ::System::Single, ::NPCCrowd::Ability::EMontageEndBehavior, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGERAW_OFFSET))(this, montageData, layer, handler, deltaTime, endBehavior, fadeinTime, speed);
		}

		::System::Void StopMontageRaw(::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPMONTAGERAW_OFFSET))(this, montageData, layer);
		}

		::System::Boolean PlayMontageInternal(::NPCCrowd::Ability::FNPCMontageLayerFragment& montageData, ::System::Int32 handler, ::System::Single deltaTime, ::NPCCrowd::Ability::EMontageEndBehavior endBehavior, ::System::Single fadeinTime, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::FNPCMontageLayerFragment&, ::System::Int32, ::System::Single, ::NPCCrowd::Ability::EMontageEndBehavior, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYMONTAGEINTERNAL_OFFSET))(this, montageData, handler, deltaTime, endBehavior, fadeinTime, speed);
		}

		::System::Boolean RegisterFallback(::System::UInt32 entityId, ::NPCCrowd::Ability::EMontagePriorityLayer layer, ::System::Int32 montageKey, ::NPCCrowd::Ability::EMontageEndBehavior endBehavior, ::System::Single speed, ::NPCCrowd::Animation::EMontageFallbackSource source)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::EMontagePriorityLayer, ::System::Int32, ::NPCCrowd::Ability::EMontageEndBehavior, ::System::Single, ::NPCCrowd::Animation::EMontageFallbackSource))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERFALLBACK_OFFSET))(this, entityId, layer, montageKey, endBehavior, speed, source);
		}

		::System::Boolean RegisterCurrentLayerAsFallback(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer, ::NPCCrowd::Animation::EMontageFallbackSource source)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer, ::NPCCrowd::Animation::EMontageFallbackSource))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_REGISTERCURRENTLAYERASFALLBACK_OFFSET))(this, entityId, montageData, layer, source);
		}

		::System::Boolean EnableFallback(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer, ::System::Boolean playImmediately)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ENABLEFALLBACK_OFFSET))(this, entityId, montageData, layer, playImmediately);
		}

		::System::Void DisableFallback(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer, ::System::Boolean stopCurrentLayer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_DISABLEFALLBACK_OFFSET))(this, entityId, montageData, layer, stopCurrentLayer);
		}

		::System::Boolean PlayFallbackIfAllowed(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYFALLBACKIFALLOWED_OFFSET))(this, entityId, montageData, layer);
		}

		::System::Boolean PlayOverlay(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer, ::System::Int32 montageKey, ::System::Single startTime, ::NPCCrowd::Ability::EMontageEndBehavior endBehavior, ::System::Single speed, ::System::Single fadeinTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer, ::System::Int32, ::System::Single, ::NPCCrowd::Ability::EMontageEndBehavior, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PLAYOVERLAY_OFFSET))(this, entityId, montageData, layer, montageKey, startTime, endBehavior, speed, fadeinTime);
		}

		::System::Boolean StopOverlayAndRestoreFallback(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPOVERLAYANDRESTOREFALLBACK_OFFSET))(this, entityId, montageData, layer);
		}

		::System::Void StopLayerWithoutRestore(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData, ::NPCCrowd::Ability::EMontagePriorityLayer layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&, ::NPCCrowd::Ability::EMontagePriorityLayer))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPLAYERWITHOUTRESTORE_OFFSET))(this, entityId, montageData, layer);
		}

		::System::Void StopAllOverlayAndRestoreFallback(::System::UInt32 entityId, ::NPCCrowd::Ability::FNPCMontageDataFragment& montageData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCMontageDataFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_STOPALLOVERLAYANDRESTOREFALLBACK_OFFSET))(this, entityId, montageData);
		}

		::System::Boolean HasFallback(::System::UInt32 entityId, ::NPCCrowd::Ability::EMontagePriorityLayer layer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::EMontagePriorityLayer))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_HASFALLBACK_OFFSET))(this, entityId, layer);
		}

		::System::Void OnEntityRemove(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ONENTITYREMOVE_OFFSET))(this, entityId);
		}

		::System::Void ClearMontageFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CLEARMONTAGEFALLBACKS_OFFSET))(this);
		}

		static ::System::Boolean IsValidFallbackLayer(::NPCCrowd::Ability::EMontagePriorityLayer layer)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::EMontagePriorityLayer))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ISVALIDFALLBACKLAYER_OFFSET))(layer);
		}

		static ::System::UInt64 MakeMontageFallbackKey(::System::UInt32 entityId, ::NPCCrowd::Ability::EMontagePriorityLayer layer)
		{
			return ((::System::UInt64(*)(::System::UInt32, ::NPCCrowd::Ability::EMontagePriorityLayer))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_MAKEMONTAGEFALLBACKKEY_OFFSET))(entityId, layer);
		}

		static ::NPCCrowd::Ability::EMontageEndBehavior NormalizeEndBehavior(::NPCCrowd::Ability::EMontagePriorityLayer layer, ::NPCCrowd::Ability::EMontageEndBehavior endBehavior)
		{
			return ((::NPCCrowd::Ability::EMontageEndBehavior(*)(::NPCCrowd::Ability::EMontagePriorityLayer, ::NPCCrowd::Ability::EMontageEndBehavior))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_NORMALIZEENDBEHAVIOR_OFFSET))(layer, endBehavior);
		}

		static ::System::Void SyncExternalStateNoLock(::NPCCrowd::Animation::MontageFallbackState& state, ::NPCCrowd::Ability::FNPCMontageLayerFragment layerData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::MontageFallbackState&, ::NPCCrowd::Ability::FNPCMontageLayerFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SYNCEXTERNALSTATENOLOCK_OFFSET))(state, layerData);
		}

		static ::NPCCrowd::Ability::EMontageEndBehavior ConvertLoopToEndBehavior(::System::Boolean isLoop)
		{
			return ((::NPCCrowd::Ability::EMontageEndBehavior(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CONVERTLOOPTOENDBEHAVIOR_OFFSET))(isLoop);
		}

		::System::Void CollectSequenceFrameCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_COLLECTSEQUENCEFRAMECOMMANDS_OFFSET))(this);
		}

		::System::Void CollectSequenceFrameCommandsByRegisteredEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_COLLECTSEQUENCEFRAMECOMMANDSBYREGISTEREDENTITIES_OFFSET))(this);
		}

		::System::Void ProcessSequenceCommandsForEntity(::System::UInt32 entityId, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData* trackedData, ::Class_3_F2DAD7F45F518868* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_PROCESSSEQUENCECOMMANDSFORENTITY_OFFSET))(this, entityId, trackedData, npcCmp);
		}

		::System::Boolean TryGetLayerTrackByMontageKey(::System::Int32 montageKey, ::System::Int32 layerIndex, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*& layerTrack)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETLAYERTRACKBYMONTAGEKEY_OFFSET))(this, montageKey, layerIndex, layerTrack);
		}

		::System::Boolean TryResolveLayerClipState(::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerSourceData sourceData, ::System::Int32 layerIndex, ::System::Single montageTime, ::System::Boolean& hasCurrentClip, ::System::Int32& currentClipIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerSourceData, ::System::Int32, ::System::Single, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYRESOLVELAYERCLIPSTATE_OFFSET))(this, sourceData, layerIndex, montageTime, hasCurrentClip, currentClipIndex);
		}

		::System::Void UnregisterSequenceCommandEntityInternal(::System::UInt32 entityId, ::System::Boolean emitExitCommand)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_UNREGISTERSEQUENCECOMMANDENTITYINTERNAL_OFFSET))(this, entityId, emitExitCommand);
		}

		::System::Void ReleaseSequenceCommandState(::System::UInt32 entityId, ::System::Boolean emitExitCommand)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_RELEASESEQUENCECOMMANDSTATE_OFFSET))(this, entityId, emitExitCommand);
		}

		::System::Void ClearAllSequenceCommandStates(::System::Boolean emitExitCommand)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CLEARALLSEQUENCECOMMANDSTATES_OFFSET))(this, emitExitCommand);
		}

		::System::Void EmitAllLayerExitCommands(::System::UInt32 entityId, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceMontageCommandState* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceMontageCommandState*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_EMITALLLAYEREXITCOMMANDS_OFFSET))(this, entityId, state);
		}

		static ::System::Boolean TryGetLayerTrack(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*>* sequenceTrackData, ::System::Int32 layerIndex, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*& layerTrack)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*>*, ::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETLAYERTRACK_OFFSET))(sequenceTrackData, layerIndex, layerTrack);
		}

		::System::Void EmitSequenceCommand(::System::UInt32 ownerEntityId, ::System::Int32 sourceMontageKey, ::System::Int32 sourcePriorityLayer, ::System::Int32 layerIndex, ::System::Int32 clipIndex, ::NPCCrowd::Animation::MontageTimeEventType timeEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::NPCCrowd::Animation::MontageTimeEventType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_EMITSEQUENCECOMMAND_OFFSET))(this, ownerEntityId, sourceMontageKey, sourcePriorityLayer, layerIndex, clipIndex, timeEvent);
		}

		static ::System::Void ResetLayerClipState(::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerClipState& layerState)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerClipState&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_RESETLAYERCLIPSTATE_OFFSET))(layerState);
		}

		static ::System::Void EnsureLayerStateCount(::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceMontageCommandState* state, ::System::Int32 layerCount)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceMontageCommandState*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_ENSURELAYERSTATECOUNT_OFFSET))(state, layerCount);
		}

		static ::System::Boolean TryGetNpcComponent(::System::UInt32 entityId, ::Class_3_F2DAD7F45F518868*& npcComp)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_TRYGETNPCCOMPONENT_OFFSET))(entityId, npcComp);
		}

		static ::System::Void DispatchMontageCommands()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_DISPATCHMONTAGECOMMANDS_OFFSET))();
		}

		static ::Il2CppArray<::System::Boolean>* CreateCommandEventSwitch(::System::Boolean tick, ::System::Boolean enter, ::System::Boolean exit)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_CREATECOMMANDEVENTSWITCH_OFFSET))(tick, enter, exit);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}
	};
}
