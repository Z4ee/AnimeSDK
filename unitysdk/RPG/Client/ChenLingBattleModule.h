#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_4CF8088A158DCE25_16;
class Class_1_555CF3ADB8FE92C8;
class Class_1_98E7E795ED3354FD;
class Class_1_D7B17FB02EF70CD8_1;
class Class_1_F3EB7D0860A6C71F_1;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ChenLingBattleDeckInfo; }
namespace RPG::Client { class ChenLingBattleSoldierInfo; }
namespace RPG::Client { class ChenLingBattleStageInfo; }
namespace RPG::Client { class ChenLingPrivilegeInfo; }
namespace RPG::Client::Level { class ChenLingBattleConquerLevelInfo; }
namespace RPG::GameCore { class ChenLingBattleScoreSoldierConfig; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x934F480)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GETRELATEDACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x934DF30)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GETRESIDENTREWARDID_OFFSET UNITYSDK_OFFSET(0x934DE20)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GETTIMELIMITREWARDID_OFFSET UNITYSDK_OFFSET(0x934DD10)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_CONQUERLEVELINFO_OFFSET UNITYSDK_OFFSET(0x934EEC0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_DECKINFO_OFFSET UNITYSDK_OFFSET(0x934EE80)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_ENCHANTINFO_OFFSET UNITYSDK_OFFSET(0x934EEE0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_PRIVILEGEINFO_OFFSET UNITYSDK_OFFSET(0x934EEA0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0x934EE60)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SOLDIERINFO_OFFSET UNITYSDK_OFFSET(0x934EE20)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x934EE40)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x934EF00)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x934F790)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_CONQUERLEVELINFO_OFFSET UNITYSDK_OFFSET(0x934EED0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_DECKINFO_OFFSET UNITYSDK_OFFSET(0x934EE90)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_ENCHANTINFO_OFFSET UNITYSDK_OFFSET(0x934EEF0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_PRIVILEGEINFO_OFFSET UNITYSDK_OFFSET(0x934EEB0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0x934EE70)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SOLDIERINFO_OFFSET UNITYSDK_OFFSET(0x934EE30)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x934EE50)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x934DFF0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x934F810)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x934F7F0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__HANDLESINGLECHANGE_OFFSET UNITYSDK_OFFSET(0x934E9C0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__INITCONSTANTS_OFFSET UNITYSDK_OFFSET(0x934DC60)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGACTIVATEDPRIVILEGESCRSP_OFFSET UNITYSDK_OFFSET(0x934ED70)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x934E440)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGQUITSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x934E390)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSTARTSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x934E250)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSYNCCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x934E6E0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONFINALSTAGEMAXWAVECHANGE_OFFSET UNITYSDK_OFFSET(0x934ECF0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEPROGRESSCHANGE_OFFSET UNITYSDK_OFFSET(0x934E620)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEWAVEPHASECHANGE_OFFSET UNITYSDK_OFFSET(0x934EC50)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__SENDGETDATAREQ_OFFSET UNITYSDK_OFFSET(0x934E140)
#define RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x934F920)
#define RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x934F890)
#define RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x934F930)
#define RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x934F830)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleModule_TypeDefinitionIndex = 49823;

	class ChenLingBattleModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_ACTIVITY_OFFERING_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleModule_TypeDefinitionIndex)->GetStaticField(0xD750);
		}
		static ::System::UInt32* StaticGet_ACTIVITY_REWARD_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleModule_TypeDefinitionIndex)->GetStaticField(0xD754);
		}
		static ::System::UInt32* StaticGet_ACTIVITY_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleModule_TypeDefinitionIndex)->GetStaticField(0xD758);
		}
		// static const ::System::String* BattleGameConfigPath; // 0x0
		::RPG::Client::ChenLingPrivilegeInfo* _PrivilegeInfo_k__BackingField; // 0x10
		::Class_1_F3EB7D0860A6C71F_1* _SkillInfo_k__BackingField; // 0x18
		::Class_1_555CF3ADB8FE92C8* _EnchantInfo_k__BackingField; // 0x20
		::RPG::Client::ChenLingBattleSoldierInfo* _SoldierInfo_k__BackingField; // 0x28
		::RPG::Client::Level::ChenLingBattleConquerLevelInfo* _ConquerLevelInfo_k__BackingField; // 0x30
		::RPG::Client::ChenLingBattleStageInfo* _StageInfo_k__BackingField; // 0x38
		::RPG::Client::ChenLingBattleDeckInfo* _DeckInfo_k__BackingField; // 0x40
		::RPG::GameCore::ChenLingBattleScoreSoldierConfig* BattleScoreSoldierConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__CCTOR_OFFSET))();
		}

		::System::Void _InitConstants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__INITCONSTANTS_OFFSET))(this);
		}

		::System::UInt32 GetTimeLimitRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GETTIMELIMITREWARDID_OFFSET))(this);
		}

		::System::UInt32 GetResidentRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GETRESIDENTREWARDID_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetRelatedActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GETRELATEDACTIVITYDATA_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _SendGetDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__SENDGETDATAREQ_OFFSET))(this);
		}

		::System::Void _OnChenLingStartStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSTARTSTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChenLingQuitStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGQUITSTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChenLingGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChenLingSyncChangeScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSYNCCHANGESCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _HandleSingleChange(::Class_1_98E7E795ED3354FD* change)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98E7E795ED3354FD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__HANDLESINGLECHANGE_OFFSET))(this, change);
		}

		::System::Void _OnStageProgressChange(::Class_1_4CF8088A158DCE25_16* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEPROGRESSCHANGE_OFFSET))(this, info);
		}

		::System::Void _OnStageWavePhaseChange(::Class_1_D7B17FB02EF70CD8_1* ChenLingWavePhaseChange)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7B17FB02EF70CD8_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEWAVEPHASECHANGE_OFFSET))(this, ChenLingWavePhaseChange);
		}

		::System::Void _OnFinalStageMaxWaveChange(::System::UInt32 maxWave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONFINALSTAGEMAXWAVECHANGE_OFFSET))(this, maxWave);
		}

		::System::Void _OnChenLingActivatedPrivilegeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGACTIVATEDPRIVILEGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::ChenLingBattleSoldierInfo* get_SoldierInfo()
		{
			return ((::RPG::Client::ChenLingBattleSoldierInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SOLDIERINFO_OFFSET))(this);
		}

		::System::Void set_SoldierInfo(::RPG::Client::ChenLingBattleSoldierInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleSoldierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SOLDIERINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingBattleStageInfo* get_StageInfo()
		{
			return ((::RPG::Client::ChenLingBattleStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_STAGEINFO_OFFSET))(this);
		}

		::System::Void set_StageInfo(::RPG::Client::ChenLingBattleStageInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleStageInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_STAGEINFO_OFFSET))(this, value);
		}

		::Class_1_F3EB7D0860A6C71F_1* get_SkillInfo()
		{
			return ((::Class_1_F3EB7D0860A6C71F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SKILLINFO_OFFSET))(this);
		}

		::System::Void set_SkillInfo(::Class_1_F3EB7D0860A6C71F_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3EB7D0860A6C71F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SKILLINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingBattleDeckInfo* get_DeckInfo()
		{
			return ((::RPG::Client::ChenLingBattleDeckInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_DECKINFO_OFFSET))(this);
		}

		::System::Void set_DeckInfo(::RPG::Client::ChenLingBattleDeckInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_DECKINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingPrivilegeInfo* get_PrivilegeInfo()
		{
			return ((::RPG::Client::ChenLingPrivilegeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_PRIVILEGEINFO_OFFSET))(this);
		}

		::System::Void set_PrivilegeInfo(::RPG::Client::ChenLingPrivilegeInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_PRIVILEGEINFO_OFFSET))(this, value);
		}

		::RPG::Client::Level::ChenLingBattleConquerLevelInfo* get_ConquerLevelInfo()
		{
			return ((::RPG::Client::Level::ChenLingBattleConquerLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_CONQUERLEVELINFO_OFFSET))(this);
		}

		::System::Void set_ConquerLevelInfo(::RPG::Client::Level::ChenLingBattleConquerLevelInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Level::ChenLingBattleConquerLevelInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_CONQUERLEVELINFO_OFFSET))(this, value);
		}

		::Class_1_555CF3ADB8FE92C8* get_EnchantInfo()
		{
			return ((::Class_1_555CF3ADB8FE92C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_ENCHANTINFO_OFFSET))(this);
		}

		::System::Void set_EnchantInfo(::Class_1_555CF3ADB8FE92C8* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_555CF3ADB8FE92C8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_ENCHANTINFO_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
