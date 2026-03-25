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
#include "unitysdk/RPG/GameCore/LevelNPCLodType.h"
#include "unitysdk/RPG/GameCore/LevelNPCOverrideBehaviorType.h"
#include "unitysdk/RPG/GameCore/LevelNPCUseAnimationType.h"
#include "unitysdk/RPG/GameCore/NPCBornType.h"
#include "unitysdk/RPG/GameCore/NPCMonsterPurposeType.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/TalkChosenType.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_068EAC6B51178745;
class Class_1_07D84007721CF2C3;
class Class_1_2B30F71EDD41C80E;
class Class_1_9D5608F598A30CAC_41;
class Class_1_A1B5BC940FB8DDEF;
class Class_1_A9059FFD70CDB0FC_1;
class Class_1_A9C466B0994F2417;
class Class_1_FBCD4FF549575A07_3;
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
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MAPNPCDEF_FORCESETNPCROW_OFFSET UNITYSDK_OFFSET(0x9B045C0)
#define RPG_CLIENT_MAPNPCDEF_GET_ADDITIVEPOSSESSIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x9B033A0)
#define RPG_CLIENT_MAPNPCDEF_GET_AIENABLEONINIT_OFFSET UNITYSDK_OFFSET(0x9B024F0)
#define RPG_CLIENT_MAPNPCDEF_GET_AIVALUESOURCE_OFFSET UNITYSDK_OFFSET(0x9B026B0)
#define RPG_CLIENT_MAPNPCDEF_GET_ATLASFACESETKEY_OFFSET UNITYSDK_OFFSET(0x9B02DA0)
#define RPG_CLIENT_MAPNPCDEF_GET_BATTLEAREA_OFFSET UNITYSDK_OFFSET(0x9B027F0)
#define RPG_CLIENT_MAPNPCDEF_GET_BLENDSHAPECONFIGNAME_OFFSET UNITYSDK_OFFSET(0x9B02CC0)
#define RPG_CLIENT_MAPNPCDEF_GET_BOARDSHOWLIST_OFFSET UNITYSDK_OFFSET(0x9B038B0)
#define RPG_CLIENT_MAPNPCDEF_GET_BONEEMOTIONNAME_OFFSET UNITYSDK_OFFSET(0x9B02D30)
#define RPG_CLIENT_MAPNPCDEF_GET_BORNTYPE_OFFSET UNITYSDK_OFFSET(0x9B03F80)
#define RPG_CLIENT_MAPNPCDEF_GET_CAMERACENTERENTITYLIST_OFFSET UNITYSDK_OFFSET(0x9B03FF0)
#define RPG_CLIENT_MAPNPCDEF_GET_CAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x9B03720)
#define RPG_CLIENT_MAPNPCDEF_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0x9B02750)
#define RPG_CLIENT_MAPNPCDEF_GET_CHARACTERFLOATINGCONFIG_OFFSET UNITYSDK_OFFSET(0x9B04470)
#define RPG_CLIENT_MAPNPCDEF_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x9B03470)
#define RPG_CLIENT_MAPNPCDEF_GET_CONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0x9B044E0)
#define RPG_CLIENT_MAPNPCDEF_GET_CUSTOMWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x9B03490)
#define RPG_CLIENT_MAPNPCDEF_GET_DATAROW_OFFSET UNITYSDK_OFFSET(0x9B021E0)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTANIMATIONTYPE_OFFSET UNITYSDK_OFFSET(0x9B02B10)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTBLENDSHAPECONFIGNAME_OFFSET UNITYSDK_OFFSET(0x9B02CA0)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTIDLEANIMSTATENAME_OFFSET UNITYSDK_OFFSET(0x9B02B70)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTIDLEFREESTYLEGRAPHNAME_OFFSET UNITYSDK_OFFSET(0x9B02C30)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTIDLEFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x9B02BD0)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTLOOKATMODE_OFFSET UNITYSDK_OFFSET(0x9B02EF0)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTLOOKATPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0x9B03000)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTLOOKATTARGETINFO_OFFSET UNITYSDK_OFFSET(0x9B02F70)
#define RPG_CLIENT_MAPNPCDEF_GET_DEFAULTSTORY_OFFSET UNITYSDK_OFFSET(0x9B03A60)
#define RPG_CLIENT_MAPNPCDEF_GET_DIALOGUETRIGGERANGLE_OFFSET UNITYSDK_OFFSET(0x9B03E20)
#define RPG_CLIENT_MAPNPCDEF_GET_DIALOGUETRIGGERRADIUS_OFFSET UNITYSDK_OFFSET(0x9B03E90)
#define RPG_CLIENT_MAPNPCDEF_GET_DIALOGUETRIGGERSKIPFAKEAVATARGET_OFFSET UNITYSDK_OFFSET(0x9B03D40)
#define RPG_CLIENT_MAPNPCDEF_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9B02280)
#define RPG_CLIENT_MAPNPCDEF_GET_FAKEAVATARINTERACTBLACKLIST_OFFSET UNITYSDK_OFFSET(0x9B03DB0)
#define RPG_CLIENT_MAPNPCDEF_GET_FARMELEMENTID_OFFSET UNITYSDK_OFFSET(0x9B037A0)
#define RPG_CLIENT_MAPNPCDEF_GET_FIRSTDIALOGUEGROUPID_OFFSET UNITYSDK_OFFSET(0x9B03AD0)
#define RPG_CLIENT_MAPNPCDEF_GET_IDLEANIM_OFFSET UNITYSDK_OFFSET(0x9B02AA0)
#define RPG_CLIENT_MAPNPCDEF_GET_INITANIMSTATE_OFFSET UNITYSDK_OFFSET(0x9B03090)
#define RPG_CLIENT_MAPNPCDEF_GET_INITIALHIDDENNODELIST_OFFSET UNITYSDK_OFFSET(0x9B04140)
#define RPG_CLIENT_MAPNPCDEF_GET_INITSOFINISHED_OFFSET UNITYSDK_OFFSET(0x9B02920)
#define RPG_CLIENT_MAPNPCDEF_GET_INTERACTICONTYPE_OFFSET UNITYSDK_OFFSET(0x9B03CB0)
#define RPG_CLIENT_MAPNPCDEF_GET_ISGMCREATED_OFFSET UNITYSDK_OFFSET(0x9B03F60)
#define RPG_CLIENT_MAPNPCDEF_GET_ISINITHIDDEN_OFFSET UNITYSDK_OFFSET(0x9B040D0)
#define RPG_CLIENT_MAPNPCDEF_GET_ISINSTANTKILLED_OFFSET UNITYSDK_OFFSET(0x9B040B0)
#define RPG_CLIENT_MAPNPCDEF_GET_ISMAPCONTENT_OFFSET UNITYSDK_OFFSET(0x9AFF620)
#define RPG_CLIENT_MAPNPCDEF_GET_ISNEEDAPPEAR_OFFSET UNITYSDK_OFFSET(0x9B04010)
#define RPG_CLIENT_MAPNPCDEF_GET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0x9B04030)
#define RPG_CLIENT_MAPNPCDEF_GET_ISNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x9B04050)
#define RPG_CLIENT_MAPNPCDEF_GET_ISOVERRIDEARTMODELOFFSET_OFFSET UNITYSDK_OFFSET(0x9B02980)
#define RPG_CLIENT_MAPNPCDEF_GET_ISOVERRIDEATLASEMOTION_OFFSET UNITYSDK_OFFSET(0x9B02E10)
#define RPG_CLIENT_MAPNPCDEF_GET_ISOVERRIDENPCSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0x9B030F0)
#define RPG_CLIENT_MAPNPCDEF_GET_ISOVERRIDETRIGGERVALIDGUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x9B031F0)
#define RPG_CLIENT_MAPNPCDEF_GET_LEVELDIALOGINFO_OFFSET UNITYSDK_OFFSET(0x9B03C20)
#define RPG_CLIENT_MAPNPCDEF_GET_LEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x9B023E0)
#define RPG_CLIENT_MAPNPCDEF_GET_LEVELMONSTERINFO_OFFSET UNITYSDK_OFFSET(0x9B036E0)
#define RPG_CLIENT_MAPNPCDEF_GET_LEVELNPCENTITYTAGS_OFFSET UNITYSDK_OFFSET(0x9B032D0)
#define RPG_CLIENT_MAPNPCDEF_GET_LODTYPE_OFFSET UNITYSDK_OFFSET(0x9B03840)
#define RPG_CLIENT_MAPNPCDEF_GET_MAPNPCTYPE_OFFSET UNITYSDK_OFFSET(0x9B021F0)
#define RPG_CLIENT_MAPNPCDEF_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9AFDCF0)
#define RPG_CLIENT_MAPNPCDEF_GET_MINIMAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x9AFF6B0)
#define RPG_CLIENT_MAPNPCDEF_GET_MODELPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0x9B04400)
#define RPG_CLIENT_MAPNPCDEF_GET_NEARBYCONFIGS_OFFSET UNITYSDK_OFFSET(0x9B04390)
#define RPG_CLIENT_MAPNPCDEF_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9AFDD70)
#define RPG_CLIENT_MAPNPCDEF_GET_NEEDFADEIN_HOYOGROUP_OFFSET UNITYSDK_OFFSET(0x9B04070)
#define RPG_CLIENT_MAPNPCDEF_GET_NEEDFADEOUT_HOYOGROUP_OFFSET UNITYSDK_OFFSET(0x9B04090)
#define RPG_CLIENT_MAPNPCDEF_GET_NEEDRECOVERPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x9B028E0)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCAICONFIGINFO_OFFSET UNITYSDK_OFFSET(0x9B02470)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9B03820)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCID_OFFSET UNITYSDK_OFFSET(0x9B02260)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCINFO_OFFSET UNITYSDK_OFFSET(0x9B036A0)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCMONSTEREXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9B03800)
#define RPG_CLIENT_MAPNPCDEF_GET_NPCSOCONFIGINFO_OFFSET UNITYSDK_OFFSET(0x9B02580)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEARTMODELOFFSET_OFFSET UNITYSDK_OFFSET(0x9B029F0)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEATLASEMOTION_OFFSET UNITYSDK_OFFSET(0x9B02E80)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEBEHAVIORPARAMETER_OFFSET UNITYSDK_OFFSET(0x9B04220)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEBEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0x9B041B0)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDECONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0x9B045A0)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEDNPCSOUNDTRIGGERRANGE_OFFSET UNITYSDK_OFFSET(0x9B03160)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDELODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9B02370)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDENPCNAME_OFFSET UNITYSDK_OFFSET(0x9B03940)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDENPCTITLE_OFFSET UNITYSDK_OFFSET(0x9B039D0)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEREPLACEMATERIALKEYLIST_OFFSET UNITYSDK_OFFSET(0x9B04290)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDESOUNDCONFIGID_OFFSET UNITYSDK_OFFSET(0x9B031D0)
#define RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0x9B02730)
#define RPG_CLIENT_MAPNPCDEF_GET_POSSESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x9B03340)
#define RPG_CLIENT_MAPNPCDEF_GET_PURPOSETYPE_OFFSET UNITYSDK_OFFSET(0x9B03740)
#define RPG_CLIENT_MAPNPCDEF_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0x9B03400)
#define RPG_CLIENT_MAPNPCDEF_GET_RECOVERPATROLWAYPATHDICT_OFFSET UNITYSDK_OFFSET(0x9B02900)
#define RPG_CLIENT_MAPNPCDEF_GET_RECOVERPOSITION_OFFSET UNITYSDK_OFFSET(0x9B02880)
#define RPG_CLIENT_MAPNPCDEF_GET_RECOVERROTATION_OFFSET UNITYSDK_OFFSET(0x9B028C0)
#define RPG_CLIENT_MAPNPCDEF_GET_RECOVERSOCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B02940)
#define RPG_CLIENT_MAPNPCDEF_GET_RECOVERSTATUS_OFFSET UNITYSDK_OFFSET(0x9B02860)
#define RPG_CLIENT_MAPNPCDEF_GET_SCENENPCINFO_OFFSET UNITYSDK_OFFSET(0x9B036C0)
#define RPG_CLIENT_MAPNPCDEF_GET_SCENENPCMONSTERINFO_OFFSET UNITYSDK_OFFSET(0x9B03700)
#define RPG_CLIENT_MAPNPCDEF_GET_SERIESID_OFFSET UNITYSDK_OFFSET(0x9B03F00)
#define RPG_CLIENT_MAPNPCDEF_GET_SKIPEVENTID_OFFSET UNITYSDK_OFFSET(0x9B02300)
#define RPG_CLIENT_MAPNPCDEF_GET_SPAWNCONFIG_OFFSET UNITYSDK_OFFSET(0x9B04300)
#define RPG_CLIENT_MAPNPCDEF_GET_STATICNPC_OFFSET UNITYSDK_OFFSET(0x9AFB1F0)
#define RPG_CLIENT_MAPNPCDEF_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x9AFDDF0)
#define RPG_CLIENT_MAPNPCDEF_GET_TALKCHOSENTYPE_OFFSET UNITYSDK_OFFSET(0x9B03B40)
#define RPG_CLIENT_MAPNPCDEF_GET_TALKDIALOGUEGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x9B03BB0)
#define RPG_CLIENT_MAPNPCDEF_GET_TRIGGERVALIDGUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x9B03260)
#define RPG_CLIENT_MAPNPCDEF_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x9B02960)
#define RPG_CLIENT_MAPNPCDEF_GET_VALUESOURCE_OFFSET UNITYSDK_OFFSET(0x9B02610)
#define RPG_CLIENT_MAPNPCDEF_OVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x9B035E0)
#define RPG_CLIENT_MAPNPCDEF_OVERRIDEROTATION_OFFSET UNITYSDK_OFFSET(0x9B03640)
#define RPG_CLIENT_MAPNPCDEF_SET_BLENDSHAPECONFIGNAME_OFFSET UNITYSDK_OFFSET(0x9B02D20)
#define RPG_CLIENT_MAPNPCDEF_SET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x9B03480)
#define RPG_CLIENT_MAPNPCDEF_SET_DEFAULTBLENDSHAPECONFIGNAME_OFFSET UNITYSDK_OFFSET(0x9B02CB0)
#define RPG_CLIENT_MAPNPCDEF_SET_IDLEANIM_OFFSET UNITYSDK_OFFSET(0x9B02B00)
#define RPG_CLIENT_MAPNPCDEF_SET_INITSOFINISHED_OFFSET UNITYSDK_OFFSET(0x9B02930)
#define RPG_CLIENT_MAPNPCDEF_SET_ISGMCREATED_OFFSET UNITYSDK_OFFSET(0x9B03F70)
#define RPG_CLIENT_MAPNPCDEF_SET_ISINSTANTKILLED_OFFSET UNITYSDK_OFFSET(0x9B040C0)
#define RPG_CLIENT_MAPNPCDEF_SET_ISNEEDAPPEAR_OFFSET UNITYSDK_OFFSET(0x9B04020)
#define RPG_CLIENT_MAPNPCDEF_SET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0x9B04040)
#define RPG_CLIENT_MAPNPCDEF_SET_ISNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x9B04060)
#define RPG_CLIENT_MAPNPCDEF_SET_LEVELMONSTERINFO_OFFSET UNITYSDK_OFFSET(0x9B036F0)
#define RPG_CLIENT_MAPNPCDEF_SET_MAPNPCTYPE_OFFSET UNITYSDK_OFFSET(0x9B02200)
#define RPG_CLIENT_MAPNPCDEF_SET_NEEDFADEIN_HOYOGROUP_OFFSET UNITYSDK_OFFSET(0x9B04080)
#define RPG_CLIENT_MAPNPCDEF_SET_NEEDFADEOUT_HOYOGROUP_OFFSET UNITYSDK_OFFSET(0x9B040A0)
#define RPG_CLIENT_MAPNPCDEF_SET_NEEDRECOVERPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x9B028F0)
#define RPG_CLIENT_MAPNPCDEF_SET_NPCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9B03830)
#define RPG_CLIENT_MAPNPCDEF_SET_NPCID_OFFSET UNITYSDK_OFFSET(0x9B02270)
#define RPG_CLIENT_MAPNPCDEF_SET_NPCINFO_OFFSET UNITYSDK_OFFSET(0x9B036B0)
#define RPG_CLIENT_MAPNPCDEF_SET_NPCMONSTEREXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9B03810)
#define RPG_CLIENT_MAPNPCDEF_SET_OVERRIDECONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0x9B045B0)
#define RPG_CLIENT_MAPNPCDEF_SET_OVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0x9B02740)
#define RPG_CLIENT_MAPNPCDEF_SET_RECOVERPATROLWAYPATHDICT_OFFSET UNITYSDK_OFFSET(0x9B02910)
#define RPG_CLIENT_MAPNPCDEF_SET_RECOVERPOSITION_OFFSET UNITYSDK_OFFSET(0x9B028A0)
#define RPG_CLIENT_MAPNPCDEF_SET_RECOVERROTATION_OFFSET UNITYSDK_OFFSET(0x9B028D0)
#define RPG_CLIENT_MAPNPCDEF_SET_RECOVERSOCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B02950)
#define RPG_CLIENT_MAPNPCDEF_SET_RECOVERSTATUS_OFFSET UNITYSDK_OFFSET(0x9B02870)
#define RPG_CLIENT_MAPNPCDEF_SET_SCENENPCINFO_OFFSET UNITYSDK_OFFSET(0x9B036D0)
#define RPG_CLIENT_MAPNPCDEF_SET_SCENENPCMONSTERINFO_OFFSET UNITYSDK_OFFSET(0x9B03710)
#define RPG_CLIENT_MAPNPCDEF_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x9B02970)
#define RPG_CLIENT_MAPNPCDEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B03500)
#define RPG_CLIENT_MAPNPCDEF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9AF6B30)
#define RPG_CLIENT_MAPNPCDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x9AF7210)
#define RPG_CLIENT_MAPNPCDEF___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B04610)

namespace RPG::Client
{
	inline static constexpr unsigned int MapNpcDef_TypeDefinitionIndex = 50467;

	class MapNpcDef : public ::RPG::Client::MapEntityDef
	{
	public:
		::Class_1_2B30F71EDD41C80E* _NpcMonsterExtraInfo_k__BackingField; // 0x58
		::Class_1_9D5608F598A30CAC_41* _SceneNpcInfo_k__BackingField; // 0x60
		::System::String* _UniqueName_k__BackingField; // 0x68
		::RPG::GameCore::LevelNPCInfo* _NpcInfo_k__BackingField; // 0x70
		::RPG::GameCore::LevelGraphValueSource* _OverrideValueSource_k__BackingField; // 0x78
		::Class_1_068EAC6B51178745* MapInfo; // 0x80
		::RPG::GameCore::NPCDataRow* _npcRow; // 0x88
		::System::String* _overrideBlendShapeConfigName; // 0x90
		::Class_1_FBCD4FF549575A07_3* _SceneNpcMonsterInfo_k__BackingField; // 0x98
		::System::String* _OverrideConfigEntityPath_k__BackingField; // 0xA0
		::System::String* _DefaultBlendShapeConfigName_k__BackingField; // 0xA8
		::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* _overrideIdleAnim; // 0xB0
		::Class_1_07D84007721CF2C3* _RecoverSOContext_k__BackingField; // 0xB8
		::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* DefaultIdleAnim; // 0xC0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_A1B5BC940FB8DDEF*>* _RecoverPatrolWayPathDict_k__BackingField; // 0xC8
		::Class_1_A9059FFD70CDB0FC_1* _NPCExtraInfo_k__BackingField; // 0xD0
		::RPG::GameCore::LevelMonsterInfo* _LevelMonsterInfo_k__BackingField; // 0xD8
		::RPG::Client::MapNpcType _MapNpcType; // 0xE0
		::UnityEngine::Quaternion _RecoverRotation_k__BackingField; // 0xE4
		::System::UInt32 _ConditionID_k__BackingField; // 0xF4
		::System::Boolean _InitSOFinished_k__BackingField; // 0xF8
		::System::Boolean _IsNeedFadein_k__BackingField; // 0xF9
		::System::Boolean _IsInstantKilled_k__BackingField; // 0xFA
		::System::Boolean _NeedFadeOut_HoYoGroup_k__BackingField; // 0xFB
		::System::Boolean _IsGMCreated_k__BackingField; // 0xFC
		::System::Boolean _IsNeedFadeout_k__BackingField; // 0xFD
		::System::Boolean _IsNeedAppear_k__BackingField; // 0xFE
		::System::Boolean _NeedFadeIn_HoYoGroup_k__BackingField; // 0xFF
		::RPG::GameCore::NPCStatus _RecoverStatus_k__BackingField; // 0x100
		::UnityEngine::Vector3 _RecoverPosition_k__BackingField; // 0x104
		::System::UInt32 _NPCID_k__BackingField; // 0x110
		::System::Boolean _NeedRecoverPositionAndRotation_k__BackingField; // 0x114

		::System::Void _ctor(::Class_1_A9C466B0994F2417* groupDef, ::System::UInt32 serverEntityID, ::System::UInt32 groupInstanceID, ::System::UInt32 instanceID, ::System::UInt32 npcID, ::System::String* uniqueName, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::RPG::GameCore::LevelMonsterInfo* levelMonsterInfo, ::Class_1_FBCD4FF549575A07_3* sceneMonsterInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::LevelMonsterInfo*, ::Class_1_FBCD4FF549575A07_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF__CTOR_OFFSET))(this, groupDef, serverEntityID, groupInstanceID, instanceID, npcID, uniqueName, position, rotation, levelMonsterInfo, sceneMonsterInfo);
		}

		::System::Void _ctor_1(::Class_1_A9C466B0994F2417* groupDef, ::System::UInt32 serverEntityID, ::System::UInt32 groupInstanceID, ::System::UInt32 instanceID, ::System::UInt32 npcID, ::System::String* uniqueName, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::RPG::GameCore::LevelNPCInfo* levelNpcInfo, ::Class_1_9D5608F598A30CAC_41* sceneNpcInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::LevelNPCInfo*, ::Class_1_9D5608F598A30CAC_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF__CTOR_1_OFFSET))(this, groupDef, serverEntityID, groupInstanceID, instanceID, npcID, uniqueName, position, rotation, levelNpcInfo, sceneNpcInfo);
		}

		::RPG::GameCore::NPCDataRow* get_DataRow()
		{
			return ((::RPG::GameCore::NPCDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DATAROW_OFFSET))(this);
		}

		::RPG::Client::MapNpcType get_MapNpcType()
		{
			return ((::RPG::Client::MapNpcType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_MAPNPCTYPE_OFFSET))(this);
		}

		::System::Void set_MapNpcType(::RPG::Client::MapNpcType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_MAPNPCTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_NPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NPCID_OFFSET))(this);
		}

		::System::Void set_NPCID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NPCID_OFFSET))(this, value);
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

		::System::Void set_OverrideValueSource(::RPG::GameCore::LevelGraphValueSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_OVERRIDEVALUESOURCE_OFFSET))(this, value);
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

		::System::Void set_RecoverStatus(::RPG::GameCore::NPCStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_RECOVERSTATUS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_RecoverPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_RECOVERPOSITION_OFFSET))(this);
		}

		::System::Void set_RecoverPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_RECOVERPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_RecoverRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_RECOVERROTATION_OFFSET))(this);
		}

		::System::Void set_RecoverRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_RECOVERROTATION_OFFSET))(this, value);
		}

		::System::Boolean get_NeedRecoverPositionAndRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NEEDRECOVERPOSITIONANDROTATION_OFFSET))(this);
		}

		::System::Void set_NeedRecoverPositionAndRotation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NEEDRECOVERPOSITIONANDROTATION_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_A1B5BC940FB8DDEF*>* get_RecoverPatrolWayPathDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_A1B5BC940FB8DDEF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_RECOVERPATROLWAYPATHDICT_OFFSET))(this);
		}

		::System::Void set_RecoverPatrolWayPathDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_A1B5BC940FB8DDEF*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_A1B5BC940FB8DDEF*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_RECOVERPATROLWAYPATHDICT_OFFSET))(this, value);
		}

		::System::Boolean get_InitSOFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_INITSOFINISHED_OFFSET))(this);
		}

		::System::Void set_InitSOFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_INITSOFINISHED_OFFSET))(this, value);
		}

		::Class_1_07D84007721CF2C3* get_RecoverSOContext()
		{
			return ((::Class_1_07D84007721CF2C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_RECOVERSOCONTEXT_OFFSET))(this);
		}

		::System::Void set_RecoverSOContext(::Class_1_07D84007721CF2C3* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_07D84007721CF2C3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_RECOVERSOCONTEXT_OFFSET))(this, value);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_UNIQUENAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsOverrideArtModelOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISOVERRIDEARTMODELOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_OverrideArtModelOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_OVERRIDEARTMODELOFFSET_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* get_IdleAnim()
		{
			return ((::RPG::GameCore::LevelNPCInfoOverrideIdleAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_IDLEANIM_OFFSET))(this);
		}

		::System::Void set_IdleAnim(::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfoOverrideIdleAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_IDLEANIM_OFFSET))(this, value);
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

		::System::Void set_DefaultBlendShapeConfigName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_DEFAULTBLENDSHAPECONFIGNAME_OFFSET))(this, value);
		}

		::System::String* get_BlendShapeConfigName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_BLENDSHAPECONFIGNAME_OFFSET))(this);
		}

		::System::Void set_BlendShapeConfigName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_BLENDSHAPECONFIGNAME_OFFSET))(this, value);
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

		::System::Boolean get_IsOverrideTriggerValidGuestConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISOVERRIDETRIGGERVALIDGUESTCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::TriggerValidGuestConfig* get_TriggerValidGuestConfig()
		{
			return ((::RPG::GameCore::TriggerValidGuestConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_TRIGGERVALIDGUESTCONFIG_OFFSET))(this);
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

		::System::Void set_ConditionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_CONDITIONID_OFFSET))(this, value);
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

		::System::Void OverridePosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_OVERRIDEPOSITION_OFFSET))(this, position);
		}

		::System::Void OverrideRotation(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_OVERRIDEROTATION_OFFSET))(this, rotation);
		}

		::RPG::GameCore::LevelNPCInfo* get_NpcInfo()
		{
			return ((::RPG::GameCore::LevelNPCInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NPCINFO_OFFSET))(this);
		}

		::System::Void set_NpcInfo(::RPG::GameCore::LevelNPCInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NPCINFO_OFFSET))(this, value);
		}

		::Class_1_9D5608F598A30CAC_41* get_SceneNpcInfo()
		{
			return ((::Class_1_9D5608F598A30CAC_41*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_SCENENPCINFO_OFFSET))(this);
		}

		::System::Void set_SceneNpcInfo(::Class_1_9D5608F598A30CAC_41* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_SCENENPCINFO_OFFSET))(this, value);
		}

		::RPG::GameCore::LevelMonsterInfo* get_LevelMonsterInfo()
		{
			return ((::RPG::GameCore::LevelMonsterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_LEVELMONSTERINFO_OFFSET))(this);
		}

		::System::Void set_LevelMonsterInfo(::RPG::GameCore::LevelMonsterInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_LEVELMONSTERINFO_OFFSET))(this, value);
		}

		::Class_1_FBCD4FF549575A07_3* get_SceneNpcMonsterInfo()
		{
			return ((::Class_1_FBCD4FF549575A07_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_SCENENPCMONSTERINFO_OFFSET))(this);
		}

		::System::Void set_SceneNpcMonsterInfo(::Class_1_FBCD4FF549575A07_3* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_SCENENPCMONSTERINFO_OFFSET))(this, value);
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

		::Class_1_2B30F71EDD41C80E* get_NpcMonsterExtraInfo()
		{
			return ((::Class_1_2B30F71EDD41C80E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NPCMONSTEREXTRAINFO_OFFSET))(this);
		}

		::System::Void set_NpcMonsterExtraInfo(::Class_1_2B30F71EDD41C80E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2B30F71EDD41C80E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NPCMONSTEREXTRAINFO_OFFSET))(this, value);
		}

		::Class_1_A9059FFD70CDB0FC_1* get_NPCExtraInfo()
		{
			return ((::Class_1_A9059FFD70CDB0FC_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NPCEXTRAINFO_OFFSET))(this);
		}

		::System::Void set_NPCExtraInfo(::Class_1_A9059FFD70CDB0FC_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9059FFD70CDB0FC_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NPCEXTRAINFO_OFFSET))(this, value);
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

		::System::String* get_DefaultStory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_DEFAULTSTORY_OFFSET))(this);
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

		::Il2CppArray<::System::UInt32>* get_FakeAvatarInteractBlackList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_FAKEAVATARINTERACTBLACKLIST_OFFSET))(this);
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

		::System::Void set_IsGMCreated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_ISGMCREATED_OFFSET))(this, value);
		}

		::System::UInt32 get_MiniMapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_MINIMAPICONTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsMapContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISMAPCONTENT_OFFSET))(this);
		}

		::RPG::GameCore::NPCBornType get_BornType()
		{
			return ((::RPG::GameCore::NPCBornType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_BORNTYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelEntityReferenceInfo*>* get_CameraCenterEntityList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelEntityReferenceInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_CAMERACENTERENTITYLIST_OFFSET))(this);
		}

		::System::Boolean get_IsNeedAppear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISNEEDAPPEAR_OFFSET))(this);
		}

		::System::Void set_IsNeedAppear(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_ISNEEDAPPEAR_OFFSET))(this, value);
		}

		::System::Boolean get_IsNeedFadein()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISNEEDFADEIN_OFFSET))(this);
		}

		::System::Void set_IsNeedFadein(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_ISNEEDFADEIN_OFFSET))(this, value);
		}

		::System::Boolean get_IsNeedFadeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISNEEDFADEOUT_OFFSET))(this);
		}

		::System::Void set_IsNeedFadeout(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_ISNEEDFADEOUT_OFFSET))(this, value);
		}

		::System::Boolean get_NeedFadeIn_HoYoGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NEEDFADEIN_HOYOGROUP_OFFSET))(this);
		}

		::System::Void set_NeedFadeIn_HoYoGroup(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NEEDFADEIN_HOYOGROUP_OFFSET))(this, value);
		}

		::System::Boolean get_NeedFadeOut_HoYoGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_NEEDFADEOUT_HOYOGROUP_OFFSET))(this);
		}

		::System::Void set_NeedFadeOut_HoYoGroup(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_NEEDFADEOUT_HOYOGROUP_OFFSET))(this, value);
		}

		::System::Boolean get_IsInstantKilled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_GET_ISINSTANTKILLED_OFFSET))(this);
		}

		::System::Void set_IsInstantKilled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_ISINSTANTKILLED_OFFSET))(this, value);
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

		::System::Void set_OverrideConfigEntityPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_SET_OVERRIDECONFIGENTITYPATH_OFFSET))(this, value);
		}

		::System::Void ForceSetNpcRow(::RPG::GameCore::NPCDataRow* pNPCRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF_FORCESETNPCROW_OFFSET))(this, pNPCRow);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPCDEF___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
