#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_7.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/LogicStateType.h"
#include "unitysdk/RPG/Client/PlayerLevelUpgradeData.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/Struct_2_02050905F189B085.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

class Class_1_179F1169B98B4031;
class Class_1_21DCD4640D389503_32;
class Class_1_21DCD4640D389503_37;
class Class_1_A854D54E8183102C;
class Class_1_D17272E82AE804C2_873;
class Class_1_DD82D6A2390AAA97;
class Class_1_F138DBFC3396EA15_2;
namespace RPG::Client { class PlayerBoardInfo; }
namespace RPG::Client { class PlayerData; }
namespace RPG::Client { class PlayerSettingData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERMODULE_ADDMEMBERTOTEAM_OFFSET UNITYSDK_OFFSET(0x1AE08EF0)
#define RPG_CLIENT_PLAYERMODULE_ADDSTATETOWAITINGQUEUE_OFFSET UNITYSDK_OFFSET(0x1AE077F0)
#define RPG_CLIENT_PLAYERMODULE_GETDISPLAYLOCALPLAYERBOARDINFOWITHCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AE09210)
#define RPG_CLIENT_PLAYERMODULE_GETDISPLAYLOCALPLAYERBOARDINFO_OFFSET UNITYSDK_OFFSET(0x1AE09170)
#define RPG_CLIENT_PLAYERMODULE_GETGENDER_OFFSET UNITYSDK_OFFSET(0x1AE09100)
#define RPG_CLIENT_PLAYERMODULE_GET_ALLOWMODIFYNICKNAME_OFFSET UNITYSDK_OFFSET(0x1AE08560)
#define RPG_CLIENT_PLAYERMODULE_GET_ALLOWMODIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1AE08640)
#define RPG_CLIENT_PLAYERMODULE_GET_ASSISTAVATARMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE09AF0)
#define RPG_CLIENT_PLAYERMODULE_GET_DISPLAYAVATARMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE103F0)
#define RPG_CLIENT_PLAYERMODULE_GET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x1AE08480)
#define RPG_CLIENT_PLAYERMODULE_GET_LOGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AE084C0)
#define RPG_CLIENT_PLAYERMODULE_GET_MAXPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE08520)
#define RPG_CLIENT_PLAYERMODULE_GET_MAXWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE08500)
#define RPG_CLIENT_PLAYERMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x1AE084A0)
#define RPG_CLIENT_PLAYERMODULE_GET_PLAYERSECRETCHECKER_OFFSET UNITYSDK_OFFSET(0x1AE08540)
#define RPG_CLIENT_PLAYERMODULE_GET_PLAYERSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x1AE084E0)
#define RPG_CLIENT_PLAYERMODULE_GET_RENAMECD_OFFSET UNITYSDK_OFFSET(0x1AE08720)
#define RPG_CLIENT_PLAYERMODULE_INITLOGICSTATE_OFFSET UNITYSDK_OFFSET(0x1AE07190)
#define RPG_CLIENT_PLAYERMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1AE089F0)
#define RPG_CLIENT_PLAYERMODULE_ISWORLDLEVELUNLOCKEDLOCAL_OFFSET UNITYSDK_OFFSET(0x1AE094F0)
#define RPG_CLIENT_PLAYERMODULE_MODIFYASSISTAVATARS_OFFSET UNITYSDK_OFFSET(0x1AE09930)
#define RPG_CLIENT_PLAYERMODULE_ONENTERWORLD_OFFSET UNITYSDK_OFFSET(0x1AE07ED0)
#define RPG_CLIENT_PLAYERMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1AE08E20)
#define RPG_CLIENT_PLAYERMODULE_POPLOGICSTATE_OFFSET UNITYSDK_OFFSET(0x1AE07A60)
#define RPG_CLIENT_PLAYERMODULE_PRINTLOGICSTATE_OFFSET UNITYSDK_OFFSET(0x1AE08050)
#define RPG_CLIENT_PLAYERMODULE_SETGENDER_OFFSET UNITYSDK_OFFSET(0x1AE09000)
#define RPG_CLIENT_PLAYERMODULE_SETNICKNAME_OFFSET UNITYSDK_OFFSET(0x1AE08F40)
#define RPG_CLIENT_PLAYERMODULE_SET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x1AE08490)
#define RPG_CLIENT_PLAYERMODULE_SET_LOGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AE084D0)
#define RPG_CLIENT_PLAYERMODULE_SET_MAXPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE08530)
#define RPG_CLIENT_PLAYERMODULE_SET_MAXWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE08510)
#define RPG_CLIENT_PLAYERMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x1AE084B0)
#define RPG_CLIENT_PLAYERMODULE_SET_PLAYERSECRETCHECKER_OFFSET UNITYSDK_OFFSET(0x1AE08550)
#define RPG_CLIENT_PLAYERMODULE_SET_PLAYERSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x1AE084F0)
#define RPG_CLIENT_PLAYERMODULE_TRYPUSHLOGICSTATE_OFFSET UNITYSDK_OFFSET(0x1AE07320)
#define RPG_CLIENT_PLAYERMODULE_UPLOADPLAYEROBJDATA_OFFSET UNITYSDK_OFFSET(0x1AE098F0)
#define RPG_CLIENT_PLAYERMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AE0AC60)
#define RPG_CLIENT_PLAYERMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AE09BD0)
#define RPG_CLIENT_PLAYERMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE10B60)
#define RPG_CLIENT_PLAYERMODULE__CLEARLEVELUPDATACACHE_OFFSET UNITYSDK_OFFSET(0x1AE0D500)
#define RPG_CLIENT_PLAYERMODULE__CMDGETBASICINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0AD30)
#define RPG_CLIENT_PLAYERMODULE__CMDPLAYERGETTOKENSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0B6B0)
#define RPG_CLIENT_PLAYERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE10910)
#define RPG_CLIENT_PLAYERMODULE__GETAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1AE10540)
#define RPG_CLIENT_PLAYERMODULE__GETINITGENDER_OFFSET UNITYSDK_OFFSET(0x1AE0DDA0)
#define RPG_CLIENT_PLAYERMODULE__HANDLELEVELUPANDADDEXP_OFFSET UNITYSDK_OFFSET(0x1AE0D170)
#define RPG_CLIENT_PLAYERMODULE__HANDLEPLAYERINBLACKLIST_OFFSET UNITYSDK_OFFSET(0x1AE104D0)
#define RPG_CLIENT_PLAYERMODULE__INITMAXPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE08C80)
#define RPG_CLIENT_PLAYERMODULE__INITMAXWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE08B10)
#define RPG_CLIENT_PLAYERMODULE__KICKOFFBYCHANGEPWD_OFFSET UNITYSDK_OFFSET(0x1AE0D810)
#define RPG_CLIENT_PLAYERMODULE__KICKOFFBYMTP_OFFSET UNITYSDK_OFFSET(0x1AE0D8A0)
#define RPG_CLIENT_PLAYERMODULE__KICKOFFBYMUIP_OFFSET UNITYSDK_OFFSET(0x1AE0D930)
#define RPG_CLIENT_PLAYERMODULE__KICKOFFBYSQUEEZED_OFFSET UNITYSDK_OFFSET(0x1AE0D770)
#define RPG_CLIENT_PLAYERMODULE__ONADVENTUREPHASEENTER_OFFSET UNITYSDK_OFFSET(0x1AE0FAF0)
#define RPG_CLIENT_PLAYERMODULE__ONCLIENTOBJDOWNLOADDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE10270)
#define RPG_CLIENT_PLAYERMODULE__ONCLIENTOBJUPLOADSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE10360)
#define RPG_CLIENT_PLAYERMODULE__ONCMDDAILYREFRESHNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE0EDF0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDGETLEVELREWARDSCRCP_OFFSET UNITYSDK_OFFSET(0x1AE0E4B0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDGETLEVELREWARDTAKENLISTSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0E7C0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDGETSECRETKEYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0E0C0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDGETVIDEOVERSIONKEYSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0E150)
#define RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERLOGINSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0C1B0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERSQUEEZEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE0D550)
#define RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE0C9F0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDSETGENDERSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0DB70)
#define RPG_CLIENT_PLAYERMODULE__ONCMDSETNICKNAMESCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0D9C0)
#define RPG_CLIENT_PLAYERMODULE__ONCMDSETPLAYERINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0DE20)
#define RPG_CLIENT_PLAYERMODULE__ONGETPLAYERBOARDDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0F060)
#define RPG_CLIENT_PLAYERMODULE__ONGETPLAYERDETAILINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE10130)
#define RPG_CLIENT_PLAYERMODULE__ONRESERVESTAMINAEXCHANGESCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0E400)
#define RPG_CLIENT_PLAYERMODULE__ONSETASSISTAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0F710)
#define RPG_CLIENT_PLAYERMODULE__ONSETDISPLAYAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0F480)
#define RPG_CLIENT_PLAYERMODULE__ONSETGAMEPLAYBIRTHDAYSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0FA60)
#define RPG_CLIENT_PLAYERMODULE__ONSETHEADICONSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0F340)
#define RPG_CLIENT_PLAYERMODULE__ONSETISDISPLAYAVATARINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0F9E0)
#define RPG_CLIENT_PLAYERMODULE__ONSETPERSONALCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0F3E0)
#define RPG_CLIENT_PLAYERMODULE__ONSETSIGNATURESCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0EFD0)
#define RPG_CLIENT_PLAYERMODULE__ONSOCIALPLAYSETTINGINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE10080)
#define RPG_CLIENT_PLAYERMODULE__ONSTAMINAINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE0E1E0)
#define RPG_CLIENT_PLAYERMODULE__ONUPDATEPLAYERSETTINGSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0FBB0)
#define RPG_CLIENT_PLAYERMODULE__REFRESHWEEKLYCOCOON_OFFSET UNITYSDK_OFFSET(0x1AE0EEF0)
#define RPG_CLIENT_PLAYERMODULE__SDKREPORTPLAYERGETTOKENRSP_OFFSET UNITYSDK_OFFSET(0x1AE0BC20)
#define RPG_CLIENT_PLAYERMODULE__SDKREPORTPLAYERLOGINSCRSP_OFFSET UNITYSDK_OFFSET(0x1AE0C730)
#define RPG_CLIENT_PLAYERMODULE__SYNCPLAYERBOARDDATA_OFFSET UNITYSDK_OFFSET(0x1AE0F0D0)
#define RPG_CLIENT_PLAYERMODULE__UPDATEASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x1AE0F7C0)
#define RPG_CLIENT_PLAYERMODULE__UPDATEDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1AE0F500)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerModule_TypeDefinitionIndex = 66718;

	class PlayerModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__REQ_LOCAL_BOARDINFO_CD()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerModule_TypeDefinitionIndex)->GetStaticField(0x12DE0);
		}
		static ::System::UInt32* StaticGet__RENAMECD()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerModule_TypeDefinitionIndex)->GetStaticField(0x12DE4);
		}
		// static const ::System::String* _LUA_WORLD_LEVEUP_UP_DIALOG; // 0x0
		// static const ::System::String* _LUA_ADD_EXP_DIALOG; // 0x0
		::RPG::Client::PlayerSettingData* _PlayerSettingData_k__BackingField; // 0x10
		::Class_1_A854D54E8183102C* _ObjData; // 0x18
		::System::Collections::Generic::CacheLinkedList_1<::Struct_2_02050905F189B085>* waitingQueue; // 0x20
		::Class_1_179F1169B98B4031* _PlayerSecretChecker_k__BackingField; // 0x28
		::RPG::Client::PlayerData* _PlayerData_k__BackingField; // 0x30
		::RPG::Client::PlayerBoardInfo* _LocalPlayerBoardInfo; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LogicStateType, ::Class_1_DD82D6A2390AAA97*>* allStates; // 0x40
		::Class_1_DD82D6A2390AAA97* CurrentLogicState; // 0x48
		::System::Boolean _IsEneterWorld_k__BackingField; // 0x50
		::RPG::Client::PlayerLevelUpgradeData _LevelUpDataCache; // 0x54
		::System::Int64 _LastSetNickNameTimeStamp; // 0x60
		::System::UInt32 _LoginTimeStamp_k__BackingField; // 0x68
		::System::UInt32 _MaxPlayerLevel_k__BackingField; // 0x6C
		::System::UInt32 _LastReqLocalBoardInfoTimeStamp; // 0x70
		::System::UInt32 _MaxWorldLevel_k__BackingField; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__CCTOR_OFFSET))();
		}

		::System::Void initLogicState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_INITLOGICSTATE_OFFSET))(this);
		}

		::System::Boolean TryPushLogicState(::RPG::Client::LogicStateType a1, ::System::Boolean a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LogicStateType, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_TRYPUSHLOGICSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddStateToWaitingQueue(::RPG::Client::LogicStateType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LogicStateType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_ADDSTATETOWAITINGQUEUE_OFFSET))(this, a1, a2);
		}

		::System::Void PopLogicState(::RPG::Client::LogicStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LogicStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_POPLOGICSTATE_OFFSET))(this, a1);
		}

		::System::Void OnEnterWorld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_ONENTERWORLD_OFFSET))(this);
		}

		::System::Void PrintLogicState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_PRINTLOGICSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsEneterWorld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_ISENETERWORLD_OFFSET))(this);
		}

		::System::Void set_IsEneterWorld(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_ISENETERWORLD_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerData* get_PlayerData()
		{
			return ((::RPG::Client::PlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::PlayerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_PLAYERDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_LoginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_LOGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_LoginTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_LOGINTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerSettingData* get_PlayerSettingData()
		{
			return ((::RPG::Client::PlayerSettingData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_PLAYERSETTINGDATA_OFFSET))(this);
		}

		::System::Void set_PlayerSettingData(::RPG::Client::PlayerSettingData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerSettingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_PLAYERSETTINGDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxWorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_MAXWORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxWorldLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_MAXWORLDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPlayerLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_MAXPLAYERLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxPlayerLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_MAXPLAYERLEVEL_OFFSET))(this, a1);
		}

		::Class_1_179F1169B98B4031* get_PlayerSecretChecker()
		{
			return ((::Class_1_179F1169B98B4031*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_PLAYERSECRETCHECKER_OFFSET))(this);
		}

		::System::Void set_PlayerSecretChecker(::Class_1_179F1169B98B4031* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_179F1169B98B4031*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SET_PLAYERSECRETCHECKER_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowModifyNickName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_ALLOWMODIFYNICKNAME_OFFSET))(this);
		}

		::System::Boolean get_AllowModifySignature()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_ALLOWMODIFYSIGNATURE_OFFSET))(this);
		}

		::System::Nullable_1<::System::TimeSpan> get_RenameCD()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_RENAMECD_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void AddMemberToTeam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_ADDMEMBERTOTEAM_OFFSET))(this, a1);
		}

		::System::Void SetNickName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SETNICKNAME_OFFSET))(this, a1, a2);
		}

		::System::Void SetGender(::Enum_3_0A3761FE34514D6C_7 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_SETGENDER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GenderType GetGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GETGENDER_OFFSET))(this);
		}

		::RPG::Client::PlayerBoardInfo* GetDisplayLocalPlayerBoardInfo()
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GETDISPLAYLOCALPLAYERBOARDINFO_OFFSET))(this);
		}

		::RPG::Client::PlayerBoardInfo* GetDisplayLocalPlayerBoardInfoWithCollection()
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GETDISPLAYLOCALPLAYERBOARDINFOWITHCOLLECTION_OFFSET))(this);
		}

		::System::Boolean IsWorldLevelUnlockedLocal(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_ISWORLDLEVELUNLOCKEDLOCAL_OFFSET))(this, a1);
		}

		::System::Void UploadPlayerObjData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_UPLOADPLAYEROBJDATA_OFFSET))(this);
		}

		::System::Boolean ModifyAssistAvatars(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_MODIFYASSISTAVATARS_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdGetBasicInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__CMDGETBASICINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdPlayerGetTokenScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__CMDPLAYERGETTOKENSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPlayerLoginScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERLOGINSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleLevelUpAndAddExp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__HANDLELEVELUPANDADDEXP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnCmdPlayerSqueezedScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDPLAYERSQUEEZEDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSetNicknameScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDSETNICKNAMESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSetGenderScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDSETGENDERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSetPlayerInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDSETPLAYERINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetSecretKeyInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDGETSECRETKEYINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetVideoVersionKeyScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDGETVIDEOVERSIONKEYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnStaminaInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSTAMINAINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnReserveStaminaExchangeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONRESERVESTAMINAEXCHANGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetLevelRewardScRcp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDGETLEVELREWARDSCRCP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetLevelRewardTakenListScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDGETLEVELREWARDTAKENLISTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdDailyRefreshNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCMDDAILYREFRESHNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetSignatureScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETSIGNATURESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetPlayerBoardDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONGETPLAYERBOARDDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetHeadIconScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETHEADICONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetPersonalCardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETPERSONALCARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetDisplayAvatarScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETDISPLAYAVATARSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetAssistAvatarScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETASSISTAVATARSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetIsDisplayAvatarInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETISDISPLAYAVATARINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetGameplayBirthdayScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSETGAMEPLAYBIRTHDAYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAdventurePhaseEnter(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONADVENTUREPHASEENTER_OFFSET))(this, a1);
		}

		::System::Void _OnUpdatePlayerSettingScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONUPDATEPLAYERSETTINGSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlaySettingInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONSOCIALPLAYSETTINGINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetPlayerDetailInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONGETPLAYERDETAILINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClientObjDownloadDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCLIENTOBJDOWNLOADDATASCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClientObjUploadScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__ONCLIENTOBJUPLOADSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _KickOffBySqueezed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__KICKOFFBYSQUEEZED_OFFSET))(this);
		}

		::System::Void _KickOffByMTP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__KICKOFFBYMTP_OFFSET))(this);
		}

		::System::Void _KickOffByChangePwd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__KICKOFFBYCHANGEPWD_OFFSET))(this);
		}

		::System::Void _KickOffByMUIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__KICKOFFBYMUIP_OFFSET))(this);
		}

		::RPG::GameCore::GenderType _GetInitGender(::Enum_3_DFCB42601400F441 a1)
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__GETINITGENDER_OFFSET))(this, a1);
		}

		::System::Void _InitMaxWorldLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__INITMAXWORLDLEVEL_OFFSET))(this);
		}

		::System::Void _InitMaxPlayerLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__INITMAXPLAYERLEVEL_OFFSET))(this);
		}

		::System::Void _RefreshWeeklyCocoon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__REFRESHWEEKLYCOCOON_OFFSET))(this);
		}

		::System::Void _ClearLevelUpDataCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__CLEARLEVELUPDATACACHE_OFFSET))(this);
		}

		::System::Void _SyncPlayerBoardData(::Class_1_21DCD4640D389503_37* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__SYNCPLAYERBOARDDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateDisplayAvatarList(::Il2CppArray<::Class_1_D17272E82AE804C2_873*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_D17272E82AE804C2_873*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__UPDATEDISPLAYAVATARLIST_OFFSET))(this, a1);
		}

		::System::Void _UpdateAssistAvatar(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__UPDATEASSISTAVATAR_OFFSET))(this, a1);
		}

		::System::Void _SDKReportPlayerGetTokenRsp(::Class_1_F138DBFC3396EA15_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F138DBFC3396EA15_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__SDKREPORTPLAYERGETTOKENRSP_OFFSET))(this, a1);
		}

		::System::Void _SDKReportPlayerLoginScRsp(::Class_1_21DCD4640D389503_32* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__SDKREPORTPLAYERLOGINSCRSP_OFFSET))(this, a1);
		}

		::System::Void _HandlePlayerInBlackList(::Class_1_F138DBFC3396EA15_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F138DBFC3396EA15_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__HANDLEPLAYERINBLACKLIST_OFFSET))(this, a1);
		}

		::System::String* _GetAppealUrl(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE__GETAPPEALURL_OFFSET))(this, a1);
		}

		::System::UInt32 get_DisplayAvatarMaxCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_DISPLAYAVATARMAXCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AssistAvatarMaxCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE_GET_ASSISTAVATARMAXCOUNT_OFFSET))(this);
		}
	};
}
