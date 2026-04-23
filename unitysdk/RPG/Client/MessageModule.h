#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_28.h"
#include "unitysdk/Enum_3_DB663931210BBC27_29.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/MessageShowInUIType.h"
#include "unitysdk/RPG/GameCore/PhoneMessagePlayMode.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_269E41CA6C7C0287;
namespace Proto { class ItemList; }
namespace RPG::Client { class MessageContactData; }
namespace RPG::Client { class MessageGroupData; }
namespace RPG::Client { class MessageItemData; }
namespace RPG::Client { class MessageSectionData; }
namespace RPG::Client { class PhoneNoticeData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class MessageItemRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGEMODULE_FETCHALLCONTACTSTATUS_OFFSET UNITYSDK_OFFSET(0xA894860)
#define RPG_CLIENT_MESSAGEMODULE_FINISHITEMBYCHOICE_OFFSET UNITYSDK_OFFSET(0xA890B10)
#define RPG_CLIENT_MESSAGEMODULE_FINISHITEMINHISTORY_OFFSET UNITYSDK_OFFSET(0xA8913C0)
#define RPG_CLIENT_MESSAGEMODULE_GETALLCONTACTS_OFFSET UNITYSDK_OFFSET(0xA8953E0)
#define RPG_CLIENT_MESSAGEMODULE_GETCONTACTBYGROUPID_OFFSET UNITYSDK_OFFSET(0xA8955B0)
#define RPG_CLIENT_MESSAGEMODULE_GETPHONENOTICES_OFFSET UNITYSDK_OFFSET(0xA893500)
#define RPG_CLIENT_MESSAGEMODULE_GETWAITINGCONTACTS_OFFSET UNITYSDK_OFFSET(0xA893980)
#define RPG_CLIENT_MESSAGEMODULE_GET_MESSAGENOTICESTOSHOW_OFFSET UNITYSDK_OFFSET(0xA894200)
#define RPG_CLIENT_MESSAGEMODULE_GET_RINGINGMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xA8941E0)
#define RPG_CLIENT_MESSAGEMODULE_GET_WAITINGCONTACTIDS_OFFSET UNITYSDK_OFFSET(0xA89A850)
#define RPG_CLIENT_MESSAGEMODULE_GOLINK_OFFSET UNITYSDK_OFFSET(0xA8918C0)
#define RPG_CLIENT_MESSAGEMODULE_HASBATTLE_OFFSET UNITYSDK_OFFSET(0xA8933B0)
#define RPG_CLIENT_MESSAGEMODULE_HASNOTICE_OFFSET UNITYSDK_OFFSET(0xA893350)
#define RPG_CLIENT_MESSAGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA8947D0)
#define RPG_CLIENT_MESSAGEMODULE_ISITEMCHOSEN_OFFSET UNITYSDK_OFFSET(0xA891870)
#define RPG_CLIENT_MESSAGEMODULE_ISITEMFINISHED_OFFSET UNITYSDK_OFFSET(0xA88DD30)
#define RPG_CLIENT_MESSAGEMODULE_ISSHOWINDIALOG_OFFSET UNITYSDK_OFFSET(0xA8945F0)
#define RPG_CLIENT_MESSAGEMODULE_MISSIONDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xA895820)
#define RPG_CLIENT_MESSAGEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA894A10)
#define RPG_CLIENT_MESSAGEMODULE_PREPAREGROUPDATAFORPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xA892380)
#define RPG_CLIENT_MESSAGEMODULE_RECORDMESSAGESEEN_OFFSET UNITYSDK_OFFSET(0xA894CD0)
#define RPG_CLIENT_MESSAGEMODULE_REFRESHSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA8951E0)
#define RPG_CLIENT_MESSAGEMODULE_REQUESTUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xA894F30)
#define RPG_CLIENT_MESSAGEMODULE_SAFEINITCONTACTDATA_OFFSET UNITYSDK_OFFSET(0xA895070)
#define RPG_CLIENT_MESSAGEMODULE_SAVEMESSAGEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA891E80)
#define RPG_CLIENT_MESSAGEMODULE_SET_MESSAGENOTICESTOSHOW_OFFSET UNITYSDK_OFFSET(0xA894210)
#define RPG_CLIENT_MESSAGEMODULE_SET_RINGINGMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xA8941F0)
#define RPG_CLIENT_MESSAGEMODULE_SET_WAITINGCONTACTIDS_OFFSET UNITYSDK_OFFSET(0xA89A860)
#define RPG_CLIENT_MESSAGEMODULE_SHOWGROUPREDDOT_OFFSET UNITYSDK_OFFSET(0xA895750)
#define RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGEADAPTIVE_OFFSET UNITYSDK_OFFSET(0xA893E40)
#define RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGE_OFFSET UNITYSDK_OFFSET(0xA893BC0)
#define RPG_CLIENT_MESSAGEMODULE_STARTMESSAGEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA891A10)
#define RPG_CLIENT_MESSAGEMODULE_TRYGETGROUPCURRENTSECTION_OFFSET UNITYSDK_OFFSET(0xA895660)
#define RPG_CLIENT_MESSAGEMODULE_TRYGETMESSAGEGROUP_OFFSET UNITYSDK_OFFSET(0xA892F50)
#define RPG_CLIENT_MESSAGEMODULE_TRYSHOWPHONENOTICE_OFFSET UNITYSDK_OFFSET(0xA8930D0)
#define RPG_CLIENT_MESSAGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA89A050)
#define RPG_CLIENT_MESSAGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA896980)
#define RPG_CLIENT_MESSAGEMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA89AB70)
#define RPG_CLIENT_MESSAGEMODULE__COLLECTNEXTITEMSTOSPECIALDIALOG_OFFSET UNITYSDK_OFFSET(0xA894400)
#define RPG_CLIENT_MESSAGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA89A870)
#define RPG_CLIENT_MESSAGEMODULE__DELETEGROUP_OFFSET UNITYSDK_OFFSET(0xA895A30)
#define RPG_CLIENT_MESSAGEMODULE__DELETESECTIONDATA_OFFSET UNITYSDK_OFFSET(0xA896660)
#define RPG_CLIENT_MESSAGEMODULE__DOFINISHITEMBYCHOICE_OFFSET UNITYSDK_OFFSET(0xA8911E0)
#define RPG_CLIENT_MESSAGEMODULE__GETSPECIALDIALOGTYPE_OFFSET UNITYSDK_OFFSET(0xA894710)
#define RPG_CLIENT_MESSAGEMODULE__HASSECTIONDATA_OFFSET UNITYSDK_OFFSET(0xA890CE0)
#define RPG_CLIENT_MESSAGEMODULE__INITSECTION_OFFSET UNITYSDK_OFFSET(0xA895ED0)
#define RPG_CLIENT_MESSAGEMODULE__INITSHOWINSPECIALDIALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0xA894220)
#define RPG_CLIENT_MESSAGEMODULE__ISITEMRECORDEDINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA891810)
#define RPG_CLIENT_MESSAGEMODULE__ISPERFORMANCESECTION_OFFSET UNITYSDK_OFFSET(0xA890E30)
#define RPG_CLIENT_MESSAGEMODULE__ONFINISHITEMIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA898490)
#define RPG_CLIENT_MESSAGEMODULE__ONFINISHPERFORMSECTIONIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA899720)
#define RPG_CLIENT_MESSAGEMODULE__ONFINISHSECTIONIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA898960)
#define RPG_CLIENT_MESSAGEMODULE__ONGETMISSIONMESSAGESCRSP_OFFSET UNITYSDK_OFFSET(0xA899B20)
#define RPG_CLIENT_MESSAGEMODULE__ONGETNPCMESSAGEGROUPSCRSP_OFFSET UNITYSDK_OFFSET(0xA896FF0)
#define RPG_CLIENT_MESSAGEMODULE__ONGETNPCSTATUSSCRSP_OFFSET UNITYSDK_OFFSET(0xA896B40)
#define RPG_CLIENT_MESSAGEMODULE__ONMESSAGENOTICECLOSE_OFFSET UNITYSDK_OFFSET(0xA894170)
#define RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGEGROUPCHECKED_OFFSET UNITYSDK_OFFSET(0xA89A340)
#define RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGETRYFINISHGROUP_OFFSET UNITYSDK_OFFSET(0xA89A3A0)
#define RPG_CLIENT_MESSAGEMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA898C10)
#define RPG_CLIENT_MESSAGEMODULE__ONRAIDDATACHANGED_OFFSET UNITYSDK_OFFSET(0xA89A7C0)
#define RPG_CLIENT_MESSAGEMODULE__ONSCHEDULEREFRESH_OFFSET UNITYSDK_OFFSET(0xA89A770)
#define RPG_CLIENT_MESSAGEMODULE__ONSTORYLINECHANGE_OFFSET UNITYSDK_OFFSET(0xA89A430)
#define RPG_CLIENT_MESSAGEMODULE__RECORDITEMCHOICES_OFFSET UNITYSDK_OFFSET(0xA896900)
#define RPG_CLIENT_MESSAGEMODULE__RECORDITEMINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA890F50)
#define RPG_CLIENT_MESSAGEMODULE__RECORDMESSAGESEEN_OFFSET UNITYSDK_OFFSET(0xA894D20)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHALLGROUPVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA89A480)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHCONTACT_OFFSET UNITYSDK_OFFSET(0xA891DB0)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHFROMGROUP_OFFSET UNITYSDK_OFFSET(0xA895380)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHWAITINGCONTACT_OFFSET UNITYSDK_OFFSET(0xA895D20)
#define RPG_CLIENT_MESSAGEMODULE__RESETSECTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xA896190)
#define RPG_CLIENT_MESSAGEMODULE__SAFEGETCONTACTDATA_OFFSET UNITYSDK_OFFSET(0xA895BE0)
#define RPG_CLIENT_MESSAGEMODULE__SAFEGETGROUP_OFFSET UNITYSDK_OFFSET(0xA891C70)
#define RPG_CLIENT_MESSAGEMODULE__SAFEGETSECTIONDATA_OFFSET UNITYSDK_OFFSET(0xA890ED0)
#define RPG_CLIENT_MESSAGEMODULE__TRYFINISHITEMINHISTORY_OFFSET UNITYSDK_OFFSET(0xA891590)
#define RPG_CLIENT_MESSAGEMODULE__TRYFINISHSECTION_OFFSET UNITYSDK_OFFSET(0xA898620)
#define RPG_CLIENT_MESSAGEMODULE__TRYSHOWREWARD_OFFSET UNITYSDK_OFFSET(0xA898AD0)
#define RPG_CLIENT_MESSAGEMODULE__UPDATEGROUP_OFFSET UNITYSDK_OFFSET(0xA895E00)
#define RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONACT_OFFSET UNITYSDK_OFFSET(0xA891A90)
#define RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xA892FD0)
#define RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONSTATUS_OFFSET UNITYSDK_OFFSET(0xA896020)
#define RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA89AD10)
#define RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA89ADA0)
#define RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA89AE60)
#define RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA89AE00)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageModule_TypeDefinitionIndex = 60839;

	class MessageModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::String** StaticGet__LEVEL_GRAPH_PATH_BEGIN_REPLY_NO_NOTICE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MessageModule_TypeDefinitionIndex)->GetStaticField(0x30B50);
		}
		static ::System::String** StaticGet__LEVEL_GRAPH_PATH_BEGIN_REPLY_WITH_NOTICE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MessageModule_TypeDefinitionIndex)->GetStaticField(0x30B58);
		}
		static ::System::String** StaticGet__LEVEL_GRAPH_PATH_BEGIN_REPLY_LOGIC_CONTROL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MessageModule_TypeDefinitionIndex)->GetStaticField(0x30B60);
		}
		static ::RPG::GameCore::StringHash* StaticGet__VARIABLE_KEY_WITH_NOTICEE()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(MessageModule_TypeDefinitionIndex)->GetStaticField(0xC410);
		}
		static ::RPG::GameCore::StringHash* StaticGet__VARIABLE_KEY_CHARACTER_POSTURE()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(MessageModule_TypeDefinitionIndex)->GetStaticField(0xC414);
		}
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SubLineSectionIDs; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WaitingContactIDs_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageGroupData*>* _AllGroupDatas; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* _MessageNoticesToShow_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageContactData*>* _AllContactDatas; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ActingSentItemIDs; // 0x38
		::RPG::GameCore::LevelGraphComponent* _ShowPhoneNoticeLevelGraph; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _HistorySentItemIDs; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SendingFinishSectionIDs; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageShowInUIType>* _ItemToSpecialDialogIDMap; // 0x58
		::System::UInt32 _RingingMessageGroupID_k__BackingField; // 0x60
		::System::UInt32 FINISH_SECTION_INTERVAL; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__CCTOR_OFFSET))();
		}

		::System::Void FinishItemByChoice(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_FINISHITEMBYCHOICE_OFFSET))(this, itemID);
		}

		::System::Void FinishItemInHistory(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_FINISHITEMINHISTORY_OFFSET))(this, itemID);
		}

		::System::Boolean IsItemFinished(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ISITEMFINISHED_OFFSET))(this, itemID);
		}

		::System::Boolean IsItemChosen(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ISITEMCHOSEN_OFFSET))(this, itemID);
		}

		::System::Void GoLink(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GOLINK_OFFSET))(this, itemID);
		}

		::System::Void _DoFinishItemByChoice(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__DOFINISHITEMBYCHOICE_OFFSET))(this, itemID);
		}

		::System::Void _TryFinishItemInHistory(::RPG::GameCore::MessageItemRow* itemRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__TRYFINISHITEMINHISTORY_OFFSET))(this, itemRow);
		}

		::System::Void StartMessagePerformance(::System::UInt32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_STARTMESSAGEPERFORMANCE_OFFSET))(this, sectionID);
		}

		::System::Boolean SaveMessagePerformance(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SAVEMESSAGEPERFORMANCE_OFFSET))(this, sectionID);
		}

		::System::Void PrepareGroupDataForPerformanceReplay(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_PREPAREGROUPDATAFORPERFORMANCEREPLAY_OFFSET))(this, groupID);
		}

		::System::Void _RecordItemInPerformance(::RPG::Client::MessageSectionData* sectionData, ::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RECORDITEMINPERFORMANCE_OFFSET))(this, sectionData, itemID);
		}

		::System::Boolean _IsPerformanceSection(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ISPERFORMANCESECTION_OFFSET))(this, sectionID);
		}

		::System::Boolean _IsItemRecordedInPerformance(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ISITEMRECORDEDINPERFORMANCE_OFFSET))(this, itemID);
		}

		::System::Boolean TryShowPhoneNotice(::RPG::Client::MessageSectionData* sectionData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_TRYSHOWPHONENOTICE_OFFSET))(this, sectionData);
		}

		::System::Boolean HasNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_HASNOTICE_OFFSET))(this);
		}

		::System::Boolean HasBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_HASBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PhoneNoticeData*>* GetPhoneNotices()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PhoneNoticeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GETPHONENOTICES_OFFSET))(this);
		}

		::System::Boolean ShowMessageNoticePage(::System::UInt32 messageGroupID, ::System::Boolean withHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGE_OFFSET))(this, messageGroupID, withHint);
		}

		::System::Boolean ShowMessageNoticePageAdaptive(::System::UInt32 messageGroupID, ::System::Boolean withHint, ::RPG::GameCore::PhoneMessagePlayMode playMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::PhoneMessagePlayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGEADAPTIVE_OFFSET))(this, messageGroupID, withHint, playMode);
		}

		::System::Void _OnMessageNoticeClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONMESSAGENOTICECLOSE_OFFSET))(this);
		}

		::System::UInt32 get_RingingMessageGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GET_RINGINGMESSAGEGROUPID_OFFSET))(this);
		}

		::System::Void set_RingingMessageGroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SET_RINGINGMESSAGEGROUPID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* get_MessageNoticesToShow()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GET_MESSAGENOTICESTOSHOW_OFFSET))(this);
		}

		::System::Void set_MessageNoticesToShow(::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SET_MESSAGENOTICESTOSHOW_OFFSET))(this, value);
		}

		::System::Void _InitShowInSpecialDialogItemIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__INITSHOWINSPECIALDIALOGITEMIDS_OFFSET))(this);
		}

		::System::Void _CollectNextItemsToSpecialDialog(::RPG::GameCore::MessageItemRow* itemRow, ::RPG::Client::MessageShowInUIType uiShowType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*, ::RPG::Client::MessageShowInUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__COLLECTNEXTITEMSTOSPECIALDIALOG_OFFSET))(this, itemRow, uiShowType);
		}

		::System::Boolean IsShowInDialog(::System::UInt32 itemID, ::RPG::Client::MessageShowInUIType uiType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::MessageShowInUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ISSHOWINDIALOG_OFFSET))(this, itemID, uiType);
		}

		::RPG::Client::MessageShowInUIType _GetSpecialDialogType(::System::UInt32 itemID)
		{
			return ((::RPG::Client::MessageShowInUIType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__GETSPECIALDIALOGTYPE_OFFSET))(this, itemID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_INIT_OFFSET))(this);
		}

		::System::Void FetchAllContactStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_FETCHALLCONTACTSTATUS_OFFSET))(this);
		}

		::System::Void RecordMessageSeen(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_RECORDMESSAGESEEN_OFFSET))(this, groupID);
		}

		::System::Void RequestUnlockData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_REQUESTUNLOCKDATA_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void SafeInitContactData(::System::UInt32 contactID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SAFEINITCONTACTDATA_OFFSET))(this, contactID);
		}

		::System::Void RefreshSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_REFRESHSCHEDULE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageContactData*>* GetAllContacts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContactData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GETALLCONTACTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageContactData*>* GetWaitingContacts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContactData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GETWAITINGCONTACTS_OFFSET))(this);
		}

		::RPG::Client::MessageContactData* GetContactByGroupID(::System::UInt32 groupID)
		{
			return ((::RPG::Client::MessageContactData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GETCONTACTBYGROUPID_OFFSET))(this, groupID);
		}

		::RPG::Client::MessageGroupData* TryGetMessageGroup(::System::UInt32 groupID)
		{
			return ((::RPG::Client::MessageGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_TRYGETMESSAGEGROUP_OFFSET))(this, groupID);
		}

		::RPG::Client::MessageSectionData* TryGetGroupCurrentSection(::System::UInt32 groupID)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_TRYGETGROUPCURRENTSECTION_OFFSET))(this, groupID);
		}

		::System::Boolean ShowGroupRedDot(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOWGROUPREDDOT_OFFSET))(this, groupID);
		}

		::RPG::Client::Promises::IPromise* MissionDataPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_MISSIONDATAPREPARED_OFFSET))(this);
		}

		::RPG::Client::MessageGroupData* _SafeGetGroup(::System::UInt32 groupID)
		{
			return ((::RPG::Client::MessageGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__SAFEGETGROUP_OFFSET))(this, groupID);
		}

		::System::Void _DeleteGroup(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__DELETEGROUP_OFFSET))(this, groupID);
		}

		::System::Void _UpdateGroup(::RPG::Client::MessageGroupData* groupData, ::Enum_3_DB663931210BBC27_29 status, ::System::Int64 lastTime)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*, ::Enum_3_DB663931210BBC27_29, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATEGROUP_OFFSET))(this, groupData, status, lastTime);
		}

		::System::Void _RefreshFromGroup(::RPG::Client::MessageGroupData* groupData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHFROMGROUP_OFFSET))(this, groupData);
		}

		::System::Void _RefreshContact(::RPG::Client::MessageGroupData* groupData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHCONTACT_OFFSET))(this, groupData);
		}

		::System::Void _RefreshWaitingContact(::RPG::Client::MessageContactData* contactData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContactData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHWAITINGCONTACT_OFFSET))(this, contactData);
		}

		::RPG::Client::MessageContactData* _SafeGetContactData(::System::UInt32 contactID, ::System::Boolean& isNew)
		{
			return ((::RPG::Client::MessageContactData*(*)(::PVOID, ::System::UInt32, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__SAFEGETCONTACTDATA_OFFSET))(this, contactID, isNew);
		}

		::System::Void _InitSection(::System::UInt32 sectionID, ::Class_1_269E41CA6C7C0287* sectionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_269E41CA6C7C0287*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__INITSECTION_OFFSET))(this, sectionID, sectionInfo);
		}

		::System::Void _UpdateSectionStatus(::RPG::Client::MessageSectionData* sectionData, ::Enum_3_DB663931210BBC27_28 status)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONSTATUS_OFFSET))(this, sectionData, status);
		}

		::System::Void _UpdateSectionAct(::System::UInt32 sectionID, ::System::Boolean shouldInAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONACT_OFFSET))(this, sectionID, shouldInAct);
		}

		::System::Void _UpdateSectionHistory(::RPG::Client::MessageSectionData* sectionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONHISTORY_OFFSET))(this, sectionData);
		}

		::System::Void _ResetSectionHistory(::RPG::Client::MessageSectionData* sectionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RESETSECTIONHISTORY_OFFSET))(this, sectionData);
		}

		::RPG::Client::MessageSectionData* _SafeGetSectionData(::System::UInt32 sectionID)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__SAFEGETSECTIONDATA_OFFSET))(this, sectionID);
		}

		::System::Void _DeleteSectionData(::System::UInt32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__DELETESECTIONDATA_OFFSET))(this, sectionID);
		}

		::System::Boolean _HasSectionData(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__HASSECTIONDATA_OFFSET))(this, sectionID);
		}

		::System::Void _RecordItemChoices(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RECORDITEMCHOICES_OFFSET))(this, itemID);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetNpcStatusScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONGETNPCSTATUSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetNpcMessageGroupScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONGETNPCMESSAGEGROUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFinishItemIdScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONFINISHITEMIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFinishSectionIdScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONFINISHSECTIONIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnFinishPerformSectionIdScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONFINISHPERFORMSECTIONIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetMissionMessageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONGETMISSIONMESSAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _TryShowReward(::Proto::ItemList* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__TRYSHOWREWARD_OFFSET))(this, itemList);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPhoneMessageGroupChecked(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGEGROUPCHECKED_OFFSET))(this, arg);
		}

		::System::Void _OnPhoneMessageTryFinishGroup(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGETRYFINISHGROUP_OFFSET))(this, arg);
		}

		::System::Void _OnStoryLineChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONSTORYLINECHANGE_OFFSET))(this, arg);
		}

		::System::Void _RefreshAllGroupVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHALLGROUPVISIBILITY_OFFSET))(this);
		}

		::System::Void _TryFinishSection(::RPG::Client::MessageSectionData* sectionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__TRYFINISHSECTION_OFFSET))(this, sectionData);
		}

		::System::Void _RecordMessageSeen(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RECORDMESSAGESEEN_OFFSET))(this, groupID);
		}

		::System::Void _OnScheduleRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONSCHEDULEREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnRaidDataChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONRAIDDATACHANGED_OFFSET))(this, arg);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_WaitingContactIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GET_WAITINGCONTACTIDS_OFFSET))(this);
		}

		::System::Void set_WaitingContactIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SET_WAITINGCONTACTIDS_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
