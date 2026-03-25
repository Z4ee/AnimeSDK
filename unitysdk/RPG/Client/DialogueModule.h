#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DIALOGUEMODULE_ADDMENUITEM_OFFSET UNITYSDK_OFFSET(0x9466D90)
#define RPG_CLIENT_DIALOGUEMODULE_ADDMISSIONMENUITEM_OFFSET UNITYSDK_OFFSET(0x9466ED0)
#define RPG_CLIENT_DIALOGUEMODULE_CLEARMENUITEMS_OFFSET UNITYSDK_OFFSET(0x9463170)
#define RPG_CLIENT_DIALOGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9466AF0)
#define RPG_CLIENT_DIALOGUEMODULE_FINISHFIRSTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9464BE0)
#define RPG_CLIENT_DIALOGUEMODULE_IFHASPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9464D00)
#define RPG_CLIENT_DIALOGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9466800)
#define RPG_CLIENT_DIALOGUEMODULE_ISENTITYTALKENABLE_OFFSET UNITYSDK_OFFSET(0x9460FA0)
#define RPG_CLIENT_DIALOGUEMODULE_ISPERFORMANCETRIGGERED_OFFSET UNITYSDK_OFFSET(0x9464A70)
#define RPG_CLIENT_DIALOGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9466A80)
#define RPG_CLIENT_DIALOGUEMODULE_PERFORMANCEDATAPROMISED_OFFSET UNITYSDK_OFFSET(0x9464660)
#define RPG_CLIENT_DIALOGUEMODULE_RECORDSEQUENCEDIALOGUE_OFFSET UNITYSDK_OFFSET(0x94682D0)
#define RPG_CLIENT_DIALOGUEMODULE_REMOVEMISSIONMENUITEM_OFFSET UNITYSDK_OFFSET(0x9467080)
#define RPG_CLIENT_DIALOGUEMODULE_SETENTITYTALKENABLE_OFFSET UNITYSDK_OFFSET(0x94685C0)
#define RPG_CLIENT_DIALOGUEMODULE_SHOWMENU_OFFSET UNITYSDK_OFFSET(0x94671A0)
#define RPG_CLIENT_DIALOGUEMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0x9466880)
#define RPG_CLIENT_DIALOGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9466B40)
#define RPG_CLIENT_DIALOGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9466CE0)
#define RPG_CLIENT_DIALOGUEMODULE__CONVERTMENUITEMTOOPTIONINFO_OFFSET UNITYSDK_OFFSET(0x9468120)
#define RPG_CLIENT_DIALOGUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9468A40)
#define RPG_CLIENT_DIALOGUEMODULE__IFMENUITEMEXTRAINFOCONDITIONPASS_OFFSET UNITYSDK_OFFSET(0x9468710)
#define RPG_CLIENT_DIALOGUEMODULE__ISFORMULAUNLOCK_OFFSET UNITYSDK_OFFSET(0x9466670)
#define RPG_CLIENT_DIALOGUEMODULE__ISMISSIONASSOCIATEWITHTRACKMISSION_OFFSET UNITYSDK_OFFSET(0x9467EF0)
#define RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x9468990)
#define RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9464DA0)
#define RPG_CLIENT_DIALOGUEMODULE__ONCHOOSETALKOPTION_OFFSET UNITYSDK_OFFSET(0x94688F0)
#define RPG_CLIENT_DIALOGUEMODULE__ONFINISHFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET UNITYSDK_OFFSET(0x9464DF0)
#define RPG_CLIENT_DIALOGUEMODULE__ONGETFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET UNITYSDK_OFFSET(0x9464FB0)
#define RPG_CLIENT_DIALOGUEMODULE__PROCESSMENUITEMEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9468680)
#define RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_OFFSET UNITYSDK_OFFSET(0x9465430)
#define RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_RESENDTALKREWARD_OFFSET UNITYSDK_OFFSET(0x94654E0)
#define RPG_CLIENT_DIALOGUEMODULE__TRYGETPERFORMANCEDATAPROMISE_OFFSET UNITYSDK_OFFSET(0x9464B10)
#define RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9468FC0)
#define RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9468ED0)
#define RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9468F60)
#define RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9468FD0)
#define RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9469030)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogueModule_TypeDefinitionIndex = 51599;

	class DialogueModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Int32 _ParallelDialogueMaxCount = 0x5; // 0x0
		// static const ::System::Int32 _MaxSequence = 0x64; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _PerformanceTempList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _FirstPerformance; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>* _PerformanceTempPromiseList; // 0x20
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*>* _MissionMenuItems; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>* _MenuItems; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _PerformanceClientTriggered; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _ReissuePerformanceID; // 0x40
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Boolean>* _TalkDisable; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _SequenceDialogue; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise*>* _PerformancePromises; // 0x58
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*>* _InterMenuItems; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* _OptionInfos; // 0x68
		::RPG::GameCore::StringHash MenuItemPackSuccess; // 0x70
		::RPG::GameCore::StringHash MenuItemPackIndex; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PerformanceDataPromised(::System::Collections::Generic::List_1<::System::UInt32>* performanceIDs)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_PERFORMANCEDATAPROMISED_OFFSET))(this, performanceIDs);
		}

		::System::Void FinishFirstPerformance(::System::UInt32 performanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_FINISHFIRSTPERFORMANCE_OFFSET))(this, performanceID);
		}

		::System::Boolean IfHasPerformance(::System::UInt32 performanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_IFHASPERFORMANCE_OFFSET))(this, performanceID);
		}

		::System::Boolean IsPerformanceTriggered(::System::UInt32 performanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ISPERFORMANCETRIGGERED_OFFSET))(this, performanceID);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnFinishFirstTalkByPerformanceNpcScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONFINISHFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetFirstTalkByPerformanceNpcScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONGETFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean _TryGetPerformanceDataPromise(::System::UInt32 id, ::RPG::Client::Promises::IPromise*& promise)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::Promises::IPromise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__TRYGETPERFORMANCEDATAPROMISE_OFFSET))(this, id, promise);
		}

		::System::Void _ProcessTalkEventReissue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_OFFSET))(this);
		}

		::System::Void _ProcessTalkEventReissue_ResendTalkReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_RESENDTALKREWARD_OFFSET))(this);
		}

		::System::Boolean _IsFormulaUnlock(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ISFORMULAUNLOCK_OFFSET))(this, id);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_UNINIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void AddMenuItem(::RPG::GameCore::AddMenuItem* menuItem, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddMenuItem*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ADDMENUITEM_OFFSET))(this, menuItem, index);
		}

		::System::Void AddMissionMenuItem(::RPG::GameCore::AddMenuItem* menuItem, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddMenuItem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ADDMISSIONMENUITEM_OFFSET))(this, menuItem, groupID, instanceID);
		}

		::System::Void RemoveMissionMenuItem(::RPG::GameCore::AddMenuItem* menuItem, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddMenuItem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_REMOVEMISSIONMENUITEM_OFFSET))(this, menuItem, groupID, instanceID);
		}

		::System::Void ShowMenu(::RPG::GameCore::GameEntity* gameEntity, ::System::Boolean DisplaySingleMenuItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_SHOWMENU_OFFSET))(this, gameEntity, DisplaySingleMenuItem);
		}

		::System::Int32 RecordSequenceDialogue(::System::String* key, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_RECORDSEQUENCEDIALOGUE_OFFSET))(this, key, count);
		}

		::System::Void SetEntityTalkEnable(::System::Boolean enable, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_SETENTITYTALKENABLE_OFFSET))(this, enable, groupID, instanceID);
		}

		::System::Boolean IsEntityTalkEnable(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ISENTITYTALKENABLE_OFFSET))(this, groupID, instanceID);
		}

		::RPG::GameCore::OptionTalkInfo* _ConvertMenuItemToOptionInfo(::RPG::GameCore::AddMenuItem* menuItem)
		{
			return ((::RPG::GameCore::OptionTalkInfo*(*)(::PVOID, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__CONVERTMENUITEMTOOPTIONINFO_OFFSET))(this, menuItem);
		}

		::System::UInt32 _ProcessMenuItemExtraInfo(::RPG::GameCore::AddMenuItem* menuItem)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__PROCESSMENUITEMEXTRAINFO_OFFSET))(this, menuItem);
		}

		::System::Boolean _IfMenuItemExtraInfoConditionPass(::RPG::GameCore::AddMenuItem* menuItem)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__IFMENUITEMEXTRAINFOCONDITIONPASS_OFFSET))(this, menuItem);
		}

		::System::Boolean _IsMissionAssociateWithTrackMission(::System::UInt32 missionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ISMISSIONASSOCIATEWITHTRACKMISSION_OFFSET))(this, missionID);
		}

		::System::Void _OnChooseTalkOption(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONCHOOSETALKOPTION_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEEND_OFFSET))(this, arg);
		}

		::System::Void ClearMenuItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_CLEARMENUITEMS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
