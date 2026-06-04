#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_45.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_73;
class Class_1_0E5DA97E7318165F;
class Class_1_28AF0C7D8FD87E9F_2;
class Class_1_35376882FCFC9E51;
class Class_1_4BC858D7C27E10ED_45;
class Class_1_5249F0902D388234;
class Class_1_66C20D6C355B068E_5;
class Class_1_BF623F6C7CBB9E69;
class Class_1_BF623F6C7CBB9E69_1;
class Class_1_BF623F6C7CBB9E69_2;
class Class_1_FBCD4FF549575A07_2;
namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class IMonopolyVisualEffectTrigger; }
namespace RPG::Client { class MonopolyContentTrigger; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_CLEARCURCONTENT_OFFSET UNITYSDK_OFFSET(0xC177520)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC174980)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CHEATDICENUM_OFFSET UNITYSDK_OFFSET(0xC178AB0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CONTENTQUEUE_OFFSET UNITYSDK_OFFSET(0xC178CA0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLID_OFFSET UNITYSDK_OFFSET(0xC178BB0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLSTATE_OFFSET UNITYSDK_OFFSET(0xC178B40)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCONTENT_OFFSET UNITYSDK_OFFSET(0xC178CC0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURMAPID_OFFSET UNITYSDK_OFFSET(0xC178BD0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURRENCYNUM_OFFSET UNITYSDK_OFFSET(0xC178AC0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DICENUM_OFFSET UNITYSDK_OFFSET(0xC178AA0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DREAMDICENUM_OFFSET UNITYSDK_OFFSET(0xC178DC0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ENTERDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0xC178C40)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASSETTLEMENT_OFFSET UNITYSDK_OFFSET(0xC178D70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASUNFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0xC178B60)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_IMMEDIATELYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xC178C00)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISCANTAKEDAILYREWARD_OFFSET UNITYSDK_OFFSET(0xC178E00)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISINDREAM_OFFSET UNITYSDK_OFFSET(0xC178DB0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISMONOPOLYDAILYREWARDGET_OFFSET UNITYSDK_OFFSET(0xC178DE0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0xC178D90)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_LEAVEDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0xC178C60)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0xC178BE0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTCELLIDINDEX_OFFSET UNITYSDK_OFFSET(0xC178B00)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTDAILYUPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC178B20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xC178D50)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_QUIZCOINTRIGGER_OFFSET UNITYSDK_OFFSET(0xC178C80)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REMAINSTEPS_OFFSET UNITYSDK_OFFSET(0xC178AD0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REROLLNUM_OFFSET UNITYSDK_OFFSET(0xC178AF0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_TELEPORTMODIFIER_OFFSET UNITYSDK_OFFSET(0xC178C20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC174560)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISASSETUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC1776C0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISBUFFUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC1775A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISMBTIREPORTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC177A20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISQUIZUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC177900)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISRESBARUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC177B40)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISRESOURCEBARUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC177C60)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISTUTORIALFINISHED_OFFSET UNITYSDK_OFFSET(0xC1777E0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISTUTORIALSETTLED_OFFSET UNITYSDK_OFFSET(0xC177D80)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURCELLBYTELEPORT_OFFSET UNITYSDK_OFFSET(0xC1787F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURRENCY_OFFSET UNITYSDK_OFFSET(0xC178660)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFY_OFFSET UNITYSDK_OFFSET(0xC177EA0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC174B60)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATESILENTLY_OFFSET UNITYSDK_OFFSET(0xC178910)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATE_OFFSET UNITYSDK_OFFSET(0xC1788A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETHASSETTLEMENT_OFFSET UNITYSDK_OFFSET(0xC178960)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETSETTLED_OFFSET UNITYSDK_OFFSET(0xC1789B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETTELEPORTMODIFIER_OFFSET UNITYSDK_OFFSET(0xC1787A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CHEATDICENUM_OFFSET UNITYSDK_OFFSET(0xC1747A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CONTENTQUEUE_OFFSET UNITYSDK_OFFSET(0xC178CB0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLID_OFFSET UNITYSDK_OFFSET(0xC178BC0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLSTATE_OFFSET UNITYSDK_OFFSET(0xC178B50)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURMAPID_OFFSET UNITYSDK_OFFSET(0xC176290)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURRENCYNUM_OFFSET UNITYSDK_OFFSET(0xC174890)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DICENUM_OFFSET UNITYSDK_OFFSET(0xC1746C0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DREAMDICENUM_OFFSET UNITYSDK_OFFSET(0xC178DD0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ENTERDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0xC178C50)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_HASSETTLEMENT_OFFSET UNITYSDK_OFFSET(0xC178D80)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_IMMEDIATELYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xC178C10)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISCANTAKEDAILYREWARD_OFFSET UNITYSDK_OFFSET(0xC178E10)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISMONOPOLYDAILYREWARDGET_OFFSET UNITYSDK_OFFSET(0xC178DF0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0xC178DA0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_LEAVEDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0xC178C70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0xC178BF0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTCELLIDINDEX_OFFSET UNITYSDK_OFFSET(0xC178B10)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTDAILYUPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC178B30)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xC178D60)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_QUIZCOINTRIGGER_OFFSET UNITYSDK_OFFSET(0xC178C90)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REMAINSTEPS_OFFSET UNITYSDK_OFFSET(0xC178AE0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REROLLNUM_OFFSET UNITYSDK_OFFSET(0xC176300)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_TELEPORTMODIFIER_OFFSET UNITYSDK_OFFSET(0xC178C30)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCBARRIER_OFFSET UNITYSDK_OFFSET(0xC175850)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCCLICKITEM_OFFSET UNITYSDK_OFFSET(0xC175D70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCNEXTDAILYUPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC1774B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC1763E0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0xC1752A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_2_OFFSET UNITYSDK_OFFSET(0xC1753A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC174C00)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_TRYADDTRIGGER_OFFSET UNITYSDK_OFFSET(0xC1768D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATECANTAKEDAILYREWARDSTATE_OFFSET UNITYSDK_OFFSET(0xC178A50)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATEDAILYREWARDSTATE_OFFSET UNITYSDK_OFFSET(0xC178A00)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__ADDBARRIER_OFFSET UNITYSDK_OFFSET(0xC175650)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATEBARRIER_OFFSET UNITYSDK_OFFSET(0xC175B20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATECLICKITEM_OFFSET UNITYSDK_OFFSET(0xC176040)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC178E20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETEBARRIER_OFFSET UNITYSDK_OFFSET(0xC1758C0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETECLICKITEM_OFFSET UNITYSDK_OFFSET(0xC175DE0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__GETGAMERATIOUNLOCKID_OFFSET UNITYSDK_OFFSET(0xC1767C0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYCHEATDICE_OFFSET UNITYSDK_OFFSET(0xC178750)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYDICE_OFFSET UNITYSDK_OFFSET(0xC178700)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYITEM_OFFSET UNITYSDK_OFFSET(0xC1783E0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYREROLLITEM_OFFSET UNITYSDK_OFFSET(0xC1786B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYSTEP_OFFSET UNITYSDK_OFFSET(0xC178610)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCITEMINFO_OFFSET UNITYSDK_OFFSET(0xC175310)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCMAPINFO_OFFSET UNITYSDK_OFFSET(0xC174C60)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDACTIONPROFITTRIGGER_OFFSET UNITYSDK_OFFSET(0xC177420)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDIMMEDIATELYTRIGGER_OFFSET UNITYSDK_OFFSET(0xC177070)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDLEVELGRAPHTRIGGER_OFFSET UNITYSDK_OFFSET(0xC176B20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__UPDATEEXTRACONTENT_OFFSET UNITYSDK_OFFSET(0xC175410)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameSystemInfo_TypeDefinitionIndex = 61949;

	class MonopolyGameSystemInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DREAM_WORLD_VALUE = 0x5; // 0x0
		::Class_1_0E5DA97E7318165F* ActionProfitTrigger; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* _ImmediatelyModifiers_k__BackingField; // 0x18
		::Class_1_5249F0902D388234* _QuizCoinTrigger_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedFunctionIDs; // 0x28
		::Class_1_BF623F6C7CBB9E69_2* _TeleportModifier_k__BackingField; // 0x30
		::Class_1_BF623F6C7CBB9E69_1* _LeaveDreamTrigger_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* _Modifiers_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* ExtraContentCells; // 0x48
		::Class_1_BF623F6C7CBB9E69* _EnterDreamTrigger_k__BackingField; // 0x50
		::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>* _ContentQueue_k__BackingField; // 0x58
		::Enum_3_DB663931210BBC27_45 _CurCellState_k__BackingField; // 0x60
		::System::Int32 _NextCellIDIndex_k__BackingField; // 0x64
		::System::UInt32 _NextDailyUpdateTimeStamp_k__BackingField; // 0x68
		::System::Boolean _HasSettlement_k__BackingField; // 0x6C
		::System::Boolean _IsMonopolyDailyRewardGet_k__BackingField; // 0x6D
		::System::Boolean _IsCanTakeDailyReward_k__BackingField; // 0x6E
		::System::Boolean _PauseGame_k__BackingField; // 0x6F
		::System::UInt32 _ReRollItemNum; // 0x70
		::System::UInt32 _RemainSteps_k__BackingField; // 0x74
		::System::UInt32 _DiceNum; // 0x78
		::System::UInt32 _DreamDiceNum_k__BackingField; // 0x7C
		::System::UInt32 _CurCellID_k__BackingField; // 0x80
		::System::UInt32 _CurMapID; // 0x84
		::System::UInt32 _CheatDiceNum; // 0x88
		::System::UInt32 _CurrencyNum; // 0x8C
		::System::Boolean _IsSettled_k__BackingField; // 0x90

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

		::System::Void Sync(::Class_1_4BC858D7C27E10ED_45* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_FBCD4FF549575A07_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void Sync_2(::Class_1_66C20D6C355B068E_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_2_OFFSET))(this, a1);
		}

		::System::Void _UpdateExtraContent(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__UPDATEEXTRACONTENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddBarrier(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__ADDBARRIER_OFFSET))(this, a1, a2);
		}

		::System::Void SyncBarrier(::Class_1_66C20D6C355B068E_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCBARRIER_OFFSET))(this, a1);
		}

		::System::Void _DeleteBarrier(::Class_1_66C20D6C355B068E_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETEBARRIER_OFFSET))(this, a1);
		}

		::System::Void _CreateBarrier(::Class_1_66C20D6C355B068E_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATEBARRIER_OFFSET))(this, a1);
		}

		::System::Void SyncClickItem(::Class_1_66C20D6C355B068E_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCCLICKITEM_OFFSET))(this, a1);
		}

		::System::Void _DeleteClickItem(::Class_1_66C20D6C355B068E_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETECLICKITEM_OFFSET))(this, a1);
		}

		::System::Void _CreateClickItem(::Class_1_66C20D6C355B068E_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATECLICKITEM_OFFSET))(this, a1);
		}

		::System::Void _SyncMapInfo(::Class_1_35376882FCFC9E51* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35376882FCFC9E51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCMAPINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncItemInfo(::Class_1_28AF0C7D8FD87E9F_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCITEMINFO_OFFSET))(this, a1);
		}

		::System::Void SyncUnlocked(::Class_1_075C34D03AFA1215_73* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_73*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCUNLOCKED_OFFSET))(this, a1, a2);
		}

		::System::Void TryAddTrigger(::RPG::Client::IMonopolyVisualEffectTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMonopolyVisualEffectTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_TRYADDTRIGGER_OFFSET))(this, a1);
		}

		::System::Void _TryAddActionProfitTrigger(::Class_1_0E5DA97E7318165F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0E5DA97E7318165F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDACTIONPROFITTRIGGER_OFFSET))(this, a1);
		}

		::System::Void _TryAddLevelGraphTrigger(::RPG::Client::IMonopolyVisualEffectTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMonopolyVisualEffectTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDLEVELGRAPHTRIGGER_OFFSET))(this, a1);
		}

		::System::Void _TryAddImmediatelyTrigger(::RPG::Client::IMonopolyVisualEffectTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMonopolyVisualEffectTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDIMMEDIATELYTRIGGER_OFFSET))(this, a1);
		}

		::System::Void SyncNextDailyUpdateTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCNEXTDAILYUPDATETIMESTAMP_OFFSET))(this, a1);
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

		::System::Void Modify(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFY_OFFSET))(this, a1);
		}

		::System::Void _ModifyItem(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ModifyCurrency(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURRENCY_OFFSET))(this, a1);
		}

		::System::Void _ModifyDice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYDICE_OFFSET))(this, a1);
		}

		::System::Void _ModifyCheatDice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYCHEATDICE_OFFSET))(this, a1);
		}

		::System::Void _ModifyReRollItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYREROLLITEM_OFFSET))(this, a1);
		}

		::System::Void _ModifyStep(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYSTEP_OFFSET))(this, a1);
		}

		::System::Void SetTeleportModifier(::Class_1_BF623F6C7CBB9E69_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETTELEPORTMODIFIER_OFFSET))(this, a1);
		}

		::System::Void ModifyCurCellByTeleport(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURCELLBYTELEPORT_OFFSET))(this, a1, a2);
		}

		::System::Void SetGamePauseState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATE_OFFSET))(this, a1);
		}

		::System::Void SetGamePauseStateSilently(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATESILENTLY_OFFSET))(this, a1);
		}

		::System::Void SetHasSettlement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETHASSETTLEMENT_OFFSET))(this, a1);
		}

		::System::Void SetSettled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETSETTLED_OFFSET))(this);
		}

		::System::Void UpdateDailyRewardState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATEDAILYREWARDSTATE_OFFSET))(this, a1);
		}

		::System::Void UpdateCanTakeDailyRewardState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATECANTAKEDAILYREWARDSTATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DICENUM_OFFSET))(this);
		}

		::System::Void set_DiceNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DICENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_CheatDiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CHEATDICENUM_OFFSET))(this);
		}

		::System::Void set_CheatDiceNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CHEATDICENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrencyNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURRENCYNUM_OFFSET))(this);
		}

		::System::Void set_CurrencyNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURRENCYNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_RemainSteps()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REMAINSTEPS_OFFSET))(this);
		}

		::System::Void set_RemainSteps(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REMAINSTEPS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReRollNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REROLLNUM_OFFSET))(this);
		}

		::System::Void set_ReRollNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REROLLNUM_OFFSET))(this, a1);
		}

		::System::Int32 get_NextCellIDIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTCELLIDINDEX_OFFSET))(this);
		}

		::System::Void set_NextCellIDIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTCELLIDINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_NextDailyUpdateTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTDAILYUPDATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_NextDailyUpdateTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTDAILYUPDATETIMESTAMP_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_45 get_CurCellState()
		{
			return ((::Enum_3_DB663931210BBC27_45(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLSTATE_OFFSET))(this);
		}

		::System::Void set_CurCellState(::Enum_3_DB663931210BBC27_45 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_45))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasUnfinishedEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASUNFINISHEDEVENT_OFFSET))(this);
		}

		::System::UInt32 get_CurCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLID_OFFSET))(this);
		}

		::System::Void set_CurCellID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURMAPID_OFFSET))(this);
		}

		::System::Void set_CurMapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURMAPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* get_Modifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_MODIFIERS_OFFSET))(this);
		}

		::System::Void set_Modifiers(::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_MODIFIERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* get_ImmediatelyModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_IMMEDIATELYMODIFIERS_OFFSET))(this);
		}

		::System::Void set_ImmediatelyModifiers(::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_IMMEDIATELYMODIFIERS_OFFSET))(this, a1);
		}

		::Class_1_BF623F6C7CBB9E69_2* get_TeleportModifier()
		{
			return ((::Class_1_BF623F6C7CBB9E69_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_TELEPORTMODIFIER_OFFSET))(this);
		}

		::System::Void set_TeleportModifier(::Class_1_BF623F6C7CBB9E69_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_TELEPORTMODIFIER_OFFSET))(this, a1);
		}

		::Class_1_BF623F6C7CBB9E69* get_EnterDreamTrigger()
		{
			return ((::Class_1_BF623F6C7CBB9E69*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ENTERDREAMTRIGGER_OFFSET))(this);
		}

		::System::Void set_EnterDreamTrigger(::Class_1_BF623F6C7CBB9E69* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ENTERDREAMTRIGGER_OFFSET))(this, a1);
		}

		::Class_1_BF623F6C7CBB9E69_1* get_LeaveDreamTrigger()
		{
			return ((::Class_1_BF623F6C7CBB9E69_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_LEAVEDREAMTRIGGER_OFFSET))(this);
		}

		::System::Void set_LeaveDreamTrigger(::Class_1_BF623F6C7CBB9E69_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_LEAVEDREAMTRIGGER_OFFSET))(this, a1);
		}

		::Class_1_5249F0902D388234* get_QuizCoinTrigger()
		{
			return ((::Class_1_5249F0902D388234*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_QUIZCOINTRIGGER_OFFSET))(this);
		}

		::System::Void set_QuizCoinTrigger(::Class_1_5249F0902D388234* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5249F0902D388234*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_QUIZCOINTRIGGER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>* get_ContentQueue()
		{
			return ((::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CONTENTQUEUE_OFFSET))(this);
		}

		::System::Void set_ContentQueue(::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CONTENTQUEUE_OFFSET))(this, a1);
		}

		::RPG::Client::MonopolyContentTrigger* get_CurContent()
		{
			return ((::RPG::Client::MonopolyContentTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCONTENT_OFFSET))(this);
		}

		::System::Boolean get_PauseGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_PAUSEGAME_OFFSET))(this);
		}

		::System::Void set_PauseGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_PAUSEGAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSettlement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASSETTLEMENT_OFFSET))(this);
		}

		::System::Void set_HasSettlement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_HASSETTLEMENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISSETTLED_OFFSET))(this);
		}

		::System::Void set_IsSettled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISSETTLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInDream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISINDREAM_OFFSET))(this);
		}

		::System::UInt32 get_DreamDiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DREAMDICENUM_OFFSET))(this);
		}

		::System::Void set_DreamDiceNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DREAMDICENUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMonopolyDailyRewardGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISMONOPOLYDAILYREWARDGET_OFFSET))(this);
		}

		::System::Void set_IsMonopolyDailyRewardGet(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISMONOPOLYDAILYREWARDGET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanTakeDailyReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISCANTAKEDAILYREWARD_OFFSET))(this);
		}

		::System::Void set_IsCanTakeDailyReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISCANTAKEDAILYREWARD_OFFSET))(this, a1);
		}
	};
}
