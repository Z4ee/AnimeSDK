#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_28.h"
#include "unitysdk/Enum_3_DB663931210BBC27_29.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/MessageShowInUIType.h"
#include "unitysdk/RPG/GameCore/PhoneMessagePlayMode.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_74B82D648058B7A1;
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

#define RPG_CLIENT_MESSAGEMODULE_FETCHALLCONTACTSTATUS_OFFSET UNITYSDK_OFFSET(0xBFDFF70)
#define RPG_CLIENT_MESSAGEMODULE_FINISHITEMBYCHOICE_OFFSET UNITYSDK_OFFSET(0xBFDC640)
#define RPG_CLIENT_MESSAGEMODULE_FINISHITEMINHISTORY_OFFSET UNITYSDK_OFFSET(0xBFDCED0)
#define RPG_CLIENT_MESSAGEMODULE_GETALLCONTACTS_OFFSET UNITYSDK_OFFSET(0xBFE0AB0)
#define RPG_CLIENT_MESSAGEMODULE_GETCONTACTBYGROUPID_OFFSET UNITYSDK_OFFSET(0xBFE0D40)
#define RPG_CLIENT_MESSAGEMODULE_GETPHONENOTICES_OFFSET UNITYSDK_OFFSET(0xBFDEC90)
#define RPG_CLIENT_MESSAGEMODULE_GETWAITINGCONTACTS_OFFSET UNITYSDK_OFFSET(0xBFDEFF0)
#define RPG_CLIENT_MESSAGEMODULE_GET_MESSAGENOTICESTOSHOW_OFFSET UNITYSDK_OFFSET(0xBFDF9E0)
#define RPG_CLIENT_MESSAGEMODULE_GET_RINGINGMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xBFDF9C0)
#define RPG_CLIENT_MESSAGEMODULE_GET_WAITINGCONTACTIDS_OFFSET UNITYSDK_OFFSET(0xBFE6040)
#define RPG_CLIENT_MESSAGEMODULE_GOLINK_OFFSET UNITYSDK_OFFSET(0xBFDD3C0)
#define RPG_CLIENT_MESSAGEMODULE_HASBATTLE_OFFSET UNITYSDK_OFFSET(0xBFDEAD0)
#define RPG_CLIENT_MESSAGEMODULE_HASNOTICE_OFFSET UNITYSDK_OFFSET(0xBFDEA70)
#define RPG_CLIENT_MESSAGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBFDFEE0)
#define RPG_CLIENT_MESSAGEMODULE_ISITEMCHOSEN_OFFSET UNITYSDK_OFFSET(0xBFDD370)
#define RPG_CLIENT_MESSAGEMODULE_ISITEMFINISHED_OFFSET UNITYSDK_OFFSET(0xBFD7BD0)
#define RPG_CLIENT_MESSAGEMODULE_ISSHOWINDIALOG_OFFSET UNITYSDK_OFFSET(0xBFDFDC0)
#define RPG_CLIENT_MESSAGEMODULE_MISSIONDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xBFE1010)
#define RPG_CLIENT_MESSAGEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBFE0120)
#define RPG_CLIENT_MESSAGEMODULE_PREPAREGROUPDATAFORPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xBFDDC40)
#define RPG_CLIENT_MESSAGEMODULE_RECORDMESSAGESEEN_OFFSET UNITYSDK_OFFSET(0xBFE03F0)
#define RPG_CLIENT_MESSAGEMODULE_REFRESHSCHEDULE_OFFSET UNITYSDK_OFFSET(0xBFE0840)
#define RPG_CLIENT_MESSAGEMODULE_REQUESTUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xBFE05A0)
#define RPG_CLIENT_MESSAGEMODULE_SAFEINITCONTACTDATA_OFFSET UNITYSDK_OFFSET(0xBFE0720)
#define RPG_CLIENT_MESSAGEMODULE_SAVEMESSAGEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFDD900)
#define RPG_CLIENT_MESSAGEMODULE_SET_MESSAGENOTICESTOSHOW_OFFSET UNITYSDK_OFFSET(0xBFDF9F0)
#define RPG_CLIENT_MESSAGEMODULE_SET_RINGINGMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xBFDF9D0)
#define RPG_CLIENT_MESSAGEMODULE_SET_WAITINGCONTACTIDS_OFFSET UNITYSDK_OFFSET(0xBFE6050)
#define RPG_CLIENT_MESSAGEMODULE_SHOWGROUPREDDOT_OFFSET UNITYSDK_OFFSET(0xBFE0F70)
#define RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGEADAPTIVE_OFFSET UNITYSDK_OFFSET(0xBFDF540)
#define RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGE_OFFSET UNITYSDK_OFFSET(0xBFDF230)
#define RPG_CLIENT_MESSAGEMODULE_STARTMESSAGEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFDD510)
#define RPG_CLIENT_MESSAGEMODULE_TRYGETGROUPCURRENTSECTION_OFFSET UNITYSDK_OFFSET(0xBFE0E70)
#define RPG_CLIENT_MESSAGEMODULE_TRYGETMESSAGEGROUP_OFFSET UNITYSDK_OFFSET(0xBFDE5F0)
#define RPG_CLIENT_MESSAGEMODULE_TRYSHOWPHONENOTICE_OFFSET UNITYSDK_OFFSET(0xBFDE7E0)
#define RPG_CLIENT_MESSAGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBFE5720)
#define RPG_CLIENT_MESSAGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBFE2120)
#define RPG_CLIENT_MESSAGEMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFE6360)
#define RPG_CLIENT_MESSAGEMODULE__COLLECTNEXTITEMSTOSPECIALDIALOG_OFFSET UNITYSDK_OFFSET(0xBFDFC10)
#define RPG_CLIENT_MESSAGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBFE6060)
#define RPG_CLIENT_MESSAGEMODULE__DELETEGROUP_OFFSET UNITYSDK_OFFSET(0xBFE1290)
#define RPG_CLIENT_MESSAGEMODULE__DELETESECTIONDATA_OFFSET UNITYSDK_OFFSET(0xBFE1C90)
#define RPG_CLIENT_MESSAGEMODULE__DOFINISHITEMBYCHOICE_OFFSET UNITYSDK_OFFSET(0xBFDCCF0)
#define RPG_CLIENT_MESSAGEMODULE__GETSPECIALDIALOGTYPE_OFFSET UNITYSDK_OFFSET(0xBFDFE30)
#define RPG_CLIENT_MESSAGEMODULE__HASSECTIONDATA_OFFSET UNITYSDK_OFFSET(0xBFDC7D0)
#define RPG_CLIENT_MESSAGEMODULE__INITSECTION_OFFSET UNITYSDK_OFFSET(0xBFE16D0)
#define RPG_CLIENT_MESSAGEMODULE__INITSHOWINSPECIALDIALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0xBFDFA00)
#define RPG_CLIENT_MESSAGEMODULE__ISITEMRECORDEDINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFDD2B0)
#define RPG_CLIENT_MESSAGEMODULE__ISPERFORMANCESECTION_OFFSET UNITYSDK_OFFSET(0xBFDC8E0)
#define RPG_CLIENT_MESSAGEMODULE__ONFINISHITEMIDSCRSP_OFFSET UNITYSDK_OFFSET(0xBFE3B40)
#define RPG_CLIENT_MESSAGEMODULE__ONFINISHPERFORMSECTIONIDSCRSP_OFFSET UNITYSDK_OFFSET(0xBFE4E00)
#define RPG_CLIENT_MESSAGEMODULE__ONFINISHSECTIONIDSCRSP_OFFSET UNITYSDK_OFFSET(0xBFE4000)
#define RPG_CLIENT_MESSAGEMODULE__ONGETMISSIONMESSAGESCRSP_OFFSET UNITYSDK_OFFSET(0xBFE5220)
#define RPG_CLIENT_MESSAGEMODULE__ONGETNPCMESSAGEGROUPSCRSP_OFFSET UNITYSDK_OFFSET(0xBFE2AF0)
#define RPG_CLIENT_MESSAGEMODULE__ONGETNPCSTATUSSCRSP_OFFSET UNITYSDK_OFFSET(0xBFE25A0)
#define RPG_CLIENT_MESSAGEMODULE__ONMESSAGENOTICECLOSE_OFFSET UNITYSDK_OFFSET(0xBFDF950)
#define RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGEGROUPCHECKED_OFFSET UNITYSDK_OFFSET(0xBFE5A80)
#define RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGETRYFINISHGROUP_OFFSET UNITYSDK_OFFSET(0xBFE5AE0)
#define RPG_CLIENT_MESSAGEMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBFE42F0)
#define RPG_CLIENT_MESSAGEMODULE__ONRAIDDATACHANGED_OFFSET UNITYSDK_OFFSET(0xBFE5FB0)
#define RPG_CLIENT_MESSAGEMODULE__ONSCHEDULEREFRESH_OFFSET UNITYSDK_OFFSET(0xBFE5F60)
#define RPG_CLIENT_MESSAGEMODULE__ONSTORYLINECHANGE_OFFSET UNITYSDK_OFFSET(0xBFE5B70)
#define RPG_CLIENT_MESSAGEMODULE__RECORDITEMCHOICES_OFFSET UNITYSDK_OFFSET(0xBFE2010)
#define RPG_CLIENT_MESSAGEMODULE__RECORDITEMINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFDC9D0)
#define RPG_CLIENT_MESSAGEMODULE__RECORDMESSAGESEEN_OFFSET UNITYSDK_OFFSET(0xBFE0440)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHALLGROUPVISIBILITY_OFFSET UNITYSDK_OFFSET(0xBFE5BC0)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHCONTACT_OFFSET UNITYSDK_OFFSET(0xBFDD830)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHFROMGROUP_OFFSET UNITYSDK_OFFSET(0xBFE0A50)
#define RPG_CLIENT_MESSAGEMODULE__REFRESHWAITINGCONTACT_OFFSET UNITYSDK_OFFSET(0xBFE1510)
#define RPG_CLIENT_MESSAGEMODULE__RESETSECTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xBFE1970)
#define RPG_CLIENT_MESSAGEMODULE__SAFEGETCONTACTDATA_OFFSET UNITYSDK_OFFSET(0xBFE1410)
#define RPG_CLIENT_MESSAGEMODULE__SAFEGETGROUP_OFFSET UNITYSDK_OFFSET(0xBFDD730)
#define RPG_CLIENT_MESSAGEMODULE__SAFEGETSECTIONDATA_OFFSET UNITYSDK_OFFSET(0xBFDC950)
#define RPG_CLIENT_MESSAGEMODULE__TRYFINISHITEMINHISTORY_OFFSET UNITYSDK_OFFSET(0xBFDD070)
#define RPG_CLIENT_MESSAGEMODULE__TRYFINISHSECTION_OFFSET UNITYSDK_OFFSET(0xBFE3CD0)
#define RPG_CLIENT_MESSAGEMODULE__TRYSHOWREWARD_OFFSET UNITYSDK_OFFSET(0xBFE4170)
#define RPG_CLIENT_MESSAGEMODULE__UPDATEGROUP_OFFSET UNITYSDK_OFFSET(0xBFE1600)
#define RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONACT_OFFSET UNITYSDK_OFFSET(0xBFDD590)
#define RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xBFDE6E0)
#define RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONSTATUS_OFFSET UNITYSDK_OFFSET(0xBFE1820)
#define RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBFE6500)
#define RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBFE6580)
#define RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBFE6640)
#define RPG_CLIENT_MESSAGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBFE65E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageModule_TypeDefinitionIndex = 61773;

	class MessageModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::String** StaticGet__LEVEL_GRAPH_PATH_BEGIN_REPLY_WITH_NOTICE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MessageModule_TypeDefinitionIndex)->GetStaticField(0x59140);
		}
		static ::System::String** StaticGet__LEVEL_GRAPH_PATH_BEGIN_REPLY_NO_NOTICE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MessageModule_TypeDefinitionIndex)->GetStaticField(0x59148);
		}
		static ::System::String** StaticGet__LEVEL_GRAPH_PATH_BEGIN_REPLY_LOGIC_CONTROL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MessageModule_TypeDefinitionIndex)->GetStaticField(0x59150);
		}
		static ::RPG::GameCore::StringHash* StaticGet__VARIABLE_KEY_CHARACTER_POSTURE()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(MessageModule_TypeDefinitionIndex)->GetStaticField(0x11B30);
		}
		static ::RPG::GameCore::StringHash* StaticGet__VARIABLE_KEY_WITH_NOTICEE()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(MessageModule_TypeDefinitionIndex)->GetStaticField(0x11B34);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _HistorySentItemIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageGroupData*>* _AllGroupDatas; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SubLineSectionIDs; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WaitingContactIDs_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageShowInUIType>* _ItemToSpecialDialogIDMap; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MessageContactData*>* _AllContactDatas; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* _MessageNoticesToShow_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SendingFinishSectionIDs; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _ActingSentItemIDs; // 0x50
		::RPG::GameCore::LevelGraphComponent* _ShowPhoneNoticeLevelGraph; // 0x58
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

		::System::Void FinishItemByChoice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_FINISHITEMBYCHOICE_OFFSET))(this, a1);
		}

		::System::Void FinishItemInHistory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_FINISHITEMINHISTORY_OFFSET))(this, a1);
		}

		::System::Boolean IsItemFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ISITEMFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IsItemChosen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ISITEMCHOSEN_OFFSET))(this, a1);
		}

		::System::Void GoLink(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GOLINK_OFFSET))(this, a1);
		}

		::System::Void _DoFinishItemByChoice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__DOFINISHITEMBYCHOICE_OFFSET))(this, a1);
		}

		::System::Void _TryFinishItemInHistory(::RPG::GameCore::MessageItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__TRYFINISHITEMINHISTORY_OFFSET))(this, a1);
		}

		::System::Void StartMessagePerformance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_STARTMESSAGEPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean SaveMessagePerformance(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SAVEMESSAGEPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void PrepareGroupDataForPerformanceReplay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_PREPAREGROUPDATAFORPERFORMANCEREPLAY_OFFSET))(this, a1);
		}

		::System::Void _RecordItemInPerformance(::RPG::Client::MessageSectionData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RECORDITEMINPERFORMANCE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsPerformanceSection(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ISPERFORMANCESECTION_OFFSET))(this, a1);
		}

		::System::Boolean _IsItemRecordedInPerformance(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ISITEMRECORDEDINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean TryShowPhoneNotice(::RPG::Client::MessageSectionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_TRYSHOWPHONENOTICE_OFFSET))(this, a1);
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

		::System::Boolean ShowMessageNoticePage(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ShowMessageNoticePageAdaptive(::System::UInt32 a1, ::System::Boolean a2, ::RPG::GameCore::PhoneMessagePlayMode a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::PhoneMessagePlayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOWMESSAGENOTICEPAGEADAPTIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnMessageNoticeClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONMESSAGENOTICECLOSE_OFFSET))(this);
		}

		::System::UInt32 get_RingingMessageGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GET_RINGINGMESSAGEGROUPID_OFFSET))(this);
		}

		::System::Void set_RingingMessageGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SET_RINGINGMESSAGEGROUPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* get_MessageNoticesToShow()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GET_MESSAGENOTICESTOSHOW_OFFSET))(this);
		}

		::System::Void set_MessageNoticesToShow(::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MessageItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SET_MESSAGENOTICESTOSHOW_OFFSET))(this, a1);
		}

		::System::Void _InitShowInSpecialDialogItemIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__INITSHOWINSPECIALDIALOGITEMIDS_OFFSET))(this);
		}

		::System::Void _CollectNextItemsToSpecialDialog(::RPG::GameCore::MessageItemRow* a1, ::RPG::Client::MessageShowInUIType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*, ::RPG::Client::MessageShowInUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__COLLECTNEXTITEMSTOSPECIALDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsShowInDialog(::System::UInt32 a1, ::RPG::Client::MessageShowInUIType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::MessageShowInUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ISSHOWINDIALOG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageShowInUIType _GetSpecialDialogType(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageShowInUIType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__GETSPECIALDIALOGTYPE_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_INIT_OFFSET))(this);
		}

		::System::Void FetchAllContactStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_FETCHALLCONTACTSTATUS_OFFSET))(this);
		}

		::System::Void RecordMessageSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_RECORDMESSAGESEEN_OFFSET))(this, a1);
		}

		::System::Void RequestUnlockData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_REQUESTUNLOCKDATA_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void SafeInitContactData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SAFEINITCONTACTDATA_OFFSET))(this, a1);
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

		::RPG::Client::MessageContactData* GetContactByGroupID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageContactData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GETCONTACTBYGROUPID_OFFSET))(this, a1);
		}

		::RPG::Client::MessageGroupData* TryGetMessageGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_TRYGETMESSAGEGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::MessageSectionData* TryGetGroupCurrentSection(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_TRYGETGROUPCURRENTSECTION_OFFSET))(this, a1);
		}

		::System::Boolean ShowGroupRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SHOWGROUPREDDOT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* MissionDataPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_MISSIONDATAPREPARED_OFFSET))(this);
		}

		::RPG::Client::MessageGroupData* _SafeGetGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__SAFEGETGROUP_OFFSET))(this, a1);
		}

		::System::Void _DeleteGroup(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__DELETEGROUP_OFFSET))(this, a1);
		}

		::System::Void _UpdateGroup(::RPG::Client::MessageGroupData* a1, ::Enum_3_DB663931210BBC27_29 a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*, ::Enum_3_DB663931210BBC27_29, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATEGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshFromGroup(::RPG::Client::MessageGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHFROMGROUP_OFFSET))(this, a1);
		}

		::System::Void _RefreshContact(::RPG::Client::MessageGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHCONTACT_OFFSET))(this, a1);
		}

		::System::Void _RefreshWaitingContact(::RPG::Client::MessageContactData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContactData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHWAITINGCONTACT_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContactData* _SafeGetContactData(::System::UInt32 a1, ::System::Boolean& a2)
		{
			return ((::RPG::Client::MessageContactData*(*)(::PVOID, ::System::UInt32, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__SAFEGETCONTACTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _InitSection(::System::UInt32 a1, ::Class_1_74B82D648058B7A1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_74B82D648058B7A1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__INITSECTION_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSectionStatus(::RPG::Client::MessageSectionData* a1, ::Enum_3_DB663931210BBC27_28 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSectionAct(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONACT_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSectionHistory(::RPG::Client::MessageSectionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__UPDATESECTIONHISTORY_OFFSET))(this, a1);
		}

		::System::Void _ResetSectionHistory(::RPG::Client::MessageSectionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RESETSECTIONHISTORY_OFFSET))(this, a1);
		}

		::RPG::Client::MessageSectionData* _SafeGetSectionData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageSectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__SAFEGETSECTIONDATA_OFFSET))(this, a1);
		}

		::System::Void _DeleteSectionData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__DELETESECTIONDATA_OFFSET))(this, a1);
		}

		::System::Boolean _HasSectionData(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__HASSECTIONDATA_OFFSET))(this, a1);
		}

		::System::Void _RecordItemChoices(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RECORDITEMCHOICES_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetNpcStatusScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONGETNPCSTATUSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetNpcMessageGroupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONGETNPCMESSAGEGROUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFinishItemIdScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONFINISHITEMIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFinishSectionIdScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONFINISHSECTIONIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerSyncScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFinishPerformSectionIdScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONFINISHPERFORMSECTIONIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetMissionMessageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONGETMISSIONMESSAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _TryShowReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__TRYSHOWREWARD_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPhoneMessageGroupChecked(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGEGROUPCHECKED_OFFSET))(this, a1);
		}

		::System::Void _OnPhoneMessageTryFinishGroup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONPHONEMESSAGETRYFINISHGROUP_OFFSET))(this, a1);
		}

		::System::Void _OnStoryLineChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONSTORYLINECHANGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshAllGroupVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__REFRESHALLGROUPVISIBILITY_OFFSET))(this);
		}

		::System::Void _TryFinishSection(::RPG::Client::MessageSectionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__TRYFINISHSECTION_OFFSET))(this, a1);
		}

		::System::Void _RecordMessageSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__RECORDMESSAGESEEN_OFFSET))(this, a1);
		}

		::System::Void _OnScheduleRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONSCHEDULEREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnRaidDataChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE__ONRAIDDATACHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_WaitingContactIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_GET_WAITINGCONTACTIDS_OFFSET))(this);
		}

		::System::Void set_WaitingContactIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE_SET_WAITINGCONTACTIDS_OFFSET))(this, a1);
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
