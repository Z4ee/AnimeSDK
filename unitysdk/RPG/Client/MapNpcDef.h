#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapEntityDef.h"
#include "unitysdk/RPG/Client/MapNpcType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/RPG/GameCore/ENpcLookAtMode.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/LevelAnimatingObjectState.h"
#include "unitysdk/RPG/GameCore/LevelNPCComplexity.h"
#include "unitysdk/RPG/GameCore/LevelNPCLodType.h"
#include "unitysdk/RPG/GameCore/LevelNPCOverrideBehaviorType.h"
#include "unitysdk/RPG/GameCore/LevelNPCUseAnimationType.h"
#include "unitysdk/RPG/GameCore/NPCMonsterPurposeType.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/TalkChosenType.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_068EAC6B51178745;
class Class_1_07D84007721CF2C3;
class Class_1_7BF8FDF00F218876_41;
class Class_1_9795F001685B3C12;
class Class_1_A2EB60551DD70E7C;
class Class_1_A9C466B0994F2417;
class Class_1_DCE8592E6AAF77DA_2;
class Class_1_FBCD4FF549575A07_4;
namespace RPG::GameCore { class AIConfigInfo; }
namespace RPG::GameCore { class AIVariableValueSource; }
namespace RPG::GameCore { class AdventureCharacterFloatingConfig; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class CharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelDialogInfo; }
namespace RPG::GameCore { class LevelEntityReferenceInfo; }
namespace RPG::GameCore { class LevelEntitySpawnConfig; }
namespace RPG::GameCore { class LevelEntityVCameraConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LevelLookAtPositionInfo; }
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelNPCInfoOverrideIdleAnim; }
namespace RPG::GameCore { class LevelNPCModelPresetConfig; }
namespace RPG::GameCore { class LevelNPCNearbyConfig; }
namespace RPG::GameCore { class LevelNPCOverrideBehaviorParameter; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class LevelNpcLookAtTargetInfo; }
namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class SOConfigInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MAPNPCDEF_FORCESETNPCROW_OFFSET UNITYSDK_OFFSET(0xBEE5E60)
#define RPG_CLIENT_MAPNPCDEF_GET_ADDITIVEPOSSESSIONCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEE4410)
#define RPG_CLIENT_MAPNPCDEF_GET_AIENABLEONINIT_OFFSET UNITYSDK_OFFSET(0xBEE3720)
#define RPG_CLIENT_MAPNPCDEF_GET_AIVALUESOURCE_OFFSET UNITYSDK_OFFSET(0xBEE38E0)
#define RPG_CLIENT_MAPNPCDEF_GET_ATLASFACESETKEY_OFFSET UNITYSDK_OFFSET(0xBEE3EC0)
#define RPG_CLIENT_MAPNPCDEF_GET_BATTLEAREA_OFFSET UNITYSDK_OFFSET(0xBEE3A30)
#define RPG_CLIENT_MAPNPCDEF_GET_BLENDSHAPECONFIGNAME_OFFSET UNITYSDK_OFFSET(0xBEE3DE0)
#define RPG_CLIENT_MAPNPCDEF_GET_BOARDSHOWLIST_OFFSET UNITYSDK_OFFSET(0xBEE50B0)
#define RPG_CLIENT_MAPNPCDEF_GET_BONEEMOTIONNAME_OFFSET UNITYSDK_OFFSET(0xBEE3E50)
#define RPG_CLIENT_MAPNPCDEF_GET_CAMERACENTERENTITYLIST_OFFSET UNITYSDK_OFFSET(0xBEE57C0)
#define RPG_CLIENT_MAPNPCDEF_GET_CAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xBEE4DC0)
#define RPG_CLIENT_MAPNPCDEF_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0xBEE3990)
#define RPG_CLIENT_MAPNPCDEF_GET_CHARACTERFLOATINGCONFIG_OFFSET UNITYSDK_OFFSET(0xBEE5CE0)
#define RPG_CLIENT_MAPNPCDEF_GET_COMPLEXITY_OFFSET UNITYSDK_OFFSET(0xBEE4EF0)
#define RPG_CLIENT_MAPNPCDEF_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0xBEE4560)
#define RPG_CLIENT_MAPNPCDEF_GET_CONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0xBEE5D80)
#define RPG_CLIENT_MAPNPCDEF_GET_CUSTOMWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xBEE4580)
#define RPG_CLIENT_MAPNPCDEF_GET_DATAROW_OFFSET UNITYSDK_OFFSET(0xBEE3480)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTANIMATIONTYPE_OFFSET UNITYSDK_OFFSET(0xBEE3C30)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTBLENDSHAPECONFIGNAME_OFFSET UNITYSDK_OFFSET(0xBEE3DC0)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTIDLEANIMSTATENAME_OFFSET UNITYSDK_OFFSET(0xBEE3C90)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTIDLEFREESTYLEGRAPHNAME_OFFSET UNITYSDK_OFFSET(0xBEE3D50)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTIDLEFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0xBEE3CF0)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xBEE4020)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTLOOKATPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0xBEE4140)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTLOOKATTARGETINFO_OFFSET UNITYSDK_OFFSET(0xBEE40B0)
#define RPG_CLIENT_MAPNPCDEF_GET_DIALOGUETRIGGERANGLE_OFFSET UNITYSDK_OFFSET(0xBEE5540)
#define RPG_CLIENT_MAPNPCDEF_GET_DIALOGUETRIGGERRADIUS_OFFSET UNITYSDK_OFFSET(0xBEE55B0)
#define RPG_CLIENT_MAPNPCDEF_GET_DIALOGUETRIGGERSKIPFAKEAVATARGET_OFFSET UNITYSDK_OFFSET(0xBEE54D0)
#define RPG_CLIENT_MAPNPCDEF_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xBEB57D0)
#define RPG_CLIENT_MAPNPCDEF_GET_FARMELEMENTID_OFFSET UNITYSDK_OFFSET(0xBEE4E50)
#define RPG_CLIENT_MAPNPCDEF_GET_FIRSTDIALOGUEGROUPID_OFFSET UNITYSDK_OFFSET(0xBEE5260)
#define RPG_CLIENT_MAPNPCDEF_GET_IDLEANIM_OFFSET UNITYSDK_OFFSET(0xBEE3BC0)
#define RPG_CLIENT_MAPNPCDEF_GET_INITANIMSTATE_OFFSET UNITYSDK_OFFSET(0xBEE41D0)
#define RPG_CLIENT_MAPNPCDEF_GET_INITIALHIDDENNODELIST_OFFSET UNITYSDK_OFFSET(0xBEE5920)
#define RPG_CLIENT_MAPNPCDEF_GET_INITSOFINISHED_OFFSET UNITYSDK_OFFSET(0xBEE3B60)
#define RPG_CLIENT_MAPNPCDEF_GET_INTERACTICONTYPE_OFFSET UNITYSDK_OFFSET(0xBEE5440)
#define RPG_CLIENT_MAPNPCDEF_GET_ISGMCREATED_OFFSET UNITYSDK_OFFSET(0xBEE5690)
#define RPG_CLIENT_MAPNPCDEF_GET_ISINITHIDDEN_OFFSET UNITYSDK_OFFSET(0xBEE58B0)
#define RPG_CLIENT_MAPNPCDEF_GET_ISINSTANTKILLED_OFFSET UNITYSDK_OFFSET(0xBEE5890)
#define RPG_CLIENT_MAPNPCDEF_GET_ISMAPCONTENT_OFFSET UNITYSDK_OFFSET(0xBEE5730)
#define RPG_CLIENT_MAPNPCDEF_GET_ISNEEDAPPEAR_OFFSET UNITYSDK_OFFSET(0xBEE57F0)
#define RPG_CLIENT_MAPNPCDEF_GET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0xBEE5810)
#define RPG_CLIENT_MAPNPCDEF_GET_ISNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0xBEE5830)
#define RPG_CLIENT_MAPNPCDEF_GET_ISOVERRIDEATLASEMOTION_OFFSET UNITYSDK_OFFSET(0xBEE3F30)
#define RPG_CLIENT_MAPNPCDEF_GET_ISOVERRIDENPCSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0xBEE4230)
#define RPG_CLIENT_MAPNPCDEF_GET_ISSTILLGRADENPC_OFFSET UNITYSDK_OFFSET(0xBEE4B40)
#define RPG_CLIENT_MAPNPCDEF_GET_LEVELDIALOGINFO_OFFSET UNITYSDK_OFFSET(0xBEE53B0)
#define RPG_CLIENT_MAPNPCDEF_GET_LEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xBEE3600)
#define RPG_CLIENT_MAPNPCDEF_GET_LEVELMONSTERINFO_OFFSET UNITYSDK_OFFSET(0xBEE4D80)
#define RPG_CLIENT_MAPNPCDEF_GET_LEVELNPCENTITYTAGS_OFFSET UNITYSDK_OFFSET(0xBEE4340)
#define RPG_CLIENT_MAPNPCDEF_GET_LODTYPE_OFFSET UNITYSDK_OFFSET(0xBEE5040)
#define RPG_CLIENT_MAPNPCDEF_GET_MAPNPCTYPE_OFFSET UNITYSDK_OFFSET(0xBEE3490)
#define RPG_CLIENT_MAPNPCDEF_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xBEE4470)
#define RPG_CLIENT_MAPNPCDEF_GET_MINIMAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xBEE56B0)
#define RPG_CLIENT_MAPNPCDEF_GET_MODELPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0xBEE5C70)
#define RPG_CLIENT_MAPNPCDEF_GET_NEARBYCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEE5C00)
#define RPG_CLIENT_MAPNPCDEF_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xBEE5AE0)
#define RPG_CLIENT_MAPNPCDEF_GET_NEEDFADEIN_HOYOGROUP_OFFSET UNITYSDK_OFFSET(0xBEE5850)
#define RPG_CLIENT_MAPNPCDEF_GET_NEEDFADEOUT_HOYOGROUP_OFFSET UNITYSDK_OFFSET(0xBEE5870)
#define RPG_CLIENT_MAPNPCDEF_GET_NEEDRECOVERPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0xBEE3B20)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCAICONFIGINFO_OFFSET UNITYSDK_OFFSET(0xBEE3690)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xBEE4ED0)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCID_OFFSET UNITYSDK_OFFSET(0xBEE3500)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCINFO_OFFSET UNITYSDK_OFFSET(0xBEE4D40)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCMONSTEREXTRAINFO_OFFSET UNITYSDK_OFFSET(0xBEE4EB0)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCSOCONFIGINFO_OFFSET UNITYSDK_OFFSET(0xBEE37B0)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEATLASEMOTION_OFFSET UNITYSDK_OFFSET(0xBEE3FB0)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEBEHAVIORPARAMETER_OFFSET UNITYSDK_OFFSET(0xBEE5A00)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEBEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0xBEE5990)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDECONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0xBEE5E40)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEDNPCSOUNDTRIGGERRANGE_OFFSET UNITYSDK_OFFSET(0xBEE42A0)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDELODTEMPLATE_OFFSET UNITYSDK_OFFSET(0xBEE3590)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDENPCNAME_OFFSET UNITYSDK_OFFSET(0xBEE5140)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDENPCTITLE_OFFSET UNITYSDK_OFFSET(0xBEE51D0)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEREPLACEMATERIALKEYLIST_OFFSET UNITYSDK_OFFSET(0xBEE5A70)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDESOUNDCONFIGID_OFFSET UNITYSDK_OFFSET(0xBEE4310)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0xBEE3970)
#define RPG_CLIENT_MAPNPCDEF_GET_POSSESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0xBEE43B0)
#define RPG_CLIENT_MAPNPCDEF_GET_PURPOSETYPE_OFFSET UNITYSDK_OFFSET(0xBEE4DF0)
#define RPG_CLIENT_MAPNPCDEF_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0xBEE44F0)
#define RPG_CLIENT_MAPNPCDEF_GET_RECOVERPATROLWAYPATHDICT_OFFSET UNITYSDK_OFFSET(0xBEE3B40)
#define RPG_CLIENT_MAPNPCDEF_GET_RECOVERPOSITION_OFFSET UNITYSDK_OFFSET(0xBEE3AC0)
#define RPG_CLIENT_MAPNPCDEF_GET_RECOVERROTATION_OFFSET UNITYSDK_OFFSET(0xBEE3B00)
#define RPG_CLIENT_MAPNPCDEF_GET_RECOVERSOCONTEXT_OFFSET UNITYSDK_OFFSET(0xBEE3B80)
#define RPG_CLIENT_MAPNPCDEF_GET_RECOVERSTATUS_OFFSET UNITYSDK_OFFSET(0xBEE3AA0)
#define RPG_CLIENT_MAPNPCDEF_GET_SCENENPCINFO_OFFSET UNITYSDK_OFFSET(0xBEE4D60)
#define RPG_CLIENT_MAPNPCDEF_GET_SCENENPCMONSTERINFO_OFFSET UNITYSDK_OFFSET(0xBEE4DA0)
#define RPG_CLIENT_MAPNPCDEF_GET_SERIESID_OFFSET UNITYSDK_OFFSET(0xBEE5620)
#define RPG_CLIENT_MAPNPCDEF_GET_SKIPEVENTID_OFFSET UNITYSDK_OFFSET(0xBEE3520)
#define RPG_CLIENT_MAPNPCDEF_GET_SPAWNCONFIG_OFFSET UNITYSDK_OFFSET(0xBEE5B70)
#define RPG_CLIENT_MAPNPCDEF_GET_STATICNPC_OFFSET UNITYSDK_OFFSET(0xBEDC840)
#define RPG_CLIENT_MAPNPCDEF_GET_STILLGRADEANIMID_OFFSET UNITYSDK_OFFSET(0xBEE4F60)
#define RPG_CLIENT_MAPNPCDEF_GET_STILLGRADESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0xBEE4FD0)
#define RPG_CLIENT_MAPNPCDEF_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0xBEE45F0)
#define RPG_CLIENT_MAPNPCDEF_GET_TALKCHOSENTYPE_OFFSET UNITYSDK_OFFSET(0xBEE52D0)
#define RPG_CLIENT_MAPNPCDEF_GET_TALKDIALOGUEGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0xBEE5340)
#define RPG_CLIENT_MAPNPCDEF_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xBEE3BA0)
#define RPG_CLIENT_MAPNPCDEF_GET_VALUESOURCE_OFFSET UNITYSDK_OFFSET(0xBEE3840)
#define RPG_CLIENT_MAPNPCDEF_OVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0xBEE4C80)
#define RPG_CLIENT_MAPNPCDEF_OVERRIDEROTATION_OFFSET UNITYSDK_OFFSET(0xBEE4CE0)
#define RPG_CLIENT_MAPNPCDEF_SET_BLENDSHAPECONFIGNAME_OFFSET UNITYSDK_OFFSET(0xBEE3E40)
#define RPG_CLIENT_MAPNPCDEF_SET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0xBEE4570)
#define RPG_CLIENT_MAPNPCDEF_SET_DEFAULTBLENDSHAPECONFIGNAME_OFFSET UNITYSDK_OFFSET(0xBEE3DD0)
#define RPG_CLIENT_MAPNPCDEF_SET_IDLEANIM_OFFSET UNITYSDK_OFFSET(0xBEE3C20)
#define RPG_CLIENT_MAPNPCDEF_SET_INITSOFINISHED_OFFSET UNITYSDK_OFFSET(0xBEE3B70)
#define RPG_CLIENT_MAPNPCDEF_SET_ISGMCREATED_OFFSET UNITYSDK_OFFSET(0xBEE56A0)
#define RPG_CLIENT_MAPNPCDEF_SET_ISINSTANTKILLED_OFFSET UNITYSDK_OFFSET(0xBEE58A0)
#define RPG_CLIENT_MAPNPCDEF_SET_ISNEEDAPPEAR_OFFSET UNITYSDK_OFFSET(0xBEE5800)
#define RPG_CLIENT_MAPNPCDEF_SET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0xBEE5820)
#define RPG_CLIENT_MAPNPCDEF_SET_ISNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0xBEE5840)
#define RPG_CLIENT_MAPNPCDEF_SET_LEVELMONSTERINFO_OFFSET UNITYSDK_OFFSET(0xBEE4D90)
#define RPG_CLIENT_MAPNPCDEF_SET_MAPNPCTYPE_OFFSET UNITYSDK_OFFSET(0xBEE34A0)
#define RPG_CLIENT_MAPNPCDEF_SET_NEEDFADEIN_HOYOGROUP_OFFSET UNITYSDK_OFFSET(0xBEE5860)
#define RPG_CLIENT_MAPNPCDEF_SET_NEEDFADEOUT_HOYOGROUP_OFFSET UNITYSDK_OFFSET(0xBEE5880)
#define RPG_CLIENT_MAPNPCDEF_SET_NEEDRECOVERPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0xBEE3B30)
#define RPG_CLIENT_MAPNPCDEF_SET_NPCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xBEE4EE0)
#define RPG_CLIENT_MAPNPCDEF_SET_NPCID_OFFSET UNITYSDK_OFFSET(0xBEE3510)
#define RPG_CLIENT_MAPNPCDEF_SET_NPCINFO_OFFSET UNITYSDK_OFFSET(0xBEE4D50)
#define RPG_CLIENT_MAPNPCDEF_SET_NPCMONSTEREXTRAINFO_OFFSET UNITYSDK_OFFSET(0xBEE4EC0)
#define RPG_CLIENT_MAPNPCDEF_SET_OVERRIDECONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0xBEE5E50)
#define RPG_CLIENT_MAPNPCDEF_SET_OVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0xBEE3980)
#define RPG_CLIENT_MAPNPCDEF_SET_RECOVERPATROLWAYPATHDICT_OFFSET UNITYSDK_OFFSET(0xBEE3B50)
#define RPG_CLIENT_MAPNPCDEF_SET_RECOVERPOSITION_OFFSET UNITYSDK_OFFSET(0xBEE3AE0)
#define RPG_CLIENT_MAPNPCDEF_SET_RECOVERROTATION_OFFSET UNITYSDK_OFFSET(0xBEE3B10)
#define RPG_CLIENT_MAPNPCDEF_SET_RECOVERSOCONTEXT_OFFSET UNITYSDK_OFFSET(0xBEE3B90)
#define RPG_CLIENT_MAPNPCDEF_SET_RECOVERSTATUS_OFFSET UNITYSDK_OFFSET(0xBEE3AB0)
#define RPG_CLIENT_MAPNPCDEF_SET_SCENENPCINFO_OFFSET UNITYSDK_OFFSET(0xBEE4D70)
#define RPG_CLIENT_MAPNPCDEF_SET_SCENENPCMONSTERINFO_OFFSET UNITYSDK_OFFSET(0xBEE4DB0)
#define RPG_CLIENT_MAPNPCDEF_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xBEE3BB0)
#define RPG_CLIENT_MAPNPCDEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBEE4BA0)
#define RPG_CLIENT_MAPNPCDEF__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBEE4840)
#define RPG_CLIENT_MAPNPCDEF__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE4660)
#define RPG_CLIENT_MAPNPCDEF___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBEE5EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapNpcDef_TypeDefinitionIndex = 58116;

	class MapNpcDef : public ::RPG::Client::MapEntityDef
	{
	public:
		::System::String* _DefaultBlendShapeConfigName_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_9795F001685B3C12*>* _RecoverPatrolWayPathDict_k__BackingField; // 0x60
		::Class_1_DCE8592E6AAF77DA_2* _NPCExtraInfo_k__BackingField; // 0x68
		::System::String* _UniqueName_k__BackingField; // 0x70
		::Class_1_07D84007721CF2C3* _RecoverSOContext_k__BackingField; // 0x78
		::Class_1_7BF8FDF00F218876_41* _SceneNpcInfo_k__BackingField; // 0x80
		::Class_1_068EAC6B51178745* MapInfo; // 0x88
		::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* _overrideIdleAnim; // 0x90
		::RPG::GameCore::LevelGraphValueSource* _OverrideValueSource_k__BackingField; // 0x98
		::System::String* _overrideBlendShapeConfigName; // 0xA0
		::Class_1_A2EB60551DD70E7C* _NpcMonsterExtraInfo_k__BackingField; // 0xA8
		::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* DefaultIdleAnim; // 0xB0
		::RPG::GameCore::NPCDataRow* _npcRow; // 0xB8
		::RPG::GameCore::LevelNPCInfo* _NpcInfo_k__BackingField; // 0xC0
		::System::String* _OverrideConfigEntityPath_k__BackingField; // 0xC8
		::Class_1_FBCD4FF549575A07_4* _SceneNpcMonsterInfo_k__BackingField; // 0xD0
		::RPG::GameCore::LevelMonsterInfo* _LevelMonsterInfo_k__BackingField; // 0xD8
		::UnityEngine::Vector3 _RecoverPosition_k__BackingField; // 0xE0
		::System::Boolean _IsInstantKilled_k__BackingField; // 0xEC
		::RPG::GameCore::NPCStatus _RecoverStatus_k__BackingField; // 0xF0
		::RPG::Client::MapNpcType _MapNpcType; // 0xF4
		::System::Boolean _NeedFadeOut_HoYoGroup_k__BackingField; // 0xF8
		::System::Boolean _IsNeedFadein_k__BackingField; // 0xF9
		::System::Boolean _NeedFadeIn_HoYoGroup_k__BackingField; // 0xFA
		::System::Boolean _InitSOFinished_k__BackingField; // 0xFB
		::System::UInt32 _NPCID_k__BackingField; // 0xFC
		::System::Boolean _IsGMCreated_k__BackingField; // 0x100
		::System::Boolean _IsNeedFadeout_k__BackingField; // 0x101
		::System::Boolean _NeedRecoverPositionAndRotation_k__BackingField; // 0x102
		::System::Boolean _IsNeedAppear_k__BackingField; // 0x103
		::System::UInt32 _ConditionID_k__BackingField; // 0x104
		::UnityEngine::Quaternion _RecoverRotation_k__BackingField; // 0x108

		::System::Void _ctor(::Class_1_A9C466B0994F2417* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::String* a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Quaternion a8, ::RPG::GameCore::LevelMonsterInfo* a9, ::Class_1_FBCD4FF549575A07_4* a10)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::LevelMonsterInfo*, ::Class_1_FBCD4FF549575A07_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void _ctor_1(::Class_1_A9C466B0994F2417* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::String* a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Quaternion a8, ::RPG::GameCore::LevelNPCInfo* a9, ::Class_1_7BF8FDF00F218876_41* a10)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::LevelNPCInfo*, ::Class_1_7BF8FDF00F218876_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::RPG::GameCore::NPCDataRow* get_DataRow()
		{
			return ((::RPG::GameCore::NPCDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DATAROW_OFFSET))(this);
		}

		::RPG::Client::MapNpcType get_MapNpcType()
		{
			return ((::RPG::Client::MapNpcType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_MAPNPCTYPE_OFFSET))(this);
		}

		::System::Void set_MapNpcType(::RPG::Client::MapNpcType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_MAPNPCTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_NPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NPCID_OFFSET))(this);
		}

		::System::Void set_NPCID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NPCID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_EVENTID_OFFSET))(this);
		}

		::System::Boolean get_SkipEventID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_SKIPEVENTID_OFFSET))(this);
		}

		::System::Boolean get_StaticNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_STATICNPC_OFFSET))(this);
		}

		::RPG::GameCore::EntityLodTemplateName get_OverrideLodTemplate()
		{
			return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDELODTEMPLATE_OFFSET))(this);
		}

		::System::String* get_LevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_LEVELGRAPHPATH_OFFSET))(this);
		}

		::RPG::GameCore::AIConfigInfo* get_NPCAIConfigInfo()
		{
			return ((::RPG::GameCore::AIConfigInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NPCAICONFIGINFO_OFFSET))(this);
		}

		::System::Boolean get_AIEnableOnInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_AIENABLEONINIT_OFFSET))(this);
		}

		::RPG::GameCore::SOConfigInfo* get_NPCSOConfigInfo()
		{
			return ((::RPG::GameCore::SOConfigInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NPCSOCONFIGINFO_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* get_ValueSource()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_VALUESOURCE_OFFSET))(this);
		}

		::RPG::GameCore::AIVariableValueSource* get_AIValueSource()
		{
			return ((::RPG::GameCore::AIVariableValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_AIVALUESOURCE_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* get_OverrideValueSource()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEVALUESOURCE_OFFSET))(this);
		}

		::System::Void set_OverrideValueSource(::RPG::GameCore::LevelGraphValueSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_OVERRIDEVALUESOURCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::CampType get_CampID()
		{
			return ((::RPG::GameCore::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_CAMPID_OFFSET))(this);
		}

		::RPG::GameCore::BattleAreaReferenceInfo* get_BattleArea()
		{
			return ((::RPG::GameCore::BattleAreaReferenceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_BATTLEAREA_OFFSET))(this);
		}

		::RPG::GameCore::NPCStatus get_RecoverStatus()
		{
			return ((::RPG::GameCore::NPCStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_RECOVERSTATUS_OFFSET))(this);
		}

		::System::Void set_RecoverStatus(::RPG::GameCore::NPCStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_RECOVERSTATUS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_RecoverPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_RECOVERPOSITION_OFFSET))(this);
		}

		::System::Void set_RecoverPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_RECOVERPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_RecoverRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_RECOVERROTATION_OFFSET))(this);
		}

		::System::Void set_RecoverRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_RECOVERROTATION_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedRecoverPositionAndRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NEEDRECOVERPOSITIONANDROTATION_OFFSET))(this);
		}

		::System::Void set_NeedRecoverPositionAndRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NEEDRECOVERPOSITIONANDROTATION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_9795F001685B3C12*>* get_RecoverPatrolWayPathDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_9795F001685B3C12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_RECOVERPATROLWAYPATHDICT_OFFSET))(this);
		}

		::System::Void set_RecoverPatrolWayPathDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_9795F001685B3C12*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_9795F001685B3C12*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_RECOVERPATROLWAYPATHDICT_OFFSET))(this, a1);
		}

		::System::Boolean get_InitSOFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_INITSOFINISHED_OFFSET))(this);
		}

		::System::Void set_InitSOFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_INITSOFINISHED_OFFSET))(this, a1);
		}

		::Class_1_07D84007721CF2C3* get_RecoverSOContext()
		{
			return ((::Class_1_07D84007721CF2C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_RECOVERSOCONTEXT_OFFSET))(this);
		}

		::System::Void set_RecoverSOContext(::Class_1_07D84007721CF2C3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_07D84007721CF2C3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_RECOVERSOCONTEXT_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_UNIQUENAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* get_IdleAnim()
		{
			return ((::RPG::GameCore::LevelNPCInfoOverrideIdleAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_IDLEANIM_OFFSET))(this);
		}

		::System::Void set_IdleAnim(::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfoOverrideIdleAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_IDLEANIM_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNPCUseAnimationType get_DefaultAnimationType()
		{
			return ((::RPG::GameCore::LevelNPCUseAnimationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DEFAULTANIMATIONTYPE_OFFSET))(this);
		}

		::System::String* get_DefaultIdleAnimStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DEFAULTIDLEANIMSTATENAME_OFFSET))(this);
		}

		::System::UInt32 get_DefaultIdleFreeStyleMotionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DEFAULTIDLEFREESTYLEMOTIONID_OFFSET))(this);
		}

		::System::String* get_DefaultIdleFreeStyleGraphName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DEFAULTIDLEFREESTYLEGRAPHNAME_OFFSET))(this);
		}

		::System::String* get_DefaultBlendShapeConfigName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DEFAULTBLENDSHAPECONFIGNAME_OFFSET))(this);
		}

		::System::Void set_DefaultBlendShapeConfigName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_DEFAULTBLENDSHAPECONFIGNAME_OFFSET))(this, a1);
		}

		::System::String* get_BlendShapeConfigName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_BLENDSHAPECONFIGNAME_OFFSET))(this);
		}

		::System::Void set_BlendShapeConfigName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_BLENDSHAPECONFIGNAME_OFFSET))(this, a1);
		}

		::System::String* get_BoneEmotionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_BONEEMOTIONNAME_OFFSET))(this);
		}

		::System::String* get_AtlasFaceSetKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ATLASFACESETKEY_OFFSET))(this);
		}

		::System::Boolean get_IsOverrideAtlasEmotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISOVERRIDEATLASEMOTION_OFFSET))(this);
		}

		::RPG::GameCore::CharacterAtlasFaceEmotion* get_OverrideAtlasEmotion()
		{
			return ((::RPG::GameCore::CharacterAtlasFaceEmotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEATLASEMOTION_OFFSET))(this);
		}

		::RPG::GameCore::ENpcLookAtMode get_DefaultLookAtMode()
		{
			return ((::RPG::GameCore::ENpcLookAtMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DEFAULTLOOKATMODE_OFFSET))(this);
		}

		::RPG::GameCore::LevelNpcLookAtTargetInfo* get_DefaultLookAtTargetInfo()
		{
			return ((::RPG::GameCore::LevelNpcLookAtTargetInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DEFAULTLOOKATTARGETINFO_OFFSET))(this);
		}

		::RPG::GameCore::LevelLookAtPositionInfo* get_DefaultLookAtPositionInfo()
		{
			return ((::RPG::GameCore::LevelLookAtPositionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DEFAULTLOOKATPOSITIONINFO_OFFSET))(this);
		}

		::RPG::GameCore::LevelAnimatingObjectState get_InitAnimState()
		{
			return ((::RPG::GameCore::LevelAnimatingObjectState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_INITANIMSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsOverrideNpcSoundTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISOVERRIDENPCSOUNDTRIGGER_OFFSET))(this);
		}

		::System::Single get_OverridedNpcSoundTriggerRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEDNPCSOUNDTRIGGERRANGE_OFFSET))(this);
		}

		::System::UInt32 get_OverrideSoundConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDESOUNDCONFIGID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::EntityTag>* get_LevelNpcEntityTags()
		{
			return ((::Il2CppArray<::RPG::GameCore::EntityTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_LEVELNPCENTITYTAGS_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCPossessionInfo* get_PossessionConfig()
		{
			return ((::RPG::GameCore::LevelNPCPossessionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_POSSESSIONCONFIG_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* get_AdditivePossessionConfigs()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ADDITIVEPOSSESSIONCONFIGS_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::UInt32 get_RaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_RAIDID_OFFSET))(this);
		}

		::System::UInt32 get_ConditionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_CONDITIONID_OFFSET))(this);
		}

		::System::Void set_ConditionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_CONDITIONID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> get_CustomWorldLevel()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_CUSTOMWORLDLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_SubMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_SUBMAPID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_TOSTRING_OFFSET))(this);
		}

		::System::Void OverridePosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_OVERRIDEPOSITION_OFFSET))(this, a1);
		}

		::System::Void OverrideRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_OVERRIDEROTATION_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNPCInfo* get_NpcInfo()
		{
			return ((::RPG::GameCore::LevelNPCInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NPCINFO_OFFSET))(this);
		}

		::System::Void set_NpcInfo(::RPG::GameCore::LevelNPCInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NPCINFO_OFFSET))(this, a1);
		}

		::Class_1_7BF8FDF00F218876_41* get_SceneNpcInfo()
		{
			return ((::Class_1_7BF8FDF00F218876_41*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_SCENENPCINFO_OFFSET))(this);
		}

		::System::Void set_SceneNpcInfo(::Class_1_7BF8FDF00F218876_41* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7BF8FDF00F218876_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_SCENENPCINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelMonsterInfo* get_LevelMonsterInfo()
		{
			return ((::RPG::GameCore::LevelMonsterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_LEVELMONSTERINFO_OFFSET))(this);
		}

		::System::Void set_LevelMonsterInfo(::RPG::GameCore::LevelMonsterInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_LEVELMONSTERINFO_OFFSET))(this, a1);
		}

		::Class_1_FBCD4FF549575A07_4* get_SceneNpcMonsterInfo()
		{
			return ((::Class_1_FBCD4FF549575A07_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_SCENENPCMONSTERINFO_OFFSET))(this);
		}

		::System::Void set_SceneNpcMonsterInfo(::Class_1_FBCD4FF549575A07_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_SCENENPCMONSTERINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelEntityVCameraConfig* get_CameraConfig()
		{
			return ((::RPG::GameCore::LevelEntityVCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_CAMERACONFIG_OFFSET))(this);
		}

		::RPG::GameCore::NPCMonsterPurposeType get_PurposeType()
		{
			return ((::RPG::GameCore::NPCMonsterPurposeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_PURPOSETYPE_OFFSET))(this);
		}

		::System::UInt32 get_FarmElementID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_FARMELEMENTID_OFFSET))(this);
		}

		::Class_1_A2EB60551DD70E7C* get_NpcMonsterExtraInfo()
		{
			return ((::Class_1_A2EB60551DD70E7C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NPCMONSTEREXTRAINFO_OFFSET))(this);
		}

		::System::Void set_NpcMonsterExtraInfo(::Class_1_A2EB60551DD70E7C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A2EB60551DD70E7C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NPCMONSTEREXTRAINFO_OFFSET))(this, a1);
		}

		::Class_1_DCE8592E6AAF77DA_2* get_NPCExtraInfo()
		{
			return ((::Class_1_DCE8592E6AAF77DA_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NPCEXTRAINFO_OFFSET))(this);
		}

		::System::Void set_NPCExtraInfo(::Class_1_DCE8592E6AAF77DA_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DCE8592E6AAF77DA_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NPCEXTRAINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNPCComplexity get_Complexity()
		{
			return ((::RPG::GameCore::LevelNPCComplexity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_COMPLEXITY_OFFSET))(this);
		}

		::System::Boolean get_IsStillGradeNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISSTILLGRADENPC_OFFSET))(this);
		}

		::System::String* get_StillGradeAnimID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_STILLGRADEANIMID_OFFSET))(this);
		}

		::System::Boolean get_StillGradeStandOnGround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_STILLGRADESTANDONGROUND_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCLodType get_LodType()
		{
			return ((::RPG::GameCore::LevelNPCLodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_LODTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_BoardShowList()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_BOARDSHOWLIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_OverrideNPCName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDENPCNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_OverrideNPCTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDENPCTITLE_OFFSET))(this);
		}

		::System::UInt32 get_FirstDialogueGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_FIRSTDIALOGUEGROUPID_OFFSET))(this);
		}

		::RPG::GameCore::TalkChosenType get_TalkChosenType()
		{
			return ((::RPG::GameCore::TalkChosenType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_TALKCHOSENTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TalkDialogueGroupIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_TALKDIALOGUEGROUPIDLIST_OFFSET))(this);
		}

		::RPG::GameCore::LevelDialogInfo* get_LevelDialogInfo()
		{
			return ((::RPG::GameCore::LevelDialogInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_LEVELDIALOGINFO_OFFSET))(this);
		}

		::RPG::GameCore::JsonEnum* get_InteractIconType()
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_INTERACTICONTYPE_OFFSET))(this);
		}

		::System::Boolean get_DialogueTriggerSkipFakeAvatarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DIALOGUETRIGGERSKIPFAKEAVATARGET_OFFSET))(this);
		}

		::System::Single get_DialogueTriggerAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DIALOGUETRIGGERANGLE_OFFSET))(this);
		}

		::System::Single get_DialogueTriggerRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DIALOGUETRIGGERRADIUS_OFFSET))(this);
		}

		::System::UInt32 get_SeriesID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_SERIESID_OFFSET))(this);
		}

		::System::Boolean get_IsGMCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISGMCREATED_OFFSET))(this);
		}

		::System::Void set_IsGMCreated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_ISGMCREATED_OFFSET))(this, a1);
		}

		::System::UInt32 get_MiniMapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_MINIMAPICONTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsMapContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISMAPCONTENT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelEntityReferenceInfo*>* get_CameraCenterEntityList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelEntityReferenceInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_CAMERACENTERENTITYLIST_OFFSET))(this);
		}

		::System::Boolean get_IsNeedAppear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISNEEDAPPEAR_OFFSET))(this);
		}

		::System::Void set_IsNeedAppear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_ISNEEDAPPEAR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNeedFadein()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISNEEDFADEIN_OFFSET))(this);
		}

		::System::Void set_IsNeedFadein(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_ISNEEDFADEIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNeedFadeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISNEEDFADEOUT_OFFSET))(this);
		}

		::System::Void set_IsNeedFadeout(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_ISNEEDFADEOUT_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedFadeIn_HoYoGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NEEDFADEIN_HOYOGROUP_OFFSET))(this);
		}

		::System::Void set_NeedFadeIn_HoYoGroup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NEEDFADEIN_HOYOGROUP_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedFadeOut_HoYoGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NEEDFADEOUT_HOYOGROUP_OFFSET))(this);
		}

		::System::Void set_NeedFadeOut_HoYoGroup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NEEDFADEOUT_HOYOGROUP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInstantKilled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISINSTANTKILLED_OFFSET))(this);
		}

		::System::Void set_IsInstantKilled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_ISINSTANTKILLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInitHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISINITHIDDEN_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_InitialHiddenNodeList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_INITIALHIDDENNODELIST_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCOverrideBehaviorType get_OverrideBehaviorType()
		{
			return ((::RPG::GameCore::LevelNPCOverrideBehaviorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEBEHAVIORTYPE_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCOverrideBehaviorParameter* get_OverrideBehaviorParameter()
		{
			return ((::RPG::GameCore::LevelNPCOverrideBehaviorParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEBEHAVIORPARAMETER_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OverrideReplaceMaterialKeyList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEREPLACEMATERIALKEYLIST_OFFSET))(this);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntitySpawnConfig* get_SpawnConfig()
		{
			return ((::RPG::GameCore::LevelEntitySpawnConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_SPAWNCONFIG_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelNPCNearbyConfig*>* get_NearbyConfigs()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelNPCNearbyConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NEARBYCONFIGS_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCModelPresetConfig* get_ModelPresetConfig()
		{
			return ((::RPG::GameCore::LevelNPCModelPresetConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_MODELPRESETCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::AdventureCharacterFloatingConfig* get_CharacterFloatingConfig()
		{
			return ((::RPG::GameCore::AdventureCharacterFloatingConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_CHARACTERFLOATINGCONFIG_OFFSET))(this);
		}

		::System::String* get_ConfigEntityPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_CONFIGENTITYPATH_OFFSET))(this);
		}

		::System::String* get_OverrideConfigEntityPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDECONFIGENTITYPATH_OFFSET))(this);
		}

		::System::Void set_OverrideConfigEntityPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_OVERRIDECONFIGENTITYPATH_OFFSET))(this, a1);
		}

		::System::Void ForceSetNpcRow(::RPG::GameCore::NPCDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_FORCESETNPCROW_OFFSET))(this, a1);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
