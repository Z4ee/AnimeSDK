#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPrepWaitCustomTimeType.h"
#include "unitysdk/System/Object.h"

class Class_1_422ED86A802898E9;
class Class_1_455008579EB95638_39;
class Class_1_AF57B48D254FB408;
class Class_1_D17272E82AE804C2_373;
class Class_1_D2C0A39018B2EAE4;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGameTutorialData; }
namespace RPG::Client { class GridFightGameTutorialTask; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class GridFightWaitDragConsumable; }
namespace RPG::GameCore { class GridFightWaitDragEquip; }
namespace RPG::GameCore { class GridFightWaitDragRole; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Text { class StringBuilder; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CHECKHASPREPEFFECT_OFFSET UNITYSDK_OFFSET(0xBCC6F10)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CHECKSHOWPOPUPPANELS_OFFSET UNITYSDK_OFFSET(0xBCC6F80)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CLOSEBLOCK_OFFSET UNITYSDK_OFFSET(0xBCC60D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCC9AB0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_CURTASK_OFFSET UNITYSDK_OFFSET(0xBCC88A0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_FINISHEDTASKIDS_OFFSET UNITYSDK_OFFSET(0xBCC88C0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_ISINBLOCK_OFFSET UNITYSDK_OFFSET(0xBCC6E10)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_ISINGAME_OFFSET UNITYSDK_OFFSET(0xBCC86E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xBCC9640)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISCONSUMABLEBLOCKBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xBCC6B40)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISEQUIPBLOCKBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xBCC6A30)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISGRIDBLOCKBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xBCC68D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ONBATTLEREADY_OFFSET UNITYSDK_OFFSET(0xBCCA080)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERCUSTOMWAITCALLBACK_OFFSET UNITYSDK_OFFSET(0xBCC8E90)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGCONSUMABLE_OFFSET UNITYSDK_OFFSET(0xBCC65A0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGEQUIP_OFFSET UNITYSDK_OFFSET(0xBCC6370)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGROLE_OFFSET UNITYSDK_OFFSET(0xBCC5E20)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_RESETTUTORIALOPPARAMS_OFFSET UNITYSDK_OFFSET(0xBCC9E30)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SENDCUSTOMSTR_OFFSET UNITYSDK_OFFSET(0xBCC8230)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETCHECKEFFECTLUAFUNC_OFFSET UNITYSDK_OFFSET(0xBCC6E70)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETCHECKPOPUPPANELSLUAFUNC_OFFSET UNITYSDK_OFFSET(0xBCC6EC0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETLUATABLETUTORIALMANAGER_OFFSET UNITYSDK_OFFSET(0xBCC6E20)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_CURTASK_OFFSET UNITYSDK_OFFSET(0xBCC88B0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_FINISHEDTASKIDS_OFFSET UNITYSDK_OFFSET(0xBCC88D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_ISINBLOCK_OFFSET UNITYSDK_OFFSET(0xBCC6C50)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_STARTBLOCK_OFFSET UNITYSDK_OFFSET(0xBCC62E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SYNCTASKUPDATE_OFFSET UNITYSDK_OFFSET(0xBCC7550)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xBCC6FE0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_TRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0xBCC85A0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_TRYSTARTTASKLEVEL_OFFSET UNITYSDK_OFFSET(0xBCC84D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_UNREGISTERCUSTOMWAITCALLBACK_OFFSET UNITYSDK_OFFSET(0xBCC9400)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__CHECKANDDISPATCHCUSTOMWAITCALLBACK_OFFSET UNITYSDK_OFFSET(0xBCC8F20)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBCCA140)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__GETCURRENTGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xBCC8700)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONCONSUMABLEUSED_OFFSET UNITYSDK_OFFSET(0xBCC6DA0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONEQUIPDRESSTOROLE_OFFSET UNITYSDK_OFFSET(0xBCC6D30)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTEFFECTFINISH_OFFSET UNITYSDK_OFFSET(0xBCC9550)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTPREPHIDEALLPANELS_OFFSET UNITYSDK_OFFSET(0xBCC95F0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTSHOWGUIDETALK_OFFSET UNITYSDK_OFFSET(0xBCC88E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTTUTORIALOP_OFFSET UNITYSDK_OFFSET(0xBCC8B10)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTTUTORIALSHOWGUIDEHINTWITHTEXT_OFFSET UNITYSDK_OFFSET(0xBCC89E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTUPDATE_OFFSET UNITYSDK_OFFSET(0xBCC95A0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONMOVESUCCEED_OFFSET UNITYSDK_OFFSET(0xBCC6CC0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONTRANSITION_OFFSET UNITYSDK_OFFSET(0xBCCA0D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONTUTORIALFINISH_OFFSET UNITYSDK_OFFSET(0xBCC9E90)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__SYNCCURTASK_OFFSET UNITYSDK_OFFSET(0xBCC7050)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__SYNCFINISHTASK_OFFSET UNITYSDK_OFFSET(0xBCC71E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__TRYCREATECURTASKLEVEL_OFFSET UNITYSDK_OFFSET(0xBCC8300)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__TRYREMOVECURTASKLEVEL_OFFSET UNITYSDK_OFFSET(0xBCC8070)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTutorialManager_TypeDefinitionIndex = 61241;

	class GridFightTutorialManager : public ::System::Object
	{
	public:
		// static const ::System::String* _AcceptTaskUnlockFormat; // 0x0
		// static const ::System::String* _FinishTaskUnlockFormat; // 0x0
		// static const ::System::String* _TutorialContainerName; // 0x0
		// static const ::System::String* _TriggerLGStr; // 0x0
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightRole*>* _BlockExceptRoles; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightPrepWaitCustomTimeType, ::System::Action*>* _WaitCustomTimeCallbacks; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightPrepWaitCustomTimeType>* _WaitDispatchTimeTypes; // 0x20
		::RPG::GameCore::GameEntity* _CurTaskLevelEntity; // 0x28
		::RPG::Client::GridFightGameSession* _CurSession; // 0x30
		::XLua::LuaTable* _LuaTableTutorialManager; // 0x38
		::System::Func_2<::XLua::LuaTable*, ::System::Boolean>* _CheckShowPopupPanelsLuaFunc; // 0x40
		::System::Text::StringBuilder* _SB; // 0x48
		::Class_1_422ED86A802898E9* _DragOpSelector; // 0x50
		::RPG::Client::GridFightGameTutorialData* TutorialData; // 0x58
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _WaitDragPromise; // 0x60
		::Class_1_AF57B48D254FB408* _TutorialDVEvaluator; // 0x68
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightGridData*>* _BlockExceptGridDatas; // 0x70
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightEquipItemData*>* _BlockExceptEquipDtas; // 0x78
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightConsumableItemData*>* _BlockExceptConsumableDtas; // 0x80
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedTaskIDs_k__BackingField; // 0x88
		::System::Func_2<::XLua::LuaTable*, ::System::Boolean>* _CheckHasEffectLuaFunc; // 0x90
		::RPG::Client::GridFightGameTutorialTask* _CurTask_k__BackingField; // 0x98
		::System::Boolean _IsInBlock; // 0xA0
		::System::Boolean _WaitDragConsumable; // 0xA1
		::System::Boolean _WaitDragRole; // 0xA2
		::System::Boolean _WaitDragEquip; // 0xA3

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RegisterWaitDragRole(::RPG::GameCore::GridFightWaitDragRole* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::GridFightWaitDragRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGROLE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RegisterWaitDragEquip(::RPG::GameCore::GridFightWaitDragEquip* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::GridFightWaitDragEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGEQUIP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RegisterWaitDragConsumable(::RPG::GameCore::GridFightWaitDragConsumable* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::GridFightWaitDragConsumable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGCONSUMABLE_OFFSET))(this, a1);
		}

		::System::Boolean IsGridBlockByTutorial(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISGRIDBLOCKBYTUTORIAL_OFFSET))(this, a1);
		}

		::System::Boolean IsEquipBlockByTutorial(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISEQUIPBLOCKBYTUTORIAL_OFFSET))(this, a1);
		}

		::System::Boolean IsConsumableBlockByTutorial(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISCONSUMABLEBLOCKBYTUTORIAL_OFFSET))(this, a1);
		}

		::System::Void StartBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_STARTBLOCK_OFFSET))(this);
		}

		::System::Void CloseBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CLOSEBLOCK_OFFSET))(this);
		}

		::System::Void _OnMoveSucceed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONMOVESUCCEED_OFFSET))(this, a1);
		}

		::System::Void _OnEquipDressToRole(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONEQUIPDRESSTOROLE_OFFSET))(this, a1);
		}

		::System::Void _OnConsumableUsed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONCONSUMABLEUSED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_ISINBLOCK_OFFSET))(this);
		}

		::System::Void set_IsInBlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_ISINBLOCK_OFFSET))(this, a1);
		}

		::System::Void SetLuaTableTutorialManager(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETLUATABLETUTORIALMANAGER_OFFSET))(this, a1);
		}

		::System::Void SetCheckEffectLuaFunc(::System::Func_2<::XLua::LuaTable*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::XLua::LuaTable*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETCHECKEFFECTLUAFUNC_OFFSET))(this, a1);
		}

		::System::Void SetCheckPopupPanelsLuaFunc(::System::Func_2<::XLua::LuaTable*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::XLua::LuaTable*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETCHECKPOPUPPANELSLUAFUNC_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasPrepEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CHECKHASPREPEFFECT_OFFSET))(this);
		}

		::System::Boolean CheckShowPopupPanels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CHECKSHOWPOPUPPANELS_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_455008579EB95638_39* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncTaskUpdate(::Class_1_D2C0A39018B2EAE4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2C0A39018B2EAE4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SYNCTASKUPDATE_OFFSET))(this, a1);
		}

		::System::Void TryStartTaskLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_TRYSTARTTASKLEVEL_OFFSET))(this);
		}

		::System::Void _SyncCurTask(::Class_1_D17272E82AE804C2_373* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_373*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__SYNCCURTASK_OFFSET))(this, a1);
		}

		::System::Void _SyncFinishTask(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__SYNCFINISHTASK_OFFSET))(this, a1);
		}

		::System::Void _TryCreateCurTaskLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__TRYCREATECURTASKLEVEL_OFFSET))(this);
		}

		::System::Void _TryRemoveCurTaskLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__TRYREMOVECURTASKLEVEL_OFFSET))(this);
		}

		::RPG::Client::GridFightGameTutorialTask* get_CurTask()
		{
			return ((::RPG::Client::GridFightGameTutorialTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_CURTASK_OFFSET))(this);
		}

		::System::Void set_CurTask(::RPG::Client::GridFightGameTutorialTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameTutorialTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_CURTASK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FinishedTaskIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_FINISHEDTASKIDS_OFFSET))(this);
		}

		::System::Void set_FinishedTaskIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_FINISHEDTASKIDS_OFFSET))(this, a1);
		}

		::System::Void _OnGridFightShowGuideTalk(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTSHOWGUIDETALK_OFFSET))(this, a1);
		}

		::System::Void _OnGridFightTutorialShowGuideHintWithText(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTTUTORIALSHOWGUIDEHINTWITHTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnGridFightTutorialOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTTUTORIALOP_OFFSET))(this, a1);
		}

		::System::Void RegisterCustomWaitCallback(::RPG::GameCore::GridFightPrepWaitCustomTimeType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightPrepWaitCustomTimeType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERCUSTOMWAITCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterCustomWaitCallback(::RPG::GameCore::GridFightPrepWaitCustomTimeType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightPrepWaitCustomTimeType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_UNREGISTERCUSTOMWAITCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGridFightEffectFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTEFFECTFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnGridFightUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnGridFightPrepHideAllPanels(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTPREPHIDEALLPANELS_OFFSET))(this, a1);
		}

		::System::Void _CheckAndDispatchCustomWaitCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__CHECKANDDISPATCHCUSTOMWAITCALLBACK_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::GridFightGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetTutorialOpParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_RESETTUTORIALOPPARAMS_OFFSET))(this);
		}

		::System::Void SendCustomStr(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SENDCUSTOMSTR_OFFSET))(this, a1);
		}

		::System::Void TriggerTutorial(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_TRIGGERTUTORIAL_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameWorld* _GetCurrentGameWorld()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__GETCURRENTGAMEWORLD_OFFSET))(this);
		}

		::System::Void _OnTutorialFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONTUTORIALFINISH_OFFSET))(this, a1);
		}

		::System::Void OnBattleReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ONBATTLEREADY_OFFSET))(this);
		}

		::System::Void _OnTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONTRANSITION_OFFSET))(this);
		}

		::System::Boolean get_IsInGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_ISINGAME_OFFSET))(this);
		}
	};
}
