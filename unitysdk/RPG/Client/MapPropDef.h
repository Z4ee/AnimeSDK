#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapEntityDef.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TalkChosenType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_068EAC6B51178745;
class Class_1_419A79D235B9417C_13;
class Class_1_E30528F4CB67FD3D;
class Class_1_FAB24B2D24758D65;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelAdvEffectOverrideInfo; }
namespace RPG::GameCore { class LevelDialogInfo; }
namespace RPG::GameCore { class LevelEntityHoyoTagContainerOverrideConfig; }
namespace RPG::GameCore { class LevelEntityReferenceInfo; }
namespace RPG::GameCore { class LevelEntityVCameraConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class LevelPropParameter; }
namespace RPG::GameCore { class LevelPropSpawnConfig; }
namespace RPG::GameCore { class LevelPropStateConfig; }
namespace RPG::GameCore { class LevelPropStateIcon; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropDynamicResConfigItem; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class PropStateIcon; }
namespace RPG::GameCore { class PropTagComponentCollection; }
namespace RPG::GameCore { class StageObjectCapture; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAPPROPDEF_GETREALLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x1A86B330)
#define RPG_CLIENT_MAPPROPDEF_GET_ANCHORCAMERALOOKATDETECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1A86A5C0)
#define RPG_CLIENT_MAPPROPDEF_GET_ANCHORGROUPID_OFFSET UNITYSDK_OFFSET(0x1A868D90)
#define RPG_CLIENT_MAPPROPDEF_GET_ANCHORINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1A868DF0)
#define RPG_CLIENT_MAPPROPDEF_GET_CAMERACENTERENTITYLIST_OFFSET UNITYSDK_OFFSET(0x1A86A560)
#define RPG_CLIENT_MAPPROPDEF_GET_CAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x1A86A640)
#define RPG_CLIENT_MAPPROPDEF_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0x1A868CC0)
#define RPG_CLIENT_MAPPROPDEF_GET_CHESTID_OFFSET UNITYSDK_OFFSET(0x1A868F70)
#define RPG_CLIENT_MAPPROPDEF_GET_CUSTOMTRIGGERMAPV2_OFFSET UNITYSDK_OFFSET(0x1A8691B0)
#define RPG_CLIENT_MAPPROPDEF_GET_CUSTOMTRIGGERMAP_OFFSET UNITYSDK_OFFSET(0x1A869150)
#define RPG_CLIENT_MAPPROPDEF_GET_DIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0x1A869320)
#define RPG_CLIENT_MAPPROPDEF_GET_DIALOGUETRIGGERANGLE_OFFSET UNITYSDK_OFFSET(0x1A869610)
#define RPG_CLIENT_MAPPROPDEF_GET_DIALOGUETRIGGERSKIPFAKEAVATARGET_OFFSET UNITYSDK_OFFSET(0x1A8698C0)
#define RPG_CLIENT_MAPPROPDEF_GET_DISABLECAMERADITHER_OFFSET UNITYSDK_OFFSET(0x1A86A500)
#define RPG_CLIENT_MAPPROPDEF_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1A869380)
#define RPG_CLIENT_MAPPROPDEF_GET_FAKEAVATARINTERACTBLACKLIST_OFFSET UNITYSDK_OFFSET(0x1A869920)
#define RPG_CLIENT_MAPPROPDEF_GET_FARMCOCOONID_OFFSET UNITYSDK_OFFSET(0x1A868E50)
#define RPG_CLIENT_MAPPROPDEF_GET_FARMELEMENTID_OFFSET UNITYSDK_OFFSET(0x1A868EB0)
#define RPG_CLIENT_MAPPROPDEF_GET_FIRSTDIALOGUEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A869670)
#define RPG_CLIENT_MAPPROPDEF_GET_HIDEINCUTSCENE_OFFSET UNITYSDK_OFFSET(0x1A869E20)
#define RPG_CLIENT_MAPPROPDEF_GET_HIDEINPERFORMANCED_OFFSET UNITYSDK_OFFSET(0x1A869FC0)
#define RPG_CLIENT_MAPPROPDEF_GET_HIDEINPERFORMANCEE_OFFSET UNITYSDK_OFFSET(0x1A86A090)
#define RPG_CLIENT_MAPPROPDEF_GET_HIDEINSTORY_OFFSET UNITYSDK_OFFSET(0x1A869EF0)
#define RPG_CLIENT_MAPPROPDEF_GET_HINTRANGE_OFFSET UNITYSDK_OFFSET(0x1A8693E0)
#define RPG_CLIENT_MAPPROPDEF_GET_HOYOTAGCONTAINEROVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x1A86A440)
#define RPG_CLIENT_MAPPROPDEF_GET_INTERACTICONTYPE_OFFSET UNITYSDK_OFFSET(0x1A869860)
#define RPG_CLIENT_MAPPROPDEF_GET_INTERACTTITLE_OFFSET UNITYSDK_OFFSET(0x1A8697F0)
#define RPG_CLIENT_MAPPROPDEF_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x1A868BD0)
#define RPG_CLIENT_MAPPROPDEF_GET_ISCREATEONINITIAL_OFFSET UNITYSDK_OFFSET(0x1A868D10)
#define RPG_CLIENT_MAPPROPDEF_GET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0x1A86A160)
#define RPG_CLIENT_MAPPROPDEF_GET_ISNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x1A86A180)
#define RPG_CLIENT_MAPPROPDEF_GET_ISOVERRIDEPROPSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1A869A90)
#define RPG_CLIENT_MAPPROPDEF_GET_ISOVERRIDETRIGGERVALIDGUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1A869B80)
#define RPG_CLIENT_MAPPROPDEF_GET_ISTRACKREALTIMEPOSITIONINMAP_OFFSET UNITYSDK_OFFSET(0x1A868FD0)
#define RPG_CLIENT_MAPPROPDEF_GET_LEVELDIALOGINFO_OFFSET UNITYSDK_OFFSET(0x1A869790)
#define RPG_CLIENT_MAPPROPDEF_GET_LEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x1A869090)
#define RPG_CLIENT_MAPPROPDEF_GET_LOADONINITIAL_OFFSET UNITYSDK_OFFSET(0x1A869D60)
#define RPG_CLIENT_MAPPROPDEF_GET_LOOKATPLAYERTRIGGERRADIUS_OFFSET UNITYSDK_OFFSET(0x1A86A360)
#define RPG_CLIENT_MAPPROPDEF_GET_LOOKATPLAYER_OFFSET UNITYSDK_OFFSET(0x1A86A300)
#define RPG_CLIENT_MAPPROPDEF_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x1A8694A0)
#define RPG_CLIENT_MAPPROPDEF_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A868CA0)
#define RPG_CLIENT_MAPPROPDEF_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x1A86A1C0)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEADVEFFECTMAP_OFFSET UNITYSDK_OFFSET(0x1A8692A0)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEAUDIOSWITCHGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1A869BE0)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEAUDIOSWITCHNAME_OFFSET UNITYSDK_OFFSET(0x1A869C40)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEBOARDSHOWLIST_OFFSET UNITYSDK_OFFSET(0x1A86A220)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDELEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x1A869030)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDELOCKRAYCASTOFFSET_OFFSET UNITYSDK_OFFSET(0x1A86A3C0)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEMAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x1A869560)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEMAPSTATEICONS_OFFSET UNITYSDK_OFFSET(0x1A869A70)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEPROPNAME_OFFSET UNITYSDK_OFFSET(0x1A869A00)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEPROPSOUNDTRIGGERRANGE_OFFSET UNITYSDK_OFFSET(0x1A869B20)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDESOUNDCONFIGID_OFFSET UNITYSDK_OFFSET(0x1A869CA0)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0x1A869300)
#define RPG_CLIENT_MAPPROPDEF_GET_PERFORMANCEHIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x1A869DC0)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1A868C80)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPDYNAMICRESDATA_OFFSET UNITYSDK_OFFSET(0x1A868C60)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1A8699E0)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPID_OFFSET UNITYSDK_OFFSET(0x1A868C20)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPROWDATA_OFFSET UNITYSDK_OFFSET(0x1A868C40)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPTAGCOMPONENTOVERRIDECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1A86A4A0)
#define RPG_CLIENT_MAPPROPDEF_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0x1A868F10)
#define RPG_CLIENT_MAPPROPDEF_GET_ROTATIONFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x1A86A280)
#define RPG_CLIENT_MAPPROPDEF_GET_SPAWNCONFIG_OFFSET UNITYSDK_OFFSET(0x1A86A2A0)
#define RPG_CLIENT_MAPPROPDEF_GET_STAGEOBJECTCAPTURE_OFFSET UNITYSDK_OFFSET(0x1A869440)
#define RPG_CLIENT_MAPPROPDEF_GET_STATECONFIGS_OFFSET UNITYSDK_OFFSET(0x1A869980)
#define RPG_CLIENT_MAPPROPDEF_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1A868D70)
#define RPG_CLIENT_MAPPROPDEF_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x1A86A6A0)
#define RPG_CLIENT_MAPPROPDEF_GET_TALKCHOSENTYPE_OFFSET UNITYSDK_OFFSET(0x1A8696D0)
#define RPG_CLIENT_MAPPROPDEF_GET_TALKDIALOGUEGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1A869730)
#define RPG_CLIENT_MAPPROPDEF_GET_TRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0x1A86A1A0)
#define RPG_CLIENT_MAPPROPDEF_GET_TRIGGERVALIDGUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1A869D00)
#define RPG_CLIENT_MAPPROPDEF_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1A8690F0)
#define RPG_CLIENT_MAPPROPDEF_GET_VALUESOURCE_OFFSET UNITYSDK_OFFSET(0x1A869210)
#define RPG_CLIENT_MAPPROPDEF_SETCUSTOMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A86AD60)
#define RPG_CLIENT_MAPPROPDEF_SETOVERRIDEMAPSTATEICONS_OFFSET UNITYSDK_OFFSET(0x1A86AE20)
#define RPG_CLIENT_MAPPROPDEF_SET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0x1A86A170)
#define RPG_CLIENT_MAPPROPDEF_SET_ISNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x1A86A190)
#define RPG_CLIENT_MAPPROPDEF_SET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x1A869500)
#define RPG_CLIENT_MAPPROPDEF_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A868CB0)
#define RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEMAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x1A8695B0)
#define RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEMAPSTATEICONS_OFFSET UNITYSDK_OFFSET(0x1A869A80)
#define RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0x1A869310)
#define RPG_CLIENT_MAPPROPDEF_SET_PROPCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1A868C90)
#define RPG_CLIENT_MAPPROPDEF_SET_PROPDYNAMICRESDATA_OFFSET UNITYSDK_OFFSET(0x1A868C70)
#define RPG_CLIENT_MAPPROPDEF_SET_PROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1A8699F0)
#define RPG_CLIENT_MAPPROPDEF_SET_PROPID_OFFSET UNITYSDK_OFFSET(0x1A868C30)
#define RPG_CLIENT_MAPPROPDEF_SET_PROPROWDATA_OFFSET UNITYSDK_OFFSET(0x1A868C50)
#define RPG_CLIENT_MAPPROPDEF_SET_ROTATIONFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x1A86A290)
#define RPG_CLIENT_MAPPROPDEF_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1A868D80)
#define RPG_CLIENT_MAPPROPDEF_SET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x1A86A6B0)
#define RPG_CLIENT_MAPPROPDEF_SET_TRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0x1A86A1B0)
#define RPG_CLIENT_MAPPROPDEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A86B250)
#define RPG_CLIENT_MAPPROPDEF_UPDATETRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0x1A86B0C0)
#define RPG_CLIENT_MAPPROPDEF__APPLYGROUPINITOVERRIDEPROPSTATE_OFFSET UNITYSDK_OFFSET(0x1A86AFA0)
#define RPG_CLIENT_MAPPROPDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A86A6C0)
#define RPG_CLIENT_MAPPROPDEF__INITEXCELANDJSONCONFIG_OFFSET UNITYSDK_OFFSET(0x1A86A990)
#define RPG_CLIENT_MAPPROPDEF__INITPROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1A86AB60)
#define RPG_CLIENT_MAPPROPDEF__INITPROPMAPINFO_OFFSET UNITYSDK_OFFSET(0x1A86AC20)
#define RPG_CLIENT_MAPPROPDEF__INITPROPSTATE_OFFSET UNITYSDK_OFFSET(0x1A86AAC0)
#define RPG_CLIENT_MAPPROPDEF__INITTRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0x1A86ABC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapPropDef_TypeDefinitionIndex = 59384;

	class MapPropDef : public ::RPG::Client::MapEntityDef
	{
	public:
		::RPG::GameCore::LevelPropParameter* LevelPropParameter; // 0x58
		::Class_1_068EAC6B51178745* MapInfo; // 0x60
		::RPG::GameCore::LevelGraphValueSource* _ValueSource; // 0x68
		::RPG::GameCore::PropConfig* _PropConfigData_k__BackingField; // 0x70
		::RPG::GameCore::PropRow* _PropRowData_k__BackingField; // 0x78
		::System::String* _Name_k__BackingField; // 0x80
		::RPG::GameCore::LevelPropParameter* MapCustomParameter; // 0x88
		::Il2CppArray<::RPG::GameCore::PropStateIcon*>* _OverrideMapStateIcons_k__BackingField; // 0x90
		::Class_1_419A79D235B9417C_13* _ScenePropInfo; // 0x98
		::Class_1_FAB24B2D24758D65* _PropExtraInfo_k__BackingField; // 0xA0
		::RPG::GameCore::LevelPropInfo* _LevelPropInfo; // 0xA8
		::RPG::GameCore::LevelGraphValueSource* _OverrideValueSource_k__BackingField; // 0xB0
		::System::Collections::Generic::List_1<::System::String*>* _TriggerNameList_k__BackingField; // 0xB8
		::RPG::GameCore::PropDynamicResConfigItem* _PropDynamicResData_k__BackingField; // 0xC0
		::System::Boolean IsShowMapGuideHint; // 0xC8
		::System::Boolean _IsNeedFadeOut_k__BackingField; // 0xC9
		::System::Boolean _IsNeedFadeIn_k__BackingField; // 0xCA
		::System::UInt32 _SubMapID_k__BackingField; // 0xCC
		::System::UInt32 _PropID_k__BackingField; // 0xD0
		::UnityEngine::Quaternion _RotationFromConfig_k__BackingField; // 0xD4
		::RPG::GameCore::PropState _State_k__BackingField; // 0xE4

		::System::Void _ctor(::Class_1_E30528F4CB67FD3D* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::String* a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Quaternion a8, ::UnityEngine::Vector3 a9, ::RPG::GameCore::LevelPropInfo* a10, ::Class_1_419A79D235B9417C_13* a11)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E30528F4CB67FD3D*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::RPG::GameCore::LevelPropInfo*, ::Class_1_419A79D235B9417C_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISCLIENTONLY_OFFSET))(this);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPID_OFFSET))(this);
		}

		::System::Void set_PropID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_PROPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropRow* get_PropRowData()
		{
			return ((::RPG::GameCore::PropRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPROWDATA_OFFSET))(this);
		}

		::System::Void set_PropRowData(::RPG::GameCore::PropRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_PROPROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropDynamicResConfigItem* get_PropDynamicResData()
		{
			return ((::RPG::GameCore::PropDynamicResConfigItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPDYNAMICRESDATA_OFFSET))(this);
		}

		::System::Void set_PropDynamicResData(::RPG::GameCore::PropDynamicResConfigItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropDynamicResConfigItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_PROPDYNAMICRESDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropConfig* get_PropConfigData()
		{
			return ((::RPG::GameCore::PropConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPCONFIGDATA_OFFSET))(this);
		}

		::System::Void set_PropConfigData(::RPG::GameCore::PropConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_PROPCONFIGDATA_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::CampType get_CampID()
		{
			return ((::RPG::GameCore::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CAMPID_OFFSET))(this);
		}

		::System::Boolean get_IsCreateOnInitial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISCREATEONINITIAL_OFFSET))(this);
		}

		::RPG::GameCore::PropState get_State()
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::PropState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_STATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AnchorGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ANCHORGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_AnchorInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ANCHORINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_FarmCocoonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_FARMCOCOONID_OFFSET))(this);
		}

		::System::UInt32 get_FarmElementID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_FARMELEMENTID_OFFSET))(this);
		}

		::System::UInt32 get_RaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_RAIDID_OFFSET))(this);
		}

		::System::UInt32 get_ChestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CHESTID_OFFSET))(this);
		}

		::System::Boolean get_IsTrackRealtimePositionInMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISTRACKREALTIMEPOSITIONINMAP_OFFSET))(this);
		}

		::System::Boolean get_OverrideLevelGraphPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDELEVELGRAPHPATH_OFFSET))(this);
		}

		::System::String* get_LevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_LEVELGRAPHPATH_OFFSET))(this);
		}

		::RPG::GameCore::LevelTriggerInfo* get_Trigger()
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_TRIGGER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* get_CustomTriggerMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CUSTOMTRIGGERMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* get_CustomTriggerMapV2()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CUSTOMTRIGGERMAPV2_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* get_ValueSource()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_VALUESOURCE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* get_OverrideAdvEffectMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEADVEFFECTMAP_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* get_OverrideValueSource()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEVALUESOURCE_OFFSET))(this);
		}

		::System::Void set_OverrideValueSource(::RPG::GameCore::LevelGraphValueSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEVALUESOURCE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_DialogueGroups()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_DIALOGUEGROUPS_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_EVENTID_OFFSET))(this);
		}

		::System::Single get_HintRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HINTRANGE_OFFSET))(this);
		}

		::RPG::GameCore::StageObjectCapture* get_StageObjectCapture()
		{
			return ((::RPG::GameCore::StageObjectCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_STAGEOBJECTCAPTURE_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_MappingInfoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_MAPPINGINFOID_OFFSET))(this, a1);
		}

		::System::Int32 get_OverrideMapIconType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEMAPICONTYPE_OFFSET))(this);
		}

		::System::Void set_OverrideMapIconType(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEMAPICONTYPE_OFFSET))(this, a1);
		}

		::System::Single get_DialogueTriggerAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_DIALOGUETRIGGERANGLE_OFFSET))(this);
		}

		::System::UInt32 get_FirstDialogueGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_FIRSTDIALOGUEGROUPID_OFFSET))(this);
		}

		::RPG::GameCore::TalkChosenType get_TalkChosenType()
		{
			return ((::RPG::GameCore::TalkChosenType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_TALKCHOSENTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TalkDialogueGroupIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_TALKDIALOGUEGROUPIDLIST_OFFSET))(this);
		}

		::RPG::GameCore::LevelDialogInfo* get_LevelDialogInfo()
		{
			return ((::RPG::GameCore::LevelDialogInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_LEVELDIALOGINFO_OFFSET))(this);
		}

		::RPG::Client::TextID get_InteractTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_INTERACTTITLE_OFFSET))(this);
		}

		::RPG::GameCore::JsonEnum* get_InteractIconType()
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_INTERACTICONTYPE_OFFSET))(this);
		}

		::System::Boolean get_DialogueTriggerSkipFakeAvatarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_DIALOGUETRIGGERSKIPFAKEAVATARGET_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FakeAvatarInteractBlackList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_FAKEAVATARINTERACTBLACKLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelPropStateConfig*>* get_StateConfigs()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelPropStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_STATECONFIGS_OFFSET))(this);
		}

		::Class_1_FAB24B2D24758D65* get_PropExtraInfo()
		{
			return ((::Class_1_FAB24B2D24758D65*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPEXTRAINFO_OFFSET))(this);
		}

		::System::Void set_PropExtraInfo(::Class_1_FAB24B2D24758D65* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FAB24B2D24758D65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_PROPEXTRAINFO_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OverridePropName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEPROPNAME_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::PropStateIcon*>* get_OverrideMapStateIcons()
		{
			return ((::Il2CppArray<::RPG::GameCore::PropStateIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEMAPSTATEICONS_OFFSET))(this);
		}

		::System::Void set_OverrideMapStateIcons(::Il2CppArray<::RPG::GameCore::PropStateIcon*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PropStateIcon*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEMAPSTATEICONS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOverridePropSoundTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISOVERRIDEPROPSOUNDTRIGGER_OFFSET))(this);
		}

		::System::Single get_OverridePropSoundTriggerRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEPROPSOUNDTRIGGERRANGE_OFFSET))(this);
		}

		::System::Boolean get_IsOverrideTriggerValidGuestConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISOVERRIDETRIGGERVALIDGUESTCONFIG_OFFSET))(this);
		}

		::System::String* get_OverrideAudioSwitchGroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEAUDIOSWITCHGROUPNAME_OFFSET))(this);
		}

		::System::String* get_OverrideAudioSwitchName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEAUDIOSWITCHNAME_OFFSET))(this);
		}

		::System::UInt32 get_OverrideSoundConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDESOUNDCONFIGID_OFFSET))(this);
		}

		::RPG::GameCore::TriggerValidGuestConfig* get_TriggerValidGuestConfig()
		{
			return ((::RPG::GameCore::TriggerValidGuestConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_TRIGGERVALIDGUESTCONFIG_OFFSET))(this);
		}

		::System::Boolean get_LoadOnInitial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_LOADONINITIAL_OFFSET))(this);
		}

		::System::UInt16 get_PerformanceHideFlags()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PERFORMANCEHIDEFLAGS_OFFSET))(this);
		}

		::System::Boolean get_HideInCutScene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HIDEINCUTSCENE_OFFSET))(this);
		}

		::System::Boolean get_HideInStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HIDEINSTORY_OFFSET))(this);
		}

		::System::Boolean get_HideInPerformanceD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HIDEINPERFORMANCED_OFFSET))(this);
		}

		::System::Boolean get_HideInPerformanceE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HIDEINPERFORMANCEE_OFFSET))(this);
		}

		::System::Boolean get_IsNeedFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISNEEDFADEIN_OFFSET))(this);
		}

		::System::Void set_IsNeedFadeIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_ISNEEDFADEIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNeedFadeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISNEEDFADEOUT_OFFSET))(this);
		}

		::System::Void set_IsNeedFadeOut(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_ISNEEDFADEOUT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_TriggerNameList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_TRIGGERNAMELIST_OFFSET))(this);
		}

		::System::Void set_TriggerNameList(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_TRIGGERNAMELIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_OverrideBoardShowList()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEBOARDSHOWLIST_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_RotationFromConfig()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ROTATIONFROMCONFIG_OFFSET))(this);
		}

		::System::Void set_RotationFromConfig(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_ROTATIONFROMCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelPropSpawnConfig* get_SpawnConfig()
		{
			return ((::RPG::GameCore::LevelPropSpawnConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_SPAWNCONFIG_OFFSET))(this);
		}

		::System::Boolean get_LookAtPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_LOOKATPLAYER_OFFSET))(this);
		}

		::System::Single get_LookAtPlayerTriggerRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_LOOKATPLAYERTRIGGERRADIUS_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_OverrideLockRaycastOffset()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDELOCKRAYCASTOFFSET_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig* get_HoyoTagContainerOverrideConfig()
		{
			return ((::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HOYOTAGCONTAINEROVERRIDECONFIG_OFFSET))(this);
		}

		::RPG::GameCore::PropTagComponentCollection* get_PropTagComponentOverrideCollection()
		{
			return ((::RPG::GameCore::PropTagComponentCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPTAGCOMPONENTOVERRIDECOLLECTION_OFFSET))(this);
		}

		::System::Boolean get_DisableCameraDither()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_DISABLECAMERADITHER_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelEntityReferenceInfo*>* get_CameraCenterEntityList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelEntityReferenceInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CAMERACENTERENTITYLIST_OFFSET))(this);
		}

		::RPG::MVector3 get_AnchorCameraLookAtDetectOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ANCHORCAMERALOOKATDETECTOFFSET_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityVCameraConfig* get_CameraConfig()
		{
			return ((::RPG::GameCore::LevelEntityVCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CAMERACONFIG_OFFSET))(this);
		}

		::System::UInt32 get_SubMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_SUBMAPID_OFFSET))(this);
		}

		::System::Void set_SubMapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_SUBMAPID_OFFSET))(this, a1);
		}

		::System::Void _InitExcelAndJsonConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__INITEXCELANDJSONCONFIG_OFFSET))(this);
		}

		::System::Void _InitPropState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__INITPROPSTATE_OFFSET))(this);
		}

		::System::Void _ApplyGroupInitOverridePropState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__APPLYGROUPINITOVERRIDEPROPSTATE_OFFSET))(this);
		}

		::System::Void _InitPropExtraInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__INITPROPEXTRAINFO_OFFSET))(this);
		}

		::System::Void _InitTriggerNameList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__INITTRIGGERNAMELIST_OFFSET))(this);
		}

		::System::Void _InitPropMapInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__INITPROPMAPINFO_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_TOSTRING_OFFSET))(this);
		}

		::System::Void UpdateTriggerNameList(::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_UPDATETRIGGERNAMELIST_OFFSET))(this, a1);
		}

		::System::Void SetOverrideMapStateIcons(::Il2CppArray<::RPG::GameCore::LevelPropStateIcon*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelPropStateIcon*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SETOVERRIDEMAPSTATEICONS_OFFSET))(this, a1);
		}

		::System::Void SetCustomParameters(::RPG::GameCore::LevelPropParameter* a1, ::RPG::GameCore::LevelPropParameter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPropParameter*, ::RPG::GameCore::LevelPropParameter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SETCUSTOMPARAMETERS_OFFSET))(this, a1, a2);
		}

		::System::String* GetRealLevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GETREALLEVELGRAPHPATH_OFFSET))(this);
		}
	};
}
