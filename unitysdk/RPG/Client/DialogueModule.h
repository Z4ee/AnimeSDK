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

#define RPG_CLIENT_DIALOGUEMODULE_ADDMENUITEM_OFFSET UNITYSDK_OFFSET(0xB791EC0)
#define RPG_CLIENT_DIALOGUEMODULE_ADDMISSIONMENUITEM_OFFSET UNITYSDK_OFFSET(0xB7920E0)
#define RPG_CLIENT_DIALOGUEMODULE_CLEARMENUITEMS_OFFSET UNITYSDK_OFFSET(0xB78DDB0)
#define RPG_CLIENT_DIALOGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB791B00)
#define RPG_CLIENT_DIALOGUEMODULE_FINISHFIRSTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB78FC40)
#define RPG_CLIENT_DIALOGUEMODULE_IFHASPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB78FDE0)
#define RPG_CLIENT_DIALOGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB791870)
#define RPG_CLIENT_DIALOGUEMODULE_ISENTITYTALKENABLE_OFFSET UNITYSDK_OFFSET(0xB793BD0)
#define RPG_CLIENT_DIALOGUEMODULE_ISPERFORMANCETRIGGERED_OFFSET UNITYSDK_OFFSET(0xB78FA30)
#define RPG_CLIENT_DIALOGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB791A90)
#define RPG_CLIENT_DIALOGUEMODULE_PERFORMANCEDATAPROMISED_OFFSET UNITYSDK_OFFSET(0xB78F670)
#define RPG_CLIENT_DIALOGUEMODULE_RECORDSEQUENCEDIALOGUE_OFFSET UNITYSDK_OFFSET(0xB793700)
#define RPG_CLIENT_DIALOGUEMODULE_REMOVEMISSIONMENUITEM_OFFSET UNITYSDK_OFFSET(0xB792340)
#define RPG_CLIENT_DIALOGUEMODULE_SETENTITYTALKENABLE_OFFSET UNITYSDK_OFFSET(0xB793AC0)
#define RPG_CLIENT_DIALOGUEMODULE_SHOWMENU_OFFSET UNITYSDK_OFFSET(0xB7924A0)
#define RPG_CLIENT_DIALOGUEMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0xB7918F0)
#define RPG_CLIENT_DIALOGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB791B50)
#define RPG_CLIENT_DIALOGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB791D30)
#define RPG_CLIENT_DIALOGUEMODULE__CONVERTMENUITEMTOOPTIONINFO_OFFSET UNITYSDK_OFFSET(0xB793550)
#define RPG_CLIENT_DIALOGUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB794040)
#define RPG_CLIENT_DIALOGUEMODULE__IFMENUITEMEXTRAINFOCONDITIONPASS_OFFSET UNITYSDK_OFFSET(0xB793D10)
#define RPG_CLIENT_DIALOGUEMODULE__ISFORMULAUNLOCK_OFFSET UNITYSDK_OFFSET(0xB791710)
#define RPG_CLIENT_DIALOGUEMODULE__ISMISSIONASSOCIATEWITHTRACKMISSION_OFFSET UNITYSDK_OFFSET(0xB793320)
#define RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xB793FA0)
#define RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB78FE70)
#define RPG_CLIENT_DIALOGUEMODULE__ONCHOOSETALKOPTION_OFFSET UNITYSDK_OFFSET(0xB793EF0)
#define RPG_CLIENT_DIALOGUEMODULE__ONFINISHFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET UNITYSDK_OFFSET(0xB78FEC0)
#define RPG_CLIENT_DIALOGUEMODULE__ONGETFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET UNITYSDK_OFFSET(0xB790080)
#define RPG_CLIENT_DIALOGUEMODULE__PROCESSMENUITEMEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xB793C80)
#define RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_OFFSET UNITYSDK_OFFSET(0xB7904B0)
#define RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_RESENDTALKREWARD_OFFSET UNITYSDK_OFFSET(0xB790580)
#define RPG_CLIENT_DIALOGUEMODULE__TRYGETPERFORMANCEDATAPROMISE_OFFSET UNITYSDK_OFFSET(0xB78FBA0)
#define RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7945E0)
#define RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB794500)
#define RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB794580)
#define RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB7945F0)
#define RPG_CLIENT_DIALOGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB794650)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogueModule_TypeDefinitionIndex = 59475;

	class DialogueModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Int32 _ParallelDialogueMaxCount = 0x5; // 0x0
		// static const ::System::Int32 _MaxSequence = 0x64; // 0x0
		::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>* _MenuItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _SequenceDialogue; // 0x18
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Boolean>* _TalkDisable; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* _OptionInfos; // 0x28
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*>* _MissionMenuItems; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ReissuePerformanceID; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _PerformanceTempList; // 0x40
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*>* _InterMenuItems; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise*>* _PerformancePromises; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>* _PerformanceTempPromiseList; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _PerformanceClientTriggered; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _FirstPerformance; // 0x68
		::RPG::GameCore::StringHash MenuItemPackIndex; // 0x70
		::RPG::GameCore::StringHash MenuItemPackSuccess; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PerformanceDataPromised(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_PERFORMANCEDATAPROMISED_OFFSET))(this, a1);
		}

		::System::Void FinishFirstPerformance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_FINISHFIRSTPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean IfHasPerformance(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_IFHASPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean IsPerformanceTriggered(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ISPERFORMANCETRIGGERED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnFinishFirstTalkByPerformanceNpcScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONFINISHFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetFirstTalkByPerformanceNpcScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONGETFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetPerformanceDataPromise(::System::UInt32 a1, ::RPG::Client::Promises::IPromise*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::Promises::IPromise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__TRYGETPERFORMANCEDATAPROMISE_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessTalkEventReissue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_OFFSET))(this);
		}

		::System::Void _ProcessTalkEventReissue_ResendTalkReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_RESENDTALKREWARD_OFFSET))(this);
		}

		::System::Boolean _IsFormulaUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ISFORMULAUNLOCK_OFFSET))(this, a1);
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

		::System::Void AddMenuItem(::RPG::GameCore::AddMenuItem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddMenuItem*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ADDMENUITEM_OFFSET))(this, a1, a2);
		}

		::System::Void AddMissionMenuItem(::RPG::GameCore::AddMenuItem* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddMenuItem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ADDMISSIONMENUITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveMissionMenuItem(::RPG::GameCore::AddMenuItem* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddMenuItem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_REMOVEMISSIONMENUITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowMenu(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_SHOWMENU_OFFSET))(this, a1, a2);
		}

		::System::Int32 RecordSequenceDialogue(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_RECORDSEQUENCEDIALOGUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetEntityTalkEnable(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_SETENTITYTALKENABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsEntityTalkEnable(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ISENTITYTALKENABLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::OptionTalkInfo* _ConvertMenuItemToOptionInfo(::RPG::GameCore::AddMenuItem* a1)
		{
			return ((::RPG::GameCore::OptionTalkInfo*(*)(::PVOID, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__CONVERTMENUITEMTOOPTIONINFO_OFFSET))(this, a1);
		}

		::System::UInt32 _ProcessMenuItemExtraInfo(::RPG::GameCore::AddMenuItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__PROCESSMENUITEMEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Boolean _IfMenuItemExtraInfoConditionPass(::RPG::GameCore::AddMenuItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__IFMENUITEMEXTRAINFOCONDITIONPASS_OFFSET))(this, a1);
		}

		::System::Boolean _IsMissionAssociateWithTrackMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ISMISSIONASSOCIATEWITHTRACKMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnChooseTalkOption(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONCHOOSETALKOPTION_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEEND_OFFSET))(this, a1);
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
