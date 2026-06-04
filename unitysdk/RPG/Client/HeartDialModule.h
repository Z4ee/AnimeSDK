#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_41.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/Struct_2_137AB23E3A00ECA1_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1B2F588DD05F2A7A;
class Class_1_AFDC282246B34CC6;
namespace RPG::Client { class HeartDialScriptInfo; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameLevelHeartDialConfigCollection; }
namespace RPG::GameCore { class HeartDialDialogueRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HEARTDIALMODULE_ADDDIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0xBD01B70)
#define RPG_CLIENT_HEARTDIALMODULE_ADDNPCINFO_OFFSET UNITYSDK_OFFSET(0xBD08E90)
#define RPG_CLIENT_HEARTDIALMODULE_ADDSCRIPTINFO_OFFSET UNITYSDK_OFFSET(0xBD01E90)
#define RPG_CLIENT_HEARTDIALMODULE_COLLECTCUSTOMGROUPS_OFFSET UNITYSDK_OFFSET(0xBD06270)
#define RPG_CLIENT_HEARTDIALMODULE_GETCURRENTTRACEINFO_OFFSET UNITYSDK_OFFSET(0xBD03180)
#define RPG_CLIENT_HEARTDIALMODULE_GETDIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0xBD08470)
#define RPG_CLIENT_HEARTDIALMODULE_GETDIALOGUEROWBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBD070F0)
#define RPG_CLIENT_HEARTDIALMODULE_GETFLOORCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBD030F0)
#define RPG_CLIENT_HEARTDIALMODULE_GETFULLCONDITIONDESCTEXTID_OFFSET UNITYSDK_OFFSET(0xBD07AD0)
#define RPG_CLIENT_HEARTDIALMODULE_GETFULLCONDITIONMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xBD07F50)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALDIALOGUECAMERAINDEXBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBD06FC0)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALEMOBLACKLISTBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBD06EF0)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALEMOBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBD06E10)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALMISSINGEMOBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBD071E0)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALNPCBYSTEPANDEMO_OFFSET UNITYSDK_OFFSET(0xBD076A0)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALNPCSBYSTEPTYPE_OFFSET UNITYSDK_OFFSET(0xBD07490)
#define RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALSTEPBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBD06D20)
#define RPG_CLIENT_HEARTDIALMODULE_GETLOCKITEMDATABYNPCID_OFFSET UNITYSDK_OFFSET(0xBD07970)
#define RPG_CLIENT_HEARTDIALMODULE_GETMISSINGITEMDATABYNPCID_OFFSET UNITYSDK_OFFSET(0xBD07810)
#define RPG_CLIENT_HEARTDIALMODULE_GETNEXTEMOTYPE_OFFSET UNITYSDK_OFFSET(0xBD08350)
#define RPG_CLIENT_HEARTDIALMODULE_GETNPCINFOBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBD06810)
#define RPG_CLIENT_HEARTDIALMODULE_GETNPCOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xBD09040)
#define RPG_CLIENT_HEARTDIALMODULE_GETNPCSCRIPTID_OFFSET UNITYSDK_OFFSET(0xBD073A0)
#define RPG_CLIENT_HEARTDIALMODULE_GETPREEMOTYPE_OFFSET UNITYSDK_OFFSET(0xBD08180)
#define RPG_CLIENT_HEARTDIALMODULE_GETSCRIPTCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBD03330)
#define RPG_CLIENT_HEARTDIALMODULE_GETSCRIPTINFOBYSCRIPTID_OFFSET UNITYSDK_OFFSET(0xBD05660)
#define RPG_CLIENT_HEARTDIALMODULE_GETTRACEINFOBYFLOORID_OFFSET UNITYSDK_OFFSET(0xBD08500)
#define RPG_CLIENT_HEARTDIALMODULE_GET_HEARTDIALUNLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0xBD09100)
#define RPG_CLIENT_HEARTDIALMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBD015D0)
#define RPG_CLIENT_HEARTDIALMODULE_ISCHANGEEMOTIONUNLOCK_OFFSET UNITYSDK_OFFSET(0xBD088E0)
#define RPG_CLIENT_HEARTDIALMODULE_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xBD03960)
#define RPG_CLIENT_HEARTDIALMODULE_ONADVENTUREPHASEMAPCREATED_OFFSET UNITYSDK_OFFSET(0xBD025E0)
#define RPG_CLIENT_HEARTDIALMODULE_ONCHANGESCRIPTEMOTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xBD049B0)
#define RPG_CLIENT_HEARTDIALMODULE_ONFINISHEMOTIONDIALOGUEPERFORMANCESCRSP_OFFSET UNITYSDK_OFFSET(0xBD04D30)
#define RPG_CLIENT_HEARTDIALMODULE_ONGETHEARTDIALINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xBD03C60)
#define RPG_CLIENT_HEARTDIALMODULE_ONHEARTDIALSCRIPTCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBD05770)
#define RPG_CLIENT_HEARTDIALMODULE_ONHEARTDIALTRACESCRIPTSCRSP_OFFSET UNITYSDK_OFFSET(0xBD05120)
#define RPG_CLIENT_HEARTDIALMODULE_ONNPCCREATE_OFFSET UNITYSDK_OFFSET(0xBD03520)
#define RPG_CLIENT_HEARTDIALMODULE_ONNPCDESTROY_OFFSET UNITYSDK_OFFSET(0xBD03740)
#define RPG_CLIENT_HEARTDIALMODULE_ONSUBMITEMOTIONITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xBD04C00)
#define RPG_CLIENT_HEARTDIALMODULE_SENDCHANGESCRIPTEMOTIONCSREQ_OFFSET UNITYSDK_OFFSET(0xBD066A0)
#define RPG_CLIENT_HEARTDIALMODULE_SENDCONTROLSTEPFINISHEVENT_OFFSET UNITYSDK_OFFSET(0xBD08B00)
#define RPG_CLIENT_HEARTDIALMODULE_SENDGETHEARTDIALINFOCSREQ_OFFSET UNITYSDK_OFFSET(0xBD08DD0)
#define RPG_CLIENT_HEARTDIALMODULE_SENDHEARTDIALTRACESCRIPTCSREQ_OFFSET UNITYSDK_OFFSET(0xBD06C80)
#define RPG_CLIENT_HEARTDIALMODULE_SENDSUBMITEMOTIONITEMCSREQ_OFFSET UNITYSDK_OFFSET(0xBD068C0)
#define RPG_CLIENT_HEARTDIALMODULE_SET_HEARTDIALUNLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0xBD09110)
#define RPG_CLIENT_HEARTDIALMODULE_SHOWCURRENTSTARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBD085C0)
#define RPG_CLIENT_HEARTDIALMODULE_SHOWSCRIPTANYCHANGEPLAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBD03A70)
#define RPG_CLIENT_HEARTDIALMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD01FA0)
#define RPG_CLIENT_HEARTDIALMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD02200)
#define RPG_CLIENT_HEARTDIALMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD09120)
#define RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBD093B0)
#define RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD09430)
#define RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD09490)

namespace RPG::Client
{
	inline static constexpr unsigned int HeartDialModule_TypeDefinitionIndex = 61390;

	class HeartDialModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* FloorConfigPath; // 0x0
		// static const ::System::String* ScriptConfigPath; // 0x0
		// static const ::System::String* _UNLOCK_FIRST_SCRIPT_ID; // 0x0
		// static const ::System::String* _UNLOCK_STORY_LINE_LIST_ID; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AFDC282246B34CC6*>* _npcRuntimeIDDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1B2F588DD05F2A7A*>* _heartDialDialogueDict; // 0x18
		::System::String* _floorConfigPath; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockStoryLineList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _traceInfoDict; // 0x30
		::System::Collections::Generic::Dictionary_2<::Struct_2_137AB23E3A00ECA1_1, ::Class_1_AFDC282246B34CC6*>* _npcInfoDict; // 0x38
		::RPG::GameCore::GameLevelHeartDialConfigCollection* _floorConfig; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeartDialScriptInfo*>* _heartDialScriptDict; // 0x48
		::System::UInt32 _floorID; // 0x50
		::Enum_3_0A3761FE34514D6C_41 _HeartDialUnlockStatus_k__BackingField; // 0x54
		::System::UInt32 _UnlockFirstScriptID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseMapCreated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONADVENTUREPHASEMAPCREATED_OFFSET))(this, a1);
		}

		::System::Void OnNpcCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONNPCCREATE_OFFSET))(this, a1);
		}

		::System::Void OnNpcDestroy(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONNPCDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void OnGetHeartDialInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONGETHEARTDIALINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnChangeScriptEmotionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONCHANGESCRIPTEMOTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnSubmitEmotionItemScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONSUBMITEMOTIONITEMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnFinishEmotionDialoguePerformanceScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONFINISHEMOTIONDIALOGUEPERFORMANCESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnHeartDialTraceScriptScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONHEARTDIALTRACESCRIPTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnHeartDialScriptChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ONHEARTDIALSCRIPTCHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CollectCustomGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_COLLECTCUSTOMGROUPS_OFFSET))(this);
		}

		::System::Void SendChangeScriptEmotionCsReq(::System::UInt32 a1, ::RPG::GameCore::HeartDialEmoType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SENDCHANGESCRIPTEMOTIONCSREQ_OFFSET))(this, a1, a2);
		}

		::System::Void SendSubmitEmotionItemCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SENDSUBMITEMOTIONITEMCSREQ_OFFSET))(this, a1);
		}

		::System::Void SendHeartDialTraceScriptCsReq(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SENDHEARTDIALTRACESCRIPTCSREQ_OFFSET))(this, a1, a2);
		}

		::Class_1_AFDC282246B34CC6* GetNpcInfoByRuntimeID(::System::UInt32 a1)
		{
			return ((::Class_1_AFDC282246B34CC6*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETNPCINFOBYRUNTIMEID_OFFSET))(this, a1);
		}

		::RPG::Client::HeartDialScriptInfo* GetScriptInfoByScriptID(::System::UInt32 a1)
		{
			return ((::RPG::Client::HeartDialScriptInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETSCRIPTINFOBYSCRIPTID_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeartDialStepType GetHeartDialStepByRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialStepType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALSTEPBYRUNTIMEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeartDialEmoType GetHeartDialEmoByRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALEMOBYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* GetHeartDialEmoBlackListByRuntimeID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALEMOBLACKLISTBYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::UInt32 GetHeartDialDialogueCameraIndexByRuntimeID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALDIALOGUECAMERAINDEXBYRUNTIMEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeartDialDialogueRow* GetDialogueRowByRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialDialogueRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETDIALOGUEROWBYRUNTIMEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeartDialEmoType GetHeartDialMissingEmoByRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALMISSINGEMOBYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::UInt32 GetNpcScriptID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETNPCSCRIPTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_AFDC282246B34CC6*>* GetHeartDialNpcsByStepType(::RPG::GameCore::HeartDialStepType a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_AFDC282246B34CC6*>*(*)(::PVOID, ::RPG::GameCore::HeartDialStepType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALNPCSBYSTEPTYPE_OFFSET))(this, a1);
		}

		::Class_1_AFDC282246B34CC6* GetHeartDialNpcByStepAndEmo(::RPG::GameCore::HeartDialStepType a1, ::RPG::GameCore::HeartDialEmoType a2)
		{
			return ((::Class_1_AFDC282246B34CC6*(*)(::PVOID, ::RPG::GameCore::HeartDialStepType, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETHEARTDIALNPCBYSTEPANDEMO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetMissingItemDataByNpcID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETMISSINGITEMDATABYNPCID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetLockItemDataByNpcID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETLOCKITEMDATABYNPCID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetFullConditionDescTextID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETFULLCONDITIONDESCTEXTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetFullConditionMainMissionID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETFULLCONDITIONMAINMISSIONID_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeartDialEmoType GetPreEmoType(::System::UInt32 a1, ::RPG::GameCore::HeartDialEmoType a2)
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETPREEMOTYPE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::HeartDialEmoType GetNextEmoType(::System::UInt32 a1, ::RPG::GameCore::HeartDialEmoType a2)
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETNEXTEMOTYPE_OFFSET))(this, a1, a2);
		}

		::Class_1_1B2F588DD05F2A7A* GetDialogueInfo(::System::UInt32 a1)
		{
			return ((::Class_1_1B2F588DD05F2A7A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETDIALOGUEINFO_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetTraceInfoByFloorID(::System::UInt32 a1)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETTRACEINFOBYFLOORID_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetCurrentTraceInfo()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETCURRENTTRACEINFO_OFFSET))(this);
		}

		::System::Void ShowCurrentStartPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SHOWCURRENTSTARTPERFORMANCE_OFFSET))(this);
		}

		::System::Void ShowScriptAnyChangePlayPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SHOWSCRIPTANYCHANGEPLAYPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean IsChangeEmotionUnlock(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ISCHANGEEMOTIONUNLOCK_OFFSET))(this, a1);
		}

		::System::Void SendControlStepFinishEvent(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SENDCONTROLSTEPFINISHEVENT_OFFSET))(this, a1);
		}

		::System::Void SendGetHeartDialInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SENDGETHEARTDIALINFOCSREQ_OFFSET))(this);
		}

		::System::Void AddScriptInfo(::System::UInt32 a1, ::RPG::Client::HeartDialScriptInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::HeartDialScriptInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ADDSCRIPTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void AddNpcInfo(::Struct_2_137AB23E3A00ECA1_1 a1, ::Class_1_AFDC282246B34CC6* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1_1, ::Class_1_AFDC282246B34CC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ADDNPCINFO_OFFSET))(this, a1, a2);
		}

		::System::Void AddDialogueInfo(::System::UInt32 a1, ::Class_1_1B2F588DD05F2A7A* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_1B2F588DD05F2A7A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_ADDDIALOGUEINFO_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::LevelNPCInfoOverride* GetNpcOverrideInfo(::RPG::Client::MapNpcDef* a1)
		{
			return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETNPCOVERRIDEINFO_OFFSET))(this, a1);
		}

		::System::String* GetFloorConfigPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETFLOORCONFIGPATH_OFFSET))(this, a1);
		}

		::System::String* GetScriptConfigPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GETSCRIPTCONFIGPATH_OFFSET))(this, a1);
		}

		::Enum_3_0A3761FE34514D6C_41 get_HeartDialUnlockStatus()
		{
			return ((::Enum_3_0A3761FE34514D6C_41(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_GET_HEARTDIALUNLOCKSTATUS_OFFSET))(this);
		}

		::System::Void set_HeartDialUnlockStatus(::Enum_3_0A3761FE34514D6C_41 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_41))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE_SET_HEARTDIALUNLOCKSTATUS_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
