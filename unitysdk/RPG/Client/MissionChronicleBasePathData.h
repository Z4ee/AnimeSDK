#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChronicleStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChronicleNodeType.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::GameCore { class ChronicleCustomShowCondition; }
namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }
namespace RPG::GameCore { class ChronicleNodeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_CHECKISCANTAKEMISSION_OFFSET UNITYSDK_OFFSET(0xA8ADAD0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_CHECKISMIDDLEMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xA8ADC60)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8AC990)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GETCURPROCESSINGMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA8ADA90)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GETSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xA8ADCA0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_BELONGLINE_OFFSET UNITYSDK_OFFSET(0xA8AE4B0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_COMPATIONPARTNERLIST_OFFSET UNITYSDK_OFFSET(0xA8AE7E0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_CUSTOMSHOWCONDITIONLIST_OFFSET UNITYSDK_OFFSET(0xA8AE9E0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xA8AE820)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA8AE490)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA8AE600)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISBASELINE_OFFSET UNITYSDK_OFFSET(0xA8AE850)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISBELONGNOWORLD_OFFSET UNITYSDK_OFFSET(0xA8AE4F0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISEARLYACCESSEFFECTED_OFFSET UNITYSDK_OFFSET(0xA8AE990)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xA8AE970)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISFORCEEXPAND_OFFSET UNITYSDK_OFFSET(0xA8AE9B0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISPREDICTIONSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xA8AE870)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISSKIPTYPE_OFFSET UNITYSDK_OFFSET(0xA8AE2C0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA8ADB70)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8AE590)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MAINMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xA8AE570)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MISSIONCONCLUSION_OFFSET UNITYSDK_OFFSET(0xA8AE7C0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MISSIONTYPECOLOR_OFFSET UNITYSDK_OFFSET(0xA8AE7A0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MISSIONTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xA8AE780)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MULTIMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xA8AE800)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_NODENAMEPARAM_OFFSET UNITYSDK_OFFSET(0xA8AE5A0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0xA8AE550)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ORIGINMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8AE830)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_POSX_OFFSET UNITYSDK_OFFSET(0xA8AE510)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_POSY_OFFSET UNITYSDK_OFFSET(0xA8AE530)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_STARTMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8AE5C0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA8ADB60)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xA8AE910)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA8AE5E0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0xA8AE4D0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_WORLDPATHDATA_OFFSET UNITYSDK_OFFSET(0xA8AE9D0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_ISCANSTEPNEXTPATH_OFFSET UNITYSDK_OFFSET(0xA8ADA10)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_ISCONNECTMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xA8ADA50)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_ISCUSTOMCONDITIONSHOW_OFFSET UNITYSDK_OFFSET(0xA8ADDA0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_ISSHOWEARLYACCESSEFFECTED_OFFSET UNITYSDK_OFFSET(0xA8ADCE0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_ISWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xA8ADD60)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_REGISTERCHECKPREFSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA8ACA90)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0xA8ACAE0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SETMOCKFINISHNODEDATA_OFFSET UNITYSDK_OFFSET(0xA8AD9C0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_BELONGLINE_OFFSET UNITYSDK_OFFSET(0xA8AE4C0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_COMPATIONPARTNERLIST_OFFSET UNITYSDK_OFFSET(0xA8AE7F0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_CUSTOMSHOWCONDITIONLIST_OFFSET UNITYSDK_OFFSET(0xA8AE9F0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA8AE4A0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ISBASELINE_OFFSET UNITYSDK_OFFSET(0xA8AE860)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ISBELONGNOWORLD_OFFSET UNITYSDK_OFFSET(0xA8AE500)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ISEARLYACCESSEFFECTED_OFFSET UNITYSDK_OFFSET(0xA8AE9A0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xA8AE980)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ISFORCEEXPAND_OFFSET UNITYSDK_OFFSET(0xA8AE9C0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_MAINMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xA8AE580)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_MISSIONCONCLUSION_OFFSET UNITYSDK_OFFSET(0xA8AE7D0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_MISSIONTYPECOLOR_OFFSET UNITYSDK_OFFSET(0xA8AE7B0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_MISSIONTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xA8AE790)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_MULTIMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xA8AE810)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_NODENAMEPARAM_OFFSET UNITYSDK_OFFSET(0xA8AE5B0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0xA8AE560)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ORIGINMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8AE840)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_POSX_OFFSET UNITYSDK_OFFSET(0xA8AE520)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_POSY_OFFSET UNITYSDK_OFFSET(0xA8AE540)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_STARTMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8AE5D0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xA8AE5F0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_WORLDID_OFFSET UNITYSDK_OFFSET(0xA8AE4E0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__CHECKISMISSIONDISABLE_OFFSET UNITYSDK_OFFSET(0xA8ADE30)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__CHECKISMISSIONIDEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xA8ADEE0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__CHECKISWORLDEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xA8AE110)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA8AC910)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__GETCURCHRONICLESTATUS_OFFSET UNITYSDK_OFFSET(0xA8ADDF0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETCOMPATIONPARTNERLIST_OFFSET UNITYSDK_OFFSET(0xA8AD320)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETCUSTOMSHOWCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xA8AD890)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETCUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xA8AD750)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8ACD40)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETMISSIONCONCLUSION_OFFSET UNITYSDK_OFFSET(0xA8AD280)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETMISSIONTYPECOLOR_OFFSET UNITYSDK_OFFSET(0xA8AE310)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xA8AD0B0)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETMULTIMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xA8AD480)
#define RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETTITLE_OFFSET UNITYSDK_OFFSET(0xA8ACDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleBasePathData_TypeDefinitionIndex = 60848;

	class MissionChronicleBasePathData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DefalutWorldID = 0x65; // 0x0
		::System::String* _BaseImagePath; // 0x10
		::System::Action* _CheckPrefsCallback; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _MultiMissionIDList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* _CustomUnlockConditionConfigList; // 0x28
		::System::String* _FemaleImagePath; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>* _CustomShowConditionList_k__BackingField; // 0x38
		::System::String* _MissionTypeColor_k__BackingField; // 0x40
		::System::String* _MissionTypeIconPath_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _CompationPartnerList_k__BackingField; // 0x50
		::RPG::Client::TextID _MissionConclusion_k__BackingField; // 0x58
		::System::UInt32 _OriginMainMissionID_k__BackingField; // 0x68
		::System::Int32 _StoryLineID; // 0x6C
		::System::UInt32 _ID_k__BackingField; // 0x70
		::RPG::GameCore::ChronicleNodeType _NodeType_k__BackingField; // 0x74
		::System::UInt32 _BelongLine_k__BackingField; // 0x78
		::System::UInt32 _NodeNameParam_k__BackingField; // 0x7C
		::System::UInt32 _StartMissionID_k__BackingField; // 0x80
		::System::Boolean _IsBaseLine_k__BackingField; // 0x84
		::System::Boolean _IsForceExpand_k__BackingField; // 0x85
		::System::Boolean _IsEarlyAccess_k__BackingField; // 0x86
		::System::Boolean _IsEarlyAccessEffected_k__BackingField; // 0x87
		::System::Int32 _PosX_k__BackingField; // 0x88
		::RPG::GameCore::MainMissionType _MainMissionType_k__BackingField; // 0x8C
		::System::Int32 _PosY_k__BackingField; // 0x90
		::RPG::Client::TextID _Title_k__BackingField; // 0x98
		::System::Boolean _IsBelongNoWorld_k__BackingField; // 0xA8
		::System::UInt32 _WorldID_k__BackingField; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void RegisterCheckPrefsCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_REGISTERCHECKPREFSCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetData(::RPG::GameCore::ChronicleNodeConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChronicleNodeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SETDATA_OFFSET))(this, config);
		}

		::System::Void SetMockFinishNodeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SETMOCKFINISHNODEDATA_OFFSET))(this);
		}

		::System::Boolean IsCanStepNextPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_ISCANSTEPNEXTPATH_OFFSET))(this);
		}

		::System::Boolean IsConnectMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_ISCONNECTMISSIONFINISH_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* GetCurProcessingMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GETCURPROCESSINGMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean CheckIsCanTakeMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_CHECKISCANTAKEMISSION_OFFSET))(this);
		}

		::System::Boolean CheckIsMiddleMissionState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_CHECKISMIDDLEMISSIONSTATE_OFFSET))(this);
		}

		::System::Int32 GetStoryLineID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GETSTORYLINEID_OFFSET))(this);
		}

		::System::Boolean IsShowEarlyAccessEffected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_ISSHOWEARLYACCESSEFFECTED_OFFSET))(this);
		}

		::System::Boolean IsWorldUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_ISWORLDUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsCustomConditionShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_ISCUSTOMCONDITIONSHOW_OFFSET))(this);
		}

		::RPG::Client::ChronicleStatus _GetCurChronicleStatus()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__GETCURCHRONICLESTATUS_OFFSET))(this);
		}

		::System::Boolean _CheckIsMissionDisable(::System::UInt32 missionId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__CHECKISMISSIONDISABLE_OFFSET))(this, missionId);
		}

		::System::Boolean _CheckIsMissionIDEarlyAccess(::System::UInt32 missionId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__CHECKISMISSIONIDEARLYACCESS_OFFSET))(this, missionId);
		}

		::System::Boolean _CheckIsWorldEarlyAccess(::System::UInt32 missionId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__CHECKISWORLDEARLYACCESS_OFFSET))(this, missionId);
		}

		::System::Void _SetMainMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETMAINMISSIONID_OFFSET))(this);
		}

		::System::Void _SetTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETTITLE_OFFSET))(this);
		}

		::System::Void _SetMissionType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETMISSIONTYPE_OFFSET))(this);
		}

		::System::Void _SetMissionTypeColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETMISSIONTYPECOLOR_OFFSET))(this);
		}

		::System::Void _SetMissionConclusion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETMISSIONCONCLUSION_OFFSET))(this);
		}

		::System::Void _SetCompationPartnerList(::Il2CppArray<::System::UInt32>* compationPartnerArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETCOMPATIONPARTNERLIST_OFFSET))(this, compationPartnerArray);
		}

		::System::Void _SetMultiMissionIDList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETMULTIMISSIONIDLIST_OFFSET))(this);
		}

		::System::Void _SetCustomUnlockConditionConfigList(::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* customUnlockConditionArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETCUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this, customUnlockConditionArray);
		}

		::System::Void _SetCustomShowConditionConfigList(::Il2CppArray<::RPG::GameCore::ChronicleCustomShowCondition*>* customShowConditionArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChronicleCustomShowCondition*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA__SETCUSTOMSHOWCONDITIONCONFIGLIST_OFFSET))(this, customShowConditionArray);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_BelongLine()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_BELONGLINE_OFFSET))(this);
		}

		::System::Void set_BelongLine(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_BELONGLINE_OFFSET))(this, value);
		}

		::System::UInt32 get_WorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_WORLDID_OFFSET))(this);
		}

		::System::Void set_WorldID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_WORLDID_OFFSET))(this, value);
		}

		::System::Boolean get_IsBelongNoWorld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISBELONGNOWORLD_OFFSET))(this);
		}

		::System::Void set_IsBelongNoWorld(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ISBELONGNOWORLD_OFFSET))(this, value);
		}

		::System::Int32 get_PosX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_POSX_OFFSET))(this);
		}

		::System::Void set_PosX(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_POSX_OFFSET))(this, value);
		}

		::System::Int32 get_PosY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_POSY_OFFSET))(this);
		}

		::System::Void set_PosY(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_POSY_OFFSET))(this, value);
		}

		::RPG::GameCore::ChronicleNodeType get_NodeType()
		{
			return ((::RPG::GameCore::ChronicleNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_NODETYPE_OFFSET))(this);
		}

		::System::Void set_NodeType(::RPG::GameCore::ChronicleNodeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChronicleNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_NODETYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::MainMissionType get_MainMissionType()
		{
			return ((::RPG::GameCore::MainMissionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MAINMISSIONTYPE_OFFSET))(this);
		}

		::System::Void set_MainMissionType(::RPG::GameCore::MainMissionType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_MAINMISSIONTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MAINMISSIONID_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_MainMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MAINMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_NodeNameParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_NODENAMEPARAM_OFFSET))(this);
		}

		::System::Void set_NodeNameParam(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_NODENAMEPARAM_OFFSET))(this, value);
		}

		::System::UInt32 get_StartMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_STARTMISSIONID_OFFSET))(this);
		}

		::System::Void set_StartMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_STARTMISSIONID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_TITLE_OFFSET))(this, value);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::ChronicleStatus get_Status()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_STATUS_OFFSET))(this);
		}

		::System::String* get_MissionTypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MISSIONTYPEICONPATH_OFFSET))(this);
		}

		::System::Void set_MissionTypeIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_MISSIONTYPEICONPATH_OFFSET))(this, value);
		}

		::System::String* get_MissionTypeColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MISSIONTYPECOLOR_OFFSET))(this);
		}

		::System::Void set_MissionTypeColor(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_MISSIONTYPECOLOR_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_MissionConclusion()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MISSIONCONCLUSION_OFFSET))(this);
		}

		::System::Void set_MissionConclusion(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_MISSIONCONCLUSION_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CompationPartnerList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_COMPATIONPARTNERLIST_OFFSET))(this);
		}

		::System::Void set_CompationPartnerList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_COMPATIONPARTNERLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MultiMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_MULTIMISSIONIDLIST_OFFSET))(this);
		}

		::System::Void set_MultiMissionIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_MULTIMISSIONIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* get_CustomUnlockConditionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this);
		}

		::System::UInt32 get_OriginMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ORIGINMAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_OriginMainMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ORIGINMAINMISSIONID_OFFSET))(this, value);
		}

		::System::Boolean get_IsBaseLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISBASELINE_OFFSET))(this);
		}

		::System::Void set_IsBaseLine(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ISBASELINE_OFFSET))(this, value);
		}

		::System::Boolean get_IsSkipType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISSKIPTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsPredictionShowType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISPREDICTIONSHOWTYPE_OFFSET))(this);
		}

		::System::Int32 get_StoryLineID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISEARLYACCESS_OFFSET))(this);
		}

		::System::Void set_IsEarlyAccess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ISEARLYACCESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsEarlyAccessEffected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISEARLYACCESSEFFECTED_OFFSET))(this);
		}

		::System::Void set_IsEarlyAccessEffected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ISEARLYACCESSEFFECTED_OFFSET))(this, value);
		}

		::System::Boolean get_IsForceExpand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_ISFORCEEXPAND_OFFSET))(this);
		}

		::System::Void set_IsForceExpand(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_ISFORCEEXPAND_OFFSET))(this, value);
		}

		::RPG::Client::MissionChronicleMainPathData* get_WorldPathData()
		{
			return ((::RPG::Client::MissionChronicleMainPathData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_WORLDPATHDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>* get_CustomShowConditionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_GET_CUSTOMSHOWCONDITIONLIST_OFFSET))(this);
		}

		::System::Void set_CustomShowConditionList(::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEBASEPATHDATA_SET_CUSTOMSHOWCONDITIONLIST_OFFSET))(this, value);
		}
	};
}
