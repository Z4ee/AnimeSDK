#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GotoType.h"
#include "unitysdk/RPG/GameCore/HudType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_524E625AF890459D;
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class FuncEntranceData; }
namespace RPG::Client { class FuncUnlockData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class FuncEntranceListConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SYSTEMOPENMODULE_ADDHUDTEMPLATEBLOCK_OFFSET UNITYSDK_OFFSET(0xA529EA0)
#define RPG_CLIENT_SYSTEMOPENMODULE_CANSHOW_OFFSET UNITYSDK_OFFSET(0xA52CD90)
#define RPG_CLIENT_SYSTEMOPENMODULE_CHECKCANSHOW_OFFSET UNITYSDK_OFFSET(0xA52BF30)
#define RPG_CLIENT_SYSTEMOPENMODULE_CHECKISCANSHOWWHEEL_OFFSET UNITYSDK_OFFSET(0xA52A690)
#define RPG_CLIENT_SYSTEMOPENMODULE_CHECKISOPEN_OFFSET UNITYSDK_OFFSET(0xA52CA50)
#define RPG_CLIENT_SYSTEMOPENMODULE_CLEARHUDTEMPLATEBLOCK_OFFSET UNITYSDK_OFFSET(0xA529E10)
#define RPG_CLIENT_SYSTEMOPENMODULE_CONDITIONPREPARED_1_OFFSET UNITYSDK_OFFSET(0xA52DC10)
#define RPG_CLIENT_SYSTEMOPENMODULE_CONDITIONPREPARED_OFFSET UNITYSDK_OFFSET(0xA52DA80)
#define RPG_CLIENT_SYSTEMOPENMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA52B570)
#define RPG_CLIENT_SYSTEMOPENMODULE_FORCEREFRESHFUNCENTRANCEDATA_OFFSET UNITYSDK_OFFSET(0xA52B9F0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETCONDITIONCHECKERBYUNLOCKID_OFFSET UNITYSDK_OFFSET(0xA52D4F0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETCURRENTFUNCTIONENTRANCELISTID_OFFSET UNITYSDK_OFFSET(0xA52CB20)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETDESKTOPAPPLIST_OFFSET UNITYSDK_OFFSET(0xA52C020)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETDOCKAPPLIST_OFFSET UNITYSDK_OFFSET(0xA52C2C0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETEXITFUNCENTRANCES_OFFSET UNITYSDK_OFFSET(0xA52C8E0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETFUNCTIONDATA_OFFSET UNITYSDK_OFFSET(0xA52B870)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETFUNCTIONUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xA52B930)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETHUDFUNCENTRANCELIST_OFFSET UNITYSDK_OFFSET(0xA52C340)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETISNOTOPENREASON_OFFSET UNITYSDK_OFFSET(0xA52CFE0)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETLEFTHUDFUNCENTRANCELIST_OFFSET UNITYSDK_OFFSET(0xA52C830)
#define RPG_CLIENT_SYSTEMOPENMODULE_GETLEFTTOPHUDFUNCENTRANCELIST_OFFSET UNITYSDK_OFFSET(0xA52C710)
#define RPG_CLIENT_SYSTEMOPENMODULE_GET_ACTIONHINTSET_OFFSET UNITYSDK_OFFSET(0xA52AA40)
#define RPG_CLIENT_SYSTEMOPENMODULE_GET_BANNEDFUNCENTRANCEIDS_OFFSET UNITYSDK_OFFSET(0xA52E570)
#define RPG_CLIENT_SYSTEMOPENMODULE_GET_BANNEDREDDOTKEYS_OFFSET UNITYSDK_OFFSET(0xA52E840)
#define RPG_CLIENT_SYSTEMOPENMODULE_GET_BLOCKEDHUDTYPES_OFFSET UNITYSDK_OFFSET(0xA52AA20)
#define RPG_CLIENT_SYSTEMOPENMODULE_GET_REDEEMCODEENABLED_OFFSET UNITYSDK_OFFSET(0xA52EAF0)
#define RPG_CLIENT_SYSTEMOPENMODULE_HASGOTOTYPE_OFFSET UNITYSDK_OFFSET(0xA52C9B0)
#define RPG_CLIENT_SYSTEMOPENMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA52ADD0)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISCOMMUNICATIONRESTRICTED_OFFSET UNITYSDK_OFFSET(0xA52D670)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISGOTOIDVALID_OFFSET UNITYSDK_OFFSET(0xA52D7D0)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISGOTOTYPEBLOCKED_OFFSET UNITYSDK_OFFSET(0xA52A850)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISMODESHOWCHAT_OFFSET UNITYSDK_OFFSET(0xA52C930)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISOPEN_OFFSET UNITYSDK_OFFSET(0xA52CC50)
#define RPG_CLIENT_SYSTEMOPENMODULE_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA52CCB0)
#define RPG_CLIENT_SYSTEMOPENMODULE_OVERRIDEFUNCENTRANCELISTID_OFFSET UNITYSDK_OFFSET(0xA52DEE0)
#define RPG_CLIENT_SYSTEMOPENMODULE_REMOVEHUDTEMPLATEBLOCK_OFFSET UNITYSDK_OFFSET(0xA52A2C0)
#define RPG_CLIENT_SYSTEMOPENMODULE_RESETFUNCENTRANCELISTIDTODEFAULT_OFFSET UNITYSDK_OFFSET(0xA52DF40)
#define RPG_CLIENT_SYSTEMOPENMODULE_SET_ACTIONHINTSET_OFFSET UNITYSDK_OFFSET(0xA52AA50)
#define RPG_CLIENT_SYSTEMOPENMODULE_SET_BLOCKEDHUDTYPES_OFFSET UNITYSDK_OFFSET(0xA52AA30)
#define RPG_CLIENT_SYSTEMOPENMODULE_SKIPMAILEXPIRECHECK_OFFSET UNITYSDK_OFFSET(0xA52DEA0)
#define RPG_CLIENT_SYSTEMOPENMODULE_TRYGETFUNCENTRANCEDATA_OFFSET UNITYSDK_OFFSET(0xA52B7B0)
#define RPG_CLIENT_SYSTEMOPENMODULE_UPDATEOPENSTATUS_OFFSET UNITYSDK_OFFSET(0xA52BEB0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ADDBLOCKEDDATA_OFFSET UNITYSDK_OFFSET(0xA529F70)
#define RPG_CLIENT_SYSTEMOPENMODULE__ADDBLOCKNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA529CA0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA52BAD0)
#define RPG_CLIENT_SYSTEMOPENMODULE__CLEARBLOCKEDDATA_OFFSET UNITYSDK_OFFSET(0xA52A450)
#define RPG_CLIENT_SYSTEMOPENMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA52AA60)
#define RPG_CLIENT_SYSTEMOPENMODULE__DISPOSEBLOCK_OFFSET UNITYSDK_OFFSET(0xA529BD0)
#define RPG_CLIENT_SYSTEMOPENMODULE__GETENTRANCELISTCONFIG_OFFSET UNITYSDK_OFFSET(0xA52A8B0)
#define RPG_CLIENT_SYSTEMOPENMODULE__GETMAINMISSIONTYPEREASON_OFFSET UNITYSDK_OFFSET(0xA52D280)
#define RPG_CLIENT_SYSTEMOPENMODULE__GETVALIDFUNCENTRANCEDATAS_OFFSET UNITYSDK_OFFSET(0xA52C0A0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ISFUNCENTRANCEVALID_OFFSET UNITYSDK_OFFSET(0xA52C620)
#define RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCENTRANCEDATACONFIG_OFFSET UNITYSDK_OFFSET(0xA52B0D0)
#define RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCTIONDATA_OFFSET UNITYSDK_OFFSET(0xA52AE70)
#define RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCUNLOCKDATACONFIG_OFFSET UNITYSDK_OFFSET(0xA52B3A0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONBATTLEPASSCHANGED_OFFSET UNITYSDK_OFFSET(0xA52E210)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONCLEARHUDTEMPLATE_OFFSET UNITYSDK_OFFSET(0xA529DC0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONFEATURECHANGED_OFFSET UNITYSDK_OFFSET(0xA52E2A0)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xA52DF90)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA52E010)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONLEVELUP_OFFSET UNITYSDK_OFFSET(0xA52E090)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONROGUEDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xA52E190)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0xA52E330)
#define RPG_CLIENT_SYSTEMOPENMODULE__ONWORLDLEVELUP_OFFSET UNITYSDK_OFFSET(0xA52E110)
#define RPG_CLIENT_SYSTEMOPENMODULE__UNINITBLOCK_OFFSET UNITYSDK_OFFSET(0xA529B00)
#define RPG_CLIENT_SYSTEMOPENMODULE__UPDATEFUNCUNLOCKDATAS_OFFSET UNITYSDK_OFFSET(0xA52E3C0)
#define RPG_CLIENT_SYSTEMOPENMODULE__UPDATEUNLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0xA52BA80)
#define RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA52EC00)
#define RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA52EB70)
#define RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA52EC10)

namespace RPG::Client
{
	inline static constexpr unsigned int SystemOpenModule_TypeDefinitionIndex = 55514;

	class SystemOpenModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _BannedRedDotKeys; // 0x10
		::Il2CppArray<::System::UInt32>* _ExitFuncEntranceList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FuncEntranceData*>* _FuncEntranceDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ConditionChecker*>* _ConditionCheckers; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FuncUnlockData*>* _FuncUnlockDatas; // 0x30
		::Il2CppArray<::System::UInt32>* _LeftHudFuncEntranceList; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* _BlockedActions; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::HudType>* _BlockedHudTypes_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_524E625AF890459D*>* _FunctionDatas; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _PsBannedFuncEntranceIDs; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _BlockHudTemplateIDs; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::GotoType>* _BlockedGotoTypes; // 0x68
		::System::Nullable_1<::System::UInt32> _OverrideFuncEntranceListID; // 0x70
		::System::Boolean IsUnlockAllFunc; // 0x78
		::System::UInt32 _ActionHintSet_k__BackingField; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _UnInitBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__UNINITBLOCK_OFFSET))(this);
		}

		::System::Void _DisposeBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__DISPOSEBLOCK_OFFSET))(this);
		}

		::System::Void _AddBlockNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ADDBLOCKNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnClearHudTemplate(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONCLEARHUDTEMPLATE_OFFSET))(this, arg);
		}

		::System::Void AddHudTemplateBlock(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ADDHUDTEMPLATEBLOCK_OFFSET))(this, id);
		}

		::System::Void RemoveHudTemplateBlock(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_REMOVEHUDTEMPLATEBLOCK_OFFSET))(this, id);
		}

		::System::Void ClearHudTemplateBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CLEARHUDTEMPLATEBLOCK_OFFSET))(this);
		}

		::System::Boolean CheckIsCanShowWheel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CHECKISCANSHOWWHEEL_OFFSET))(this);
		}

		::System::Boolean IsGotoTypeBlocked(::RPG::GameCore::GotoType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GotoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISGOTOTYPEBLOCKED_OFFSET))(this, type);
		}

		::System::Void _AddBlockedData(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ADDBLOCKEDDATA_OFFSET))(this, id);
		}

		::System::Void _ClearBlockedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__CLEARBLOCKEDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::HudType>* get_BlockedHudTypes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::HudType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GET_BLOCKEDHUDTYPES_OFFSET))(this);
		}

		::System::Void set_BlockedHudTypes(::System::Collections::Generic::List_1<::RPG::GameCore::HudType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::HudType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_SET_BLOCKEDHUDTYPES_OFFSET))(this, value);
		}

		::System::UInt32 get_ActionHintSet()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GET_ACTIONHINTSET_OFFSET))(this);
		}

		::System::Void set_ActionHintSet(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_SET_ACTIONHINTSET_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::FuncEntranceData* TryGetFuncEntranceData(::System::UInt32 id)
		{
			return ((::RPG::Client::FuncEntranceData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_TRYGETFUNCENTRANCEDATA_OFFSET))(this, id);
		}

		::Class_1_524E625AF890459D* GetFunctionData(::System::UInt32 id)
		{
			return ((::Class_1_524E625AF890459D*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETFUNCTIONDATA_OFFSET))(this, id);
		}

		::RPG::Client::FuncUnlockData* GetFunctionUnlockData(::System::UInt32 id)
		{
			return ((::RPG::Client::FuncUnlockData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETFUNCTIONUNLOCKDATA_OFFSET))(this, id);
		}

		::System::Void ForceRefreshFuncEntranceData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_FORCEREFRESHFUNCENTRANCEDATA_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void UpdateOpenStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_UPDATEOPENSTATUS_OFFSET))(this);
		}

		::System::Boolean CheckCanShow(::RPG::Client::FuncEntranceData* entranceData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CHECKCANSHOW_OFFSET))(this, entranceData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetDesktopAppList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETDESKTOPAPPLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetDockAppList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETDOCKAPPLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetHudFuncEntranceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETHUDFUNCENTRANCELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::HudType>* GetLeftTopHudFuncEntranceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::HudType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETLEFTTOPHUDFUNCENTRANCELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetLeftHudFuncEntranceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETLEFTHUDFUNCENTRANCELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetExitFuncEntrances()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETEXITFUNCENTRANCES_OFFSET))(this);
		}

		::System::Boolean IsModeShowChat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISMODESHOWCHAT_OFFSET))(this);
		}

		::System::Boolean HasGotoType(::RPG::GameCore::GotoType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GotoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_HASGOTOTYPE_OFFSET))(this, type);
		}

		::System::Boolean CheckIsOpen(::System::UInt32 unlockID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CHECKISOPEN_OFFSET))(this, unlockID);
		}

		static ::System::UInt32 GetCurrentFunctionEntranceListID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETCURRENTFUNCTIONENTRANCELISTID_OFFSET))();
		}

		static ::System::Boolean IsOpen(::System::UInt32 unlockID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISOPEN_OFFSET))(unlockID);
		}

		static ::System::String* GetIsNotOpenReason(::System::UInt32 unlockID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETISNOTOPENREASON_OFFSET))(unlockID);
		}

		static ::System::Boolean IsUnlocked(::System::UInt32 unlockID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISUNLOCKED_OFFSET))(unlockID);
		}

		static ::System::Boolean CanShow(::System::UInt32 unlockID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CANSHOW_OFFSET))(unlockID);
		}

		static ::System::Boolean IsCommunicationRestricted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISCOMMUNICATIONRESTRICTED_OFFSET))();
		}

		::System::Boolean IsGotoIDValid(::System::UInt32 GotoID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_ISGOTOIDVALID_OFFSET))(this, GotoID);
		}

		::RPG::Client::ConditionChecker* GetConditionCheckerByUnlockID(::System::UInt32 unlockID)
		{
			return ((::RPG::Client::ConditionChecker*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GETCONDITIONCHECKERBYUNLOCKID_OFFSET))(this, unlockID);
		}

		::RPG::Client::Promises::IPromise* ConditionPrepared(::System::UInt32 unlockID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CONDITIONPREPARED_OFFSET))(this, unlockID);
		}

		::RPG::Client::Promises::IPromise* ConditionPrepared_1(::System::Collections::Generic::List_1<::System::UInt32>* unlockIDList)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_CONDITIONPREPARED_1_OFFSET))(this, unlockIDList);
		}

		static ::System::Boolean SkipMailExpireCheck()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_SKIPMAILEXPIRECHECK_OFFSET))();
		}

		::System::Void OverrideFuncEntranceListID(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_OVERRIDEFUNCENTRANCELISTID_OFFSET))(this, id);
		}

		::System::Void ResetFuncEntranceListIDToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_RESETFUNCENTRANCELISTIDTODEFAULT_OFFSET))(this);
		}

		static ::System::String* _GetMainMissionTypeReason(::System::UInt32 mainMissionID, ::RPG::Client::TextID name)
		{
			return ((::System::String*(*)(::System::UInt32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__GETMAINMISSIONTYPEREASON_OFFSET))(mainMissionID, name);
		}

		::System::Void _OnFinishedMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnFinishSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONFINISHSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnLevelUp(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONLEVELUP_OFFSET))(this, arg);
		}

		::System::Void _OnWorldLevelUp(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONWORLDLEVELUP_OFFSET))(this, arg);
		}

		::System::Void _OnRogueDataRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONROGUEDATAREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnBattlePassChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONBATTLEPASSCHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnFeatureChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONFEATURECHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, arg);
		}

		::System::Void _UpdateUnlockStatus(::System::Boolean notifyUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__UPDATEUNLOCKSTATUS_OFFSET))(this, notifyUnlock);
		}

		::System::Void _LoadFunctionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCTIONDATA_OFFSET))(this);
		}

		::System::Void _LoadFuncEntranceDataConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCENTRANCEDATACONFIG_OFFSET))(this);
		}

		::System::Void _LoadFuncUnlockDataConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__LOADFUNCUNLOCKDATACONFIG_OFFSET))(this);
		}

		::System::Void _UpdateFuncUnlockDatas(::System::Boolean notifyUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__UPDATEFUNCUNLOCKDATAS_OFFSET))(this, notifyUnlock);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* _GetValidFuncEntranceDatas(::Il2CppArray<::System::UInt32>* pFunEntranceIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__GETVALIDFUNCENTRANCEDATAS_OFFSET))(this, pFunEntranceIDs);
		}

		::RPG::GameCore::FuncEntranceListConfigRow* _GetEntranceListConfig()
		{
			return ((::RPG::GameCore::FuncEntranceListConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__GETENTRANCELISTCONFIG_OFFSET))(this);
		}

		::System::Boolean _IsFuncEntranceValid(::RPG::Client::FuncEntranceData* funcEntranceData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE__ISFUNCENTRANCEVALID_OFFSET))(this, funcEntranceData);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BannedFuncEntranceIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GET_BANNEDFUNCENTRANCEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_BannedRedDotKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GET_BANNEDREDDOTKEYS_OFFSET))(this);
		}

		::System::Boolean get_RedeemCodeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE_GET_REDEEMCODEENABLED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
