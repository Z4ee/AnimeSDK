#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/DelayNpcAudioRtpcEvent.h"
#include "unitysdk/NPCCrowd/Avatar/DelayNpcAudioTriggerEvent.h"
#include "unitysdk/NPCCrowd/Avatar/NPCAvatarSubSystem_NPCAudioUpdateJob.h"
#include "unitysdk/NPCCrowd/Avatar/NPCAvatarSubSystem___c__DisplayClass41_0.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/Struct_2_92DA5310F390EF4D.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B8F2A25A5ADF5CEE;
class Class_3_CAE1CE1BAD52952C;
class Class_3_F2DAD7F45F518868;
class Class_3_FFD0045B4597F294;
class NPCAvatarRuntimeData;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Avatar { class NpcAudioJobData; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }

#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ADDAUDIOJOBDATA_OFFSET UNITYSDK_OFFSET(0xD5CE230)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CACHEANDDISPATCHAUDIOJOB_OFFSET UNITYSDK_OFFSET(0xD5CE760)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_COMPLETEAUDIOJOB_OFFSET UNITYSDK_OFFSET(0xD5CEC80)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD5CF7E0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_DELAYADDAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0xD5CDF70)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_DELAYREMOVEAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0xD5CDFE0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_FLUSHAUDIODATACHANGE_OFFSET UNITYSDK_OFFSET(0xD5CE050)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_FLUSHAUDIOMAINTHREADWORK_OFFSET UNITYSDK_OFFSET(0xD5CECE0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_GET_INS_OFFSET UNITYSDK_OFFSET(0xD5CDA50)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITACCESSORYINFO_OFFSET UNITYSDK_OFFSET(0x12735820)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITANIMATION_OFFSET UNITYSDK_OFFSET(0x12735960)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITAUDIOJOB_OFFSET UNITYSDK_OFFSET(0xD5CDA70)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITAUDIO_OFFSET UNITYSDK_OFFSET(0x12736630)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITLOOKATIK_OFFSET UNITYSDK_OFFSET(0x127338D0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0xD5CF500)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_NPCAUDIOUPDATETHREADSAFE_OFFSET UNITYSDK_OFFSET(0xD5CF180)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONBIGSCENEFLOORCHANGE_OFFSET UNITYSDK_OFFSET(0x12735770)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x127352E0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYADD_OFFSET UNITYSDK_OFFSET(0xD5CF9D0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x12732750)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x12733D90)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONMAINCITYTIMESYNCED_OFFSET UNITYSDK_OFFSET(0x127355A0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x12735260)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_REFRESHALLNPCTIMEPERIODTAGS_OFFSET UNITYSDK_OFFSET(0x12735650)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_RELEASEAUDIOJOB_OFFSET UNITYSDK_OFFSET(0xD5CDBE0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_RELEASEAUDIO_OFFSET UNITYSDK_OFFSET(0x127344F0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_REMOVEAUDIOJOBDATA_OFFSET UNITYSDK_OFFSET(0xD5CE5E0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_SET_INS_OFFSET UNITYSDK_OFFSET(0xD5CDA60)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x12736AF0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEDITHERSTATE_OFFSET UNITYSDK_OFFSET(0x127367D0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x127350D0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12737270)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12737260)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__INITANIMATION_G__PLAYANIMATION_41_0_OFFSET UNITYSDK_OFFSET(0x12736470)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12737280)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x12737290)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12737320)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x127373B0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x12737450)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarSubSystem_TypeDefinitionIndex = 82931;

	class NPCAvatarSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::NPCCrowd::Avatar::NPCAvatarSubSystem** StaticGet__Ins_k__BackingField()
		{
			return (::NPCCrowd::Avatar::NPCAvatarSubSystem**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem_TypeDefinitionIndex)->GetStaticField(0x3FBF0);
		}
		static ::NPCCrowd::NPCIDGeneratorInt** StaticGet_IDGen()
		{
			return (::NPCCrowd::NPCIDGeneratorInt**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem_TypeDefinitionIndex)->GetStaticField(0x3FBF8);
		}
		static ::System::Boolean* StaticGet_EnableAudioJob()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem_TypeDefinitionIndex)->GetStaticField(0xF5F0);
		}
		::System::Collections::Generic::List_1<::Struct_2_92DA5310F390EF4D<::System::UInt32>>* _audioDelayOptEntities; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NpcAudioJobData*>* _audioJobData; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _audioEntityIndexMap; // 0x30
		::Unity::Collections::ManagedBlockQueue_1<::NPCCrowd::Avatar::DelayNpcAudioRtpcEvent>* _delayAudioRtpcQueue; // 0x38
		::Unity::Collections::ManagedBlockQueue_1<::NPCCrowd::Avatar::DelayNpcAudioTriggerEvent>* _delayAudioTriggerQueue; // 0x40
		::System::Boolean _needFlushMainThreadWork; // 0x48
		::System::Boolean _hasLastRefreshPeriod; // 0x49
		::System::Boolean _audioNeedRefresh; // 0x4A
		::NPCCrowd::Avatar::NPCAvatarSubSystem_NPCAudioUpdateJob _audioUpdateJob; // 0x4C
		::ProtoScript::TimePeriodType _lastRefreshPeriod; // 0x5C
		::Unity::Jobs::JobHandle _audioJobHandle; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Avatar::NPCAvatarSubSystem* get_Ins()
		{
			return ((::NPCCrowd::Avatar::NPCAvatarSubSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_GET_INS_OFFSET))();
		}

		static ::System::Void set_Ins(::NPCCrowd::Avatar::NPCAvatarSubSystem* value)
		{
			return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarSubSystem*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_SET_INS_OFFSET))(value);
		}

		::System::Void InitAudioJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITAUDIOJOB_OFFSET))(this);
		}

		::System::Void ReleaseAudioJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_RELEASEAUDIOJOB_OFFSET))(this);
		}

		::System::Void DelayAddAudioEntity(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_DELAYADDAUDIOENTITY_OFFSET))(this, entityId);
		}

		::System::Void DelayRemoveAudioEntity(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_DELAYREMOVEAUDIOENTITY_OFFSET))(this, entityId);
		}

		::System::Void FlushAudioDataChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_FLUSHAUDIODATACHANGE_OFFSET))(this);
		}

		::System::Void AddAudioJobData(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ADDAUDIOJOBDATA_OFFSET))(this, entityId);
		}

		::System::Void RemoveAudioJobData(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_REMOVEAUDIOJOBDATA_OFFSET))(this, entityId);
		}

		::System::Void CacheAndDispatchAudioJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CACHEANDDISPATCHAUDIOJOB_OFFSET))(this);
		}

		::System::Void CompleteAudioJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_COMPLETEAUDIOJOB_OFFSET))(this);
		}

		::System::Void FlushAudioMainThreadWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_FLUSHAUDIOMAINTHREADWORK_OFFSET))(this);
		}

		static ::System::Void NpcAudioUpdateThreadSafe(::System::Int32 index, ::UnityEngine::Vector3 listenerPos, ::System::Single unscaledTime)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_NPCAUDIOUPDATETHREADSAFE_OFFSET))(index, listenerPos, unscaledTime);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void OnEntityAdd(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYADD_OFFSET))(ecsEntity);
		}

		static ::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREADY_OFFSET))(entityId);
		}

		static ::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREMOVE_OFFSET))(ecsEntity);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_POSTUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnMainCityTimeSynced(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONMAINCITYTIMESYNCED_OFFSET))(this, args);
		}

		::System::Void OnBigSceneFloorChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONBIGSCENEFLOORCHANGE_OFFSET))(this, args);
		}

		::System::Void RefreshAllNpcTimePeriodTags(::ProtoScript::TimePeriodType period, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::ProtoScript::TimePeriodType, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_REFRESHALLNPCTIMEPERIODTAGS_OFFSET))(this, period, force);
		}

		static ::System::Void InitAccessoryInfo(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITACCESSORYINFO_OFFSET))(npcComp);
		}

		static ::System::Void InitAnimation(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITANIMATION_OFFSET))(npcComp);
		}

		static ::System::Boolean InitLookAtIK(::Class_3_B8F2A25A5ADF5CEE* baseDataComp, ::Class_3_F2DAD7F45F518868* npcComp, ::Class_3_CAE1CE1BAD52952C* voComp)
		{
			return ((::System::Boolean(*)(::Class_3_B8F2A25A5ADF5CEE*, ::Class_3_F2DAD7F45F518868*, ::Class_3_CAE1CE1BAD52952C*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITLOOKATIK_OFFSET))(baseDataComp, npcComp, voComp);
		}

		static ::System::Void InitAudio(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITAUDIO_OFFSET))(npcComp);
		}

		static ::System::Void ReleaseAudio(::MoleMole::Battle::Entity* entity, ::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_RELEASEAUDIO_OFFSET))(entity, npcComp);
		}

		static ::System::Void UpdateDitherState(::NPCCrowd::Ability::NPCAbility* ability, ::NPCAvatarRuntimeData* avatarRuntimeData, ::Class_3_FFD0045B4597F294* materialComponent)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbility*, ::NPCAvatarRuntimeData*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEDITHERSTATE_OFFSET))(ability, avatarRuntimeData, materialComponent);
		}

		static ::System::Void UpdateAudio(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEAUDIO_OFFSET))(npcComp);
		}

		static ::System::Boolean _InitAnimation_g__PlayAnimation_41_0(::System::Int32 animID, ::System::Int32 upperID, ::NPCCrowd::Avatar::NPCAvatarSubSystem___c__DisplayClass41_0& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::NPCCrowd::Avatar::NPCAvatarSubSystem___c__DisplayClass41_0&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__INITANIMATION_G__PLAYANIMATION_41_0_OFFSET))(animID, upperID, a3);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_POSTUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
