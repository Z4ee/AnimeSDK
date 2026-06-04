#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_6.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/BattleResultProcess_RestartOption.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_4230F9CA2B3ADD2E;
class Class_1_550BA41EEAAD6293;
class Class_1_8654F1DF226F6DE3_2;
class Class_1_E14A0A1A8B1F847C_1;
class Class_1_E591DF54310AABF5_1;
namespace RPG::Client { class BattleResultInfo; }
namespace RPG::Client { class PunkLordData; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BATTLEMODULE_CLEARBATTLETARGETINFO_OFFSET UNITYSDK_OFFSET(0xB3FFCB0)
#define RPG_CLIENT_BATTLEMODULE_CLEARRESULTINFO_OFFSET UNITYSDK_OFFSET(0xB3FE820)
#define RPG_CLIENT_BATTLEMODULE_GETAETHERDIVIDEBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB3FFF50)
#define RPG_CLIENT_BATTLEMODULE_GETBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB3FFF10)
#define RPG_CLIENT_BATTLEMODULE_GETCURRENTBATTLEID_OFFSET UNITYSDK_OFFSET(0xB3EDCE0)
#define RPG_CLIENT_BATTLEMODULE_GET_BATTLETARGETRECORD_OFFSET UNITYSDK_OFFSET(0xB4002C0)
#define RPG_CLIENT_BATTLEMODULE_GET_CANRESTARTBYTRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0xB3E5C10)
#define RPG_CLIENT_BATTLEMODULE_GET_CHALLENGETARGETTITLE_OFFSET UNITYSDK_OFFSET(0xB4002D0)
#define RPG_CLIENT_BATTLEMODULE_GET_DIABLEBATTLEGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xB400310)
#define RPG_CLIENT_BATTLEMODULE_GET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0xB400290)
#define RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLEEND_OFFSET UNITYSDK_OFFSET(0xB400220)
#define RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLESTART_OFFSET UNITYSDK_OFFSET(0xB400200)
#define RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLETIME_OFFSET UNITYSDK_OFFSET(0xB400240)
#define RPG_CLIENT_BATTLEMODULE_GET_LOCALBATTLEENDSTATUS_OFFSET UNITYSDK_OFFSET(0xB4001E0)
#define RPG_CLIENT_BATTLEMODULE_GET_PASSTARGETTITLE_OFFSET UNITYSDK_OFFSET(0xB4002E0)
#define RPG_CLIENT_BATTLEMODULE_GET_RESTARTOPTION_OFFSET UNITYSDK_OFFSET(0xB400430)
#define RPG_CLIENT_BATTLEMODULE_GET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0xB4001D0)
#define RPG_CLIENT_BATTLEMODULE_GET_SHOULDTOASTCANCELBATTLE_OFFSET UNITYSDK_OFFSET(0xB4002A0)
#define RPG_CLIENT_BATTLEMODULE_GET_TRIGGERBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB4002F0)
#define RPG_CLIENT_BATTLEMODULE_GET_TRIGGETBATTLEEVENTID_OFFSET UNITYSDK_OFFSET(0xB400480)
#define RPG_CLIENT_BATTLEMODULE_HASBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB3FFF90)
#define RPG_CLIENT_BATTLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB3FEAA0)
#define RPG_CLIENT_BATTLEMODULE_REQUESTCHECKCURBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB3FE740)
#define RPG_CLIENT_BATTLEMODULE_RESTARTCURRENTBATTLE_OFFSET UNITYSDK_OFFSET(0xB3E6590)
#define RPG_CLIENT_BATTLEMODULE_SETAETHERDIVIDEBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB3E7C00)
#define RPG_CLIENT_BATTLEMODULE_SETBATTLEENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB3FFBE0)
#define RPG_CLIENT_BATTLEMODULE_SETBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB3E7BA0)
#define RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETRECORD_OFFSET UNITYSDK_OFFSET(0xB400040)
#define RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETTITLE_1_OFFSET UNITYSDK_OFFSET(0xB400120)
#define RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETTITLE_OFFSET UNITYSDK_OFFSET(0xB4000B0)
#define RPG_CLIENT_BATTLEMODULE_SETLOCALBATTLERESULTSTATUS_OFFSET UNITYSDK_OFFSET(0xB3FE950)
#define RPG_CLIENT_BATTLEMODULE_SET_LASTBATTLEEND_OFFSET UNITYSDK_OFFSET(0xB400230)
#define RPG_CLIENT_BATTLEMODULE_SET_LASTBATTLESTART_OFFSET UNITYSDK_OFFSET(0xB400210)
#define RPG_CLIENT_BATTLEMODULE_SET_LOCALBATTLEENDSTATUS_OFFSET UNITYSDK_OFFSET(0xB4001F0)
#define RPG_CLIENT_BATTLEMODULE_SET_SHOULDTOASTCANCELBATTLE_OFFSET UNITYSDK_OFFSET(0xB4002B0)
#define RPG_CLIENT_BATTLEMODULE_SET_TRIGGERBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB400300)
#define RPG_CLIENT_BATTLEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB3FEE90)
#define RPG_CLIENT_BATTLEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB3FEC60)
#define RPG_CLIENT_BATTLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4004D0)
#define RPG_CLIENT_BATTLEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB3FFAF0)
#define RPG_CLIENT_BATTLEMODULE__ONBATTLEGAMEMODESTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB3FFB60)
#define RPG_CLIENT_BATTLEMODULE__ONBATTLEPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB3FFA10)
#define RPG_CLIENT_BATTLEMODULE__ONBATTLEREPLAYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB3FF680)
#define RPG_CLIENT_BATTLEMODULE__ONBATTLERESULTAFTERPHASE_OFFSET UNITYSDK_OFFSET(0xB3FF7C0)
#define RPG_CLIENT_BATTLEMODULE__ONFINISHREWARDTOAST_OFFSET UNITYSDK_OFFSET(0xB3FF9C0)
#define RPG_CLIENT_BATTLEMODULE__ONGETCURBATTLEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB3FFD80)
#define RPG_CLIENT_BATTLEMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xB3FF840)
#define RPG_CLIENT_BATTLEMODULE__ONPVEBATTLERESULTSCRSP_OFFSET UNITYSDK_OFFSET(0xB3FF250)
#define RPG_CLIENT_BATTLEMODULE__ONQUITBATTLESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB3FF1F0)
#define RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB400550)
#define RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB400630)
#define RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB4005D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleModule_TypeDefinitionIndex = 58839;

	class BattleModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Boolean* StaticGet_ADVMapUseHLOD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleModule_TypeDefinitionIndex)->GetStaticField(0x13970);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BattleTargetRecord; // 0x10
		::RPG::Client::PunkLordData* CurrentPunkLordData; // 0x18
		::Class_1_E14A0A1A8B1F847C_1* AetherDivideBattleInfo; // 0x20
		::Class_1_550BA41EEAAD6293* _BattleStartInfo; // 0x28
		::Class_1_4230F9CA2B3ADD2E* _TriggerBattleInfo_k__BackingField; // 0x30
		::Class_1_8654F1DF226F6DE3_2* CurrentPunkLordReplay; // 0x38
		::Class_1_E591DF54310AABF5_1* BattleInfo; // 0x40
		::RPG::GameCore::PVEGameStatistics* LastBattleStatistic; // 0x48
		::System::Action* _GameStartPreAction; // 0x50
		::RPG::Client::BattleResultInfo* _BattleResultInfo; // 0x58
		::RPG::Client::TextID _PassTargetTitle; // 0x60
		::Enum_3_DB663931210BBC27_8 _LocalBattleEndStatus_k__BackingField; // 0x70
		::System::UInt32 _LastBattleEnd_k__BackingField; // 0x74
		::System::Boolean _ShouldToastCancelBattle_k__BackingField; // 0x78
		::System::Boolean _InBattle; // 0x79
		::System::UInt32 _LastBattleStart_k__BackingField; // 0x7C
		::RPG::Client::TextID _ChallengeTargetTitle; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void RequestCheckCurBattleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_REQUESTCHECKCURBATTLEINFO_OFFSET))(this);
		}

		::System::Void ClearResultInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_CLEARRESULTINFO_OFFSET))(this);
		}

		::System::Void SetLocalBattleResultStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETLOCALBATTLERESULTSTATUS_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnQuitBattleScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONQUITBATTLESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPvebattleResultScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONPVEBATTLERESULTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBattleReplayScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONBATTLEREPLAYSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBattleResultAfterPhase(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONBATTLERESULTAFTERPHASE_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnFinishRewardToast(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONFINISHREWARDTOAST_OFFSET))(this, a1);
		}

		::System::Void _OnBattlePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONBATTLEPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGameModeStateChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONBATTLEGAMEMODESTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnGetCurBattleInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONGETCURBATTLEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SetBattleInfo(::Class_1_E591DF54310AABF5_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETBATTLEINFO_OFFSET))(this, a1);
		}

		::Class_1_E591DF54310AABF5_1* GetBattleInfo()
		{
			return ((::Class_1_E591DF54310AABF5_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GETBATTLEINFO_OFFSET))(this);
		}

		::System::Void SetAetherDivideBattleInfo(::Class_1_E14A0A1A8B1F847C_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETAETHERDIVIDEBATTLEINFO_OFFSET))(this, a1);
		}

		::Class_1_E14A0A1A8B1F847C_1* GetAetherDivideBattleInfo()
		{
			return ((::Class_1_E14A0A1A8B1F847C_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GETAETHERDIVIDEBATTLEINFO_OFFSET))(this);
		}

		::System::UInt32 GetCurrentBattleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GETCURRENTBATTLEID_OFFSET))(this);
		}

		::System::Boolean HasBattleInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_HASBATTLEINFO_OFFSET))(this);
		}

		::System::Void SetBattleTargetRecord(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETRECORD_OFFSET))(this, a1, a2);
		}

		::System::Void SetBattleTargetTitle(::RPG::Client::TextID a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETTITLE_OFFSET))(this, a1, a2);
		}

		::System::Void SetBattleTargetTitle_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETTITLE_1_OFFSET))(this, a1, a2);
		}

		::System::Void ClearBattleTargetInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_CLEARBATTLETARGETINFO_OFFSET))(this);
		}

		::System::Boolean RestartCurrentBattle(::Enum_3_71AA90D596A09AC8_6 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_6))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_RESTARTCURRENTBATTLE_OFFSET))(this, a1);
		}

		::System::Void SetBattleEndTimeStamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETBATTLEENDTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::BattleResultInfo* get_ResultInfo()
		{
			return ((::RPG::Client::BattleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_RESULTINFO_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_8 get_LocalBattleEndStatus()
		{
			return ((::Enum_3_DB663931210BBC27_8(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_LOCALBATTLEENDSTATUS_OFFSET))(this);
		}

		::System::Void set_LocalBattleEndStatus(::Enum_3_DB663931210BBC27_8 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SET_LOCALBATTLEENDSTATUS_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastBattleStart()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLESTART_OFFSET))(this);
		}

		::System::Void set_LastBattleStart(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SET_LASTBATTLESTART_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastBattleEnd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLEEND_OFFSET))(this);
		}

		::System::Void set_LastBattleEnd(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SET_LASTBATTLEEND_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastBattleTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLETIME_OFFSET))(this);
		}

		::System::Boolean get_IsInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_ISINBATTLE_OFFSET))(this);
		}

		::System::Boolean get_ShouldToastCancelBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_SHOULDTOASTCANCELBATTLE_OFFSET))(this);
		}

		::System::Void set_ShouldToastCancelBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SET_SHOULDTOASTCANCELBATTLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_BattleTargetRecord()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_BATTLETARGETRECORD_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeTargetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_CHALLENGETARGETTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_PassTargetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_PASSTARGETTITLE_OFFSET))(this);
		}

		::Class_1_4230F9CA2B3ADD2E* get_TriggerBattleInfo()
		{
			return ((::Class_1_4230F9CA2B3ADD2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_TRIGGERBATTLEINFO_OFFSET))(this);
		}

		::System::Void set_TriggerBattleInfo(::Class_1_4230F9CA2B3ADD2E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4230F9CA2B3ADD2E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SET_TRIGGERBATTLEINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRestartByTriggerBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_CANRESTARTBYTRIGGERBATTLE_OFFSET))(this);
		}

		::System::Boolean get_DiableBattleGlobalConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_DIABLEBATTLEGLOBALCONFIG_OFFSET))(this);
		}

		::RPG::Client::BattleResultProcess_RestartOption get_RestartOption()
		{
			return ((::RPG::Client::BattleResultProcess_RestartOption(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_RESTARTOPTION_OFFSET))(this);
		}

		::System::UInt32 get_TriggetBattleEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_TRIGGETBATTLEEVENTID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
