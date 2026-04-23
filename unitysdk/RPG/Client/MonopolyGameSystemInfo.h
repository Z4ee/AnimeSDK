#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_45.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_73;
class Class_1_0E5DA97E7318165F;
class Class_1_28AF0C7D8FD87E9F_2;
class Class_1_4BC858D7C27E10ED_44;
class Class_1_5249F0902D388234;
class Class_1_66C20D6C355B068E_4;
class Class_1_97EABDA53029AA01_1;
class Class_1_BF623F6C7CBB9E69;
class Class_1_BF623F6C7CBB9E69_1;
class Class_1_BF623F6C7CBB9E69_2;
class Class_1_FB0633E85BD6CF8E_11;
namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class IMonopolyVisualEffectTrigger; }
namespace RPG::Client { class MonopolyContentTrigger; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_CLEARCURCONTENT_OFFSET UNITYSDK_OFFSET(0xAAAA610)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAA7C80)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CHEATDICENUM_OFFSET UNITYSDK_OFFSET(0xAAABB80)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CONTENTQUEUE_OFFSET UNITYSDK_OFFSET(0xAAABD70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLID_OFFSET UNITYSDK_OFFSET(0xAAABC80)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLSTATE_OFFSET UNITYSDK_OFFSET(0xAAABC10)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCONTENT_OFFSET UNITYSDK_OFFSET(0xAAABD90)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURMAPID_OFFSET UNITYSDK_OFFSET(0xAAABCA0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURRENCYNUM_OFFSET UNITYSDK_OFFSET(0xAAABB90)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DICENUM_OFFSET UNITYSDK_OFFSET(0xAAABB70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DREAMDICENUM_OFFSET UNITYSDK_OFFSET(0xAAABE90)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ENTERDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0xAAABD10)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASSETTLEMENT_OFFSET UNITYSDK_OFFSET(0xAAABE40)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASUNFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0xAAABC30)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_IMMEDIATELYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xAAABCD0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISCANTAKEDAILYREWARD_OFFSET UNITYSDK_OFFSET(0xAAABED0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISINDREAM_OFFSET UNITYSDK_OFFSET(0xAAABE80)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISMONOPOLYDAILYREWARDGET_OFFSET UNITYSDK_OFFSET(0xAAABEB0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0xAAABE60)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_LEAVEDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0xAAABD30)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0xAAABCB0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTCELLIDINDEX_OFFSET UNITYSDK_OFFSET(0xAAABBD0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTDAILYUPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAAABBF0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xAAABE20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_QUIZCOINTRIGGER_OFFSET UNITYSDK_OFFSET(0xAAABD50)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REMAINSTEPS_OFFSET UNITYSDK_OFFSET(0xAAABBA0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REROLLNUM_OFFSET UNITYSDK_OFFSET(0xAAABBC0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_TELEPORTMODIFIER_OFFSET UNITYSDK_OFFSET(0xAAABCF0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_INIT_OFFSET UNITYSDK_OFFSET(0xAAA7870)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISASSETUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAAAA7B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISBUFFUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAAAA690)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISMBTIREPORTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAAAAB10)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISQUIZUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAAAA9F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISRESBARUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAAAAC30)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISRESOURCEBARUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAAAAD50)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISTUTORIALFINISHED_OFFSET UNITYSDK_OFFSET(0xAAAA8D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISTUTORIALSETTLED_OFFSET UNITYSDK_OFFSET(0xAAAAE70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURCELLBYTELEPORT_OFFSET UNITYSDK_OFFSET(0xAAAB8E0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURRENCY_OFFSET UNITYSDK_OFFSET(0xAAAB750)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFY_OFFSET UNITYSDK_OFFSET(0xAAAAF90)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xAAA7E70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATESILENTLY_OFFSET UNITYSDK_OFFSET(0xAAAB9F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATE_OFFSET UNITYSDK_OFFSET(0xAAAB980)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETHASSETTLEMENT_OFFSET UNITYSDK_OFFSET(0xAAABA40)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETSETTLED_OFFSET UNITYSDK_OFFSET(0xAAABA90)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETTELEPORTMODIFIER_OFFSET UNITYSDK_OFFSET(0xAAAB890)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CHEATDICENUM_OFFSET UNITYSDK_OFFSET(0xAAA7AB0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CONTENTQUEUE_OFFSET UNITYSDK_OFFSET(0xAAABD80)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLID_OFFSET UNITYSDK_OFFSET(0xAAABC90)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLSTATE_OFFSET UNITYSDK_OFFSET(0xAAABC20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURMAPID_OFFSET UNITYSDK_OFFSET(0xAAA9580)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURRENCYNUM_OFFSET UNITYSDK_OFFSET(0xAAA7BA0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DICENUM_OFFSET UNITYSDK_OFFSET(0xAAA79D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DREAMDICENUM_OFFSET UNITYSDK_OFFSET(0xAAABEA0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ENTERDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0xAAABD20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_HASSETTLEMENT_OFFSET UNITYSDK_OFFSET(0xAAABE50)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_IMMEDIATELYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xAAABCE0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISCANTAKEDAILYREWARD_OFFSET UNITYSDK_OFFSET(0xAAABEE0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISMONOPOLYDAILYREWARDGET_OFFSET UNITYSDK_OFFSET(0xAAABEC0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0xAAABE70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_LEAVEDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0xAAABD40)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0xAAABCC0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTCELLIDINDEX_OFFSET UNITYSDK_OFFSET(0xAAABBE0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTDAILYUPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAAABC00)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xAAABE30)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_QUIZCOINTRIGGER_OFFSET UNITYSDK_OFFSET(0xAAABD60)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REMAINSTEPS_OFFSET UNITYSDK_OFFSET(0xAAABBB0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REROLLNUM_OFFSET UNITYSDK_OFFSET(0xAAA95F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_TELEPORTMODIFIER_OFFSET UNITYSDK_OFFSET(0xAAABD00)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCBARRIER_OFFSET UNITYSDK_OFFSET(0xAAA8B00)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCCLICKITEM_OFFSET UNITYSDK_OFFSET(0xAAA9040)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCNEXTDAILYUPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAAAA5A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAAA96E0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0xAAA85D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_2_OFFSET UNITYSDK_OFFSET(0xAAA86D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xAAA7F30)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_TRYADDTRIGGER_OFFSET UNITYSDK_OFFSET(0xAAA9BD0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATECANTAKEDAILYREWARDSTATE_OFFSET UNITYSDK_OFFSET(0xAAABB20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATEDAILYREWARDSTATE_OFFSET UNITYSDK_OFFSET(0xAAABAD0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__ADDBARRIER_OFFSET UNITYSDK_OFFSET(0xAAA8920)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATEBARRIER_OFFSET UNITYSDK_OFFSET(0xAAA8D70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATECLICKITEM_OFFSET UNITYSDK_OFFSET(0xAAA92B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAAABEF0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETEBARRIER_OFFSET UNITYSDK_OFFSET(0xAAA8B70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETECLICKITEM_OFFSET UNITYSDK_OFFSET(0xAAA90B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__GETGAMERATIOUNLOCKID_OFFSET UNITYSDK_OFFSET(0xAAA9AC0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYCHEATDICE_OFFSET UNITYSDK_OFFSET(0xAAAB840)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYDICE_OFFSET UNITYSDK_OFFSET(0xAAAB7F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYITEM_OFFSET UNITYSDK_OFFSET(0xAAAB4D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYREROLLITEM_OFFSET UNITYSDK_OFFSET(0xAAAB7A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYSTEP_OFFSET UNITYSDK_OFFSET(0xAAAB700)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCITEMINFO_OFFSET UNITYSDK_OFFSET(0xAAA8640)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCMAPINFO_OFFSET UNITYSDK_OFFSET(0xAAA7F90)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDACTIONPROFITTRIGGER_OFFSET UNITYSDK_OFFSET(0xAAAA510)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDIMMEDIATELYTRIGGER_OFFSET UNITYSDK_OFFSET(0xAAAA230)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDLEVELGRAPHTRIGGER_OFFSET UNITYSDK_OFFSET(0xAAA9E10)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__UPDATEEXTRACONTENT_OFFSET UNITYSDK_OFFSET(0xAAA8740)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameSystemInfo_TypeDefinitionIndex = 61015;

	class MonopolyGameSystemInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DREAM_WORLD_VALUE = 0x5; // 0x0
		::Class_1_BF623F6C7CBB9E69_1* _LeaveDreamTrigger_k__BackingField; // 0x10
		::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>* _ContentQueue_k__BackingField; // 0x18
		::Class_1_5249F0902D388234* _QuizCoinTrigger_k__BackingField; // 0x20
		::Class_1_0E5DA97E7318165F* ActionProfitTrigger; // 0x28
		::Class_1_BF623F6C7CBB9E69* _EnterDreamTrigger_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* _ImmediatelyModifiers_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* ExtraContentCells; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedFunctionIDs; // 0x48
		::Class_1_BF623F6C7CBB9E69_2* _TeleportModifier_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* _Modifiers_k__BackingField; // 0x58
		::System::UInt32 _CurrencyNum; // 0x60
		::System::UInt32 _CurMapID; // 0x64
		::System::UInt32 _DreamDiceNum_k__BackingField; // 0x68
		::System::UInt32 _CurCellID_k__BackingField; // 0x6C
		::System::Int32 _NextCellIDIndex_k__BackingField; // 0x70
		::System::UInt32 _DiceNum; // 0x74
		::System::Boolean _PauseGame_k__BackingField; // 0x78
		::System::Boolean _IsSettled_k__BackingField; // 0x79
		::System::Boolean _IsCanTakeDailyReward_k__BackingField; // 0x7A
		::System::Boolean _IsMonopolyDailyRewardGet_k__BackingField; // 0x7B
		::Enum_3_DB663931210BBC27_45 _CurCellState_k__BackingField; // 0x7C
		::System::UInt32 _NextDailyUpdateTimeStamp_k__BackingField; // 0x80
		::System::UInt32 _CheatDiceNum; // 0x84
		::System::Boolean _HasSettlement_k__BackingField; // 0x88
		::System::UInt32 _RemainSteps_k__BackingField; // 0x8C
		::System::UInt32 _ReRollItemNum; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_4BC858D7C27E10ED_44* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_44*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_OFFSET))(this, rsp);
		}

		::System::Void Sync_1(::Class_1_FB0633E85BD6CF8E_11* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_1_OFFSET))(this, rsp);
		}

		::System::Void Sync_2(::Class_1_66C20D6C355B068E_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_2_OFFSET))(this, info);
		}

		::System::Void _UpdateExtraContent(::System::UInt32 mapID, ::System::UInt32 cellID, ::System::Boolean isLoadEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__UPDATEEXTRACONTENT_OFFSET))(this, mapID, cellID, isLoadEvent);
		}

		::System::Void _AddBarrier(::System::UInt32 mapID, ::System::UInt32 cellID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__ADDBARRIER_OFFSET))(this, mapID, cellID);
		}

		::System::Void SyncBarrier(::Class_1_66C20D6C355B068E_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCBARRIER_OFFSET))(this, info);
		}

		::System::Void _DeleteBarrier(::Class_1_66C20D6C355B068E_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETEBARRIER_OFFSET))(this, info);
		}

		::System::Void _CreateBarrier(::Class_1_66C20D6C355B068E_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATEBARRIER_OFFSET))(this, info);
		}

		::System::Void SyncClickItem(::Class_1_66C20D6C355B068E_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCCLICKITEM_OFFSET))(this, info);
		}

		::System::Void _DeleteClickItem(::Class_1_66C20D6C355B068E_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETECLICKITEM_OFFSET))(this, info);
		}

		::System::Void _CreateClickItem(::Class_1_66C20D6C355B068E_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATECLICKITEM_OFFSET))(this, info);
		}

		::System::Void _SyncMapInfo(::Class_1_97EABDA53029AA01_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_97EABDA53029AA01_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCMAPINFO_OFFSET))(this, info);
		}

		::System::Void _SyncItemInfo(::Class_1_28AF0C7D8FD87E9F_2* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCITEMINFO_OFFSET))(this, info);
		}

		::System::Void SyncUnlocked(::Class_1_075C34D03AFA1215_73* info, ::System::Boolean toAdd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_73*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCUNLOCKED_OFFSET))(this, info, toAdd);
		}

		::System::Void TryAddTrigger(::RPG::Client::IMonopolyVisualEffectTrigger* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMonopolyVisualEffectTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_TRYADDTRIGGER_OFFSET))(this, trigger);
		}

		::System::Void _TryAddActionProfitTrigger(::Class_1_0E5DA97E7318165F* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0E5DA97E7318165F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDACTIONPROFITTRIGGER_OFFSET))(this, trigger);
		}

		::System::Void _TryAddLevelGraphTrigger(::RPG::Client::IMonopolyVisualEffectTrigger* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMonopolyVisualEffectTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDLEVELGRAPHTRIGGER_OFFSET))(this, trigger);
		}

		::System::Void _TryAddImmediatelyTrigger(::RPG::Client::IMonopolyVisualEffectTrigger* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMonopolyVisualEffectTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDIMMEDIATELYTRIGGER_OFFSET))(this, trigger);
		}

		::System::Void SyncNextDailyUpdateTimeStamp(::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCNEXTDAILYUPDATETIMESTAMP_OFFSET))(this, timeStamp);
		}

		::System::Void ClearCurContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_CLEARCURCONTENT_OFFSET))(this);
		}

		::System::Boolean IsBuffUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISBUFFUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsAssetUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISASSETUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsTutorialFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISTUTORIALFINISHED_OFFSET))(this);
		}

		::System::Boolean IsQuizUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISQUIZUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsMBTIReportUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISMBTIREPORTUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsResBarUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISRESBARUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsResourceBarUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISRESOURCEBARUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsTutorialSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISTUTORIALSETTLED_OFFSET))(this);
		}

		::System::UInt32 _GetGameRatioUnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__GETGAMERATIOUNLOCKID_OFFSET))(this);
		}

		::System::Void Modify(::Proto::MonopolyActionResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFY_OFFSET))(this, result);
		}

		::System::Void _ModifyItem(::System::UInt32 itemID, ::System::UInt32 value, ::System::Boolean isAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYITEM_OFFSET))(this, itemID, value, isAdd);
		}

		::System::Void ModifyCurrency(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURRENCY_OFFSET))(this, value);
		}

		::System::Void _ModifyDice(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYDICE_OFFSET))(this, value);
		}

		::System::Void _ModifyCheatDice(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYCHEATDICE_OFFSET))(this, value);
		}

		::System::Void _ModifyReRollItem(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYREROLLITEM_OFFSET))(this, value);
		}

		::System::Void _ModifyStep(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYSTEP_OFFSET))(this, value);
		}

		::System::Void SetTeleportModifier(::Class_1_BF623F6C7CBB9E69_2* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETTELEPORTMODIFIER_OFFSET))(this, trigger);
		}

		::System::Void ModifyCurCellByTeleport(::System::UInt32 cellID, ::System::UInt32 mapID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURCELLBYTELEPORT_OFFSET))(this, cellID, mapID);
		}

		::System::Void SetGamePauseState(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATE_OFFSET))(this, isPause);
		}

		::System::Void SetGamePauseStateSilently(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATESILENTLY_OFFSET))(this, isPause);
		}

		::System::Void SetHasSettlement(::System::Boolean hasSettlement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETHASSETTLEMENT_OFFSET))(this, hasSettlement);
		}

		::System::Void SetSettled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETSETTLED_OFFSET))(this);
		}

		::System::Void UpdateDailyRewardState(::System::Boolean isRewardGet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATEDAILYREWARDSTATE_OFFSET))(this, isRewardGet);
		}

		::System::Void UpdateCanTakeDailyRewardState(::System::Boolean isCanTakeReward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATECANTAKEDAILYREWARDSTATE_OFFSET))(this, isCanTakeReward);
		}

		::System::UInt32 get_DiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DICENUM_OFFSET))(this);
		}

		::System::Void set_DiceNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DICENUM_OFFSET))(this, value);
		}

		::System::UInt32 get_CheatDiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CHEATDICENUM_OFFSET))(this);
		}

		::System::Void set_CheatDiceNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CHEATDICENUM_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrencyNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURRENCYNUM_OFFSET))(this);
		}

		::System::Void set_CurrencyNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURRENCYNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_RemainSteps()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REMAINSTEPS_OFFSET))(this);
		}

		::System::Void set_RemainSteps(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REMAINSTEPS_OFFSET))(this, value);
		}

		::System::UInt32 get_ReRollNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REROLLNUM_OFFSET))(this);
		}

		::System::Void set_ReRollNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REROLLNUM_OFFSET))(this, value);
		}

		::System::Int32 get_NextCellIDIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTCELLIDINDEX_OFFSET))(this);
		}

		::System::Void set_NextCellIDIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTCELLIDINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_NextDailyUpdateTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTDAILYUPDATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_NextDailyUpdateTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTDAILYUPDATETIMESTAMP_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_45 get_CurCellState()
		{
			return ((::Enum_3_DB663931210BBC27_45(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLSTATE_OFFSET))(this);
		}

		::System::Void set_CurCellState(::Enum_3_DB663931210BBC27_45 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_45))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_HasUnfinishedEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASUNFINISHEDEVENT_OFFSET))(this);
		}

		::System::UInt32 get_CurCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLID_OFFSET))(this);
		}

		::System::Void set_CurCellID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURMAPID_OFFSET))(this);
		}

		::System::Void set_CurMapID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURMAPID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* get_Modifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_MODIFIERS_OFFSET))(this);
		}

		::System::Void set_Modifiers(::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_MODIFIERS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* get_ImmediatelyModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_IMMEDIATELYMODIFIERS_OFFSET))(this);
		}

		::System::Void set_ImmediatelyModifiers(::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_IMMEDIATELYMODIFIERS_OFFSET))(this, value);
		}

		::Class_1_BF623F6C7CBB9E69_2* get_TeleportModifier()
		{
			return ((::Class_1_BF623F6C7CBB9E69_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_TELEPORTMODIFIER_OFFSET))(this);
		}

		::System::Void set_TeleportModifier(::Class_1_BF623F6C7CBB9E69_2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_TELEPORTMODIFIER_OFFSET))(this, value);
		}

		::Class_1_BF623F6C7CBB9E69* get_EnterDreamTrigger()
		{
			return ((::Class_1_BF623F6C7CBB9E69*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ENTERDREAMTRIGGER_OFFSET))(this);
		}

		::System::Void set_EnterDreamTrigger(::Class_1_BF623F6C7CBB9E69* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ENTERDREAMTRIGGER_OFFSET))(this, value);
		}

		::Class_1_BF623F6C7CBB9E69_1* get_LeaveDreamTrigger()
		{
			return ((::Class_1_BF623F6C7CBB9E69_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_LEAVEDREAMTRIGGER_OFFSET))(this);
		}

		::System::Void set_LeaveDreamTrigger(::Class_1_BF623F6C7CBB9E69_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_LEAVEDREAMTRIGGER_OFFSET))(this, value);
		}

		::Class_1_5249F0902D388234* get_QuizCoinTrigger()
		{
			return ((::Class_1_5249F0902D388234*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_QUIZCOINTRIGGER_OFFSET))(this);
		}

		::System::Void set_QuizCoinTrigger(::Class_1_5249F0902D388234* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5249F0902D388234*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_QUIZCOINTRIGGER_OFFSET))(this, value);
		}

		::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>* get_ContentQueue()
		{
			return ((::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CONTENTQUEUE_OFFSET))(this);
		}

		::System::Void set_ContentQueue(::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CONTENTQUEUE_OFFSET))(this, value);
		}

		::RPG::Client::MonopolyContentTrigger* get_CurContent()
		{
			return ((::RPG::Client::MonopolyContentTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCONTENT_OFFSET))(this);
		}

		::System::Boolean get_PauseGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_PAUSEGAME_OFFSET))(this);
		}

		::System::Void set_PauseGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_PAUSEGAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasSettlement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASSETTLEMENT_OFFSET))(this);
		}

		::System::Void set_HasSettlement(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_HASSETTLEMENT_OFFSET))(this, value);
		}

		::System::Boolean get_IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISSETTLED_OFFSET))(this);
		}

		::System::Void set_IsSettled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISSETTLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsInDream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISINDREAM_OFFSET))(this);
		}

		::System::UInt32 get_DreamDiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DREAMDICENUM_OFFSET))(this);
		}

		::System::Void set_DreamDiceNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DREAMDICENUM_OFFSET))(this, value);
		}

		::System::Boolean get_IsMonopolyDailyRewardGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISMONOPOLYDAILYREWARDGET_OFFSET))(this);
		}

		::System::Void set_IsMonopolyDailyRewardGet(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISMONOPOLYDAILYREWARDGET_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanTakeDailyReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISCANTAKEDAILYREWARD_OFFSET))(this);
		}

		::System::Void set_IsCanTakeDailyReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISCANTAKEDAILYREWARD_OFFSET))(this, value);
		}
	};
}
