#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_19.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_10.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_828;
class Class_1_00BAB2C33D444F88_5;
class Class_1_049EA20829C3E01B;
class Class_1_14E02E1F6D70E487_2;
class Class_1_D818CA99906737D6;
namespace RPG::Client { class ChessRogueDiceData; }
namespace RPG::Client { class ChessRogueDiceSurfaceDisplayData; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class RogueNousDiceData; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEBRANCHMODIFIER_OFFSET UNITYSDK_OFFSET(0xB652330)
#define RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEMODIFIER_OFFSET UNITYSDK_OFFSET(0xB652230)
#define RPG_CLIENT_CHESSROGUEDICEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB651590)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICESURFACEDISPLAYDATAITEM_OFFSET UNITYSDK_OFFSET(0xB654A20)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICETITLE_OFFSET UNITYSDK_OFFSET(0xB654B20)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETDICEICON_OFFSET UNITYSDK_OFFSET(0xB654C70)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETDICESURFACEDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xB654920)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETFULLEFFECTDESCWITHEXTRADESC_OFFSET UNITYSDK_OFFSET(0xB6550C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETNOUSDICESLOTS_OFFSET UNITYSDK_OFFSET(0xB654890)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEDESCEXTRAEFFECT_OFFSET UNITYSDK_OFFSET(0xB654F90)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTBASEPARAM_OFFSET UNITYSDK_OFFSET(0xB655330)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0xB655220)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xB654E80)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTICONPATH_OFFSET UNITYSDK_OFFSET(0xB655440)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETSTARTEFFECTTOASTDESC_OFFSET UNITYSDK_OFFSET(0xB654D80)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CANREROLL_OFFSET UNITYSDK_OFFSET(0xB6557B0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHEATROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0xB655770)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHESSROGUEDICEDATA_OFFSET UNITYSDK_OFFSET(0xB655B70)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURBRANCHID_OFFSET UNITYSDK_OFFSET(0xB655810)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICEID_OFFSET UNITYSDK_OFFSET(0xB655940)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESTATUS_OFFSET UNITYSDK_OFFSET(0xB655730)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESURFACEID_OFFSET UNITYSDK_OFFSET(0xB6559F0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURROLLEDOUTSURFACEIDS_OFFSET UNITYSDK_OFFSET(0xB655AF0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURSLOTID_OFFSET UNITYSDK_OFFSET(0xB6558C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB6556F0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB6556D0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICETYPE_OFFSET UNITYSDK_OFFSET(0xB655710)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_GIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0xB6557D0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_ISCHEATROLLUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB655750)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_PASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0xB6557F0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_REROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0xB655790)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_ROGUENOUSDICEDATA_OFFSET UNITYSDK_OFFSET(0xB655B90)
#define RPG_CLIENT_CHESSROGUEDICEINFO_HASPROTECTSPECIALTYPEMODIFIER_OFFSET UNITYSDK_OFFSET(0xB655550)
#define RPG_CLIENT_CHESSROGUEDICEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB6512A0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_RESETDICESTATUS_OFFSET UNITYSDK_OFFSET(0xB654420)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CANREROLL_OFFSET UNITYSDK_OFFSET(0xB6557C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHEATROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0xB655780)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHESSROGUEDICEDATA_OFFSET UNITYSDK_OFFSET(0xB655B80)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CURDICESTATUS_OFFSET UNITYSDK_OFFSET(0xB655740)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB655700)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB6556E0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICETYPE_OFFSET UNITYSDK_OFFSET(0xB655720)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_GIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0xB6557E0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_ISCHEATROLLUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB655760)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_PASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0xB655800)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_REROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0xB6557A0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_ROGUENOUSDICEDATA_OFFSET UNITYSDK_OFFSET(0xB655BA0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCCHESSROGUEDICEINFO_OFFSET UNITYSDK_OFFSET(0xB651A30)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCDICEPASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0xB654840)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCROGUENOUSDICEBRANCHDATA_OFFSET UNITYSDK_OFFSET(0xB651FC0)
#define RPG_CLIENT_CHESSROGUEDICEINFO__CREATEDICEITEM_OFFSET UNITYSDK_OFFSET(0xB654470)
#define RPG_CLIENT_CHESSROGUEDICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB6510B0)
#define RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB654690)
#define RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB654570)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDiceInfo_TypeDefinitionIndex = 62580;

	class ChessRogueDiceInfo : public ::System::Object
	{
	public:
		::RPG::Client::ChessRogueDiceData* _ChessRogueDiceData_k__BackingField; // 0x10
		::RPG::Client::RogueNousDiceData* _RogueNousDiceData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _DiceModifiers_k__BackingField; // 0x20
		::Class_0_16E4307DCC419505_828* _CurDiceItem; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _DiceBranchModifiers_k__BackingField; // 0x30
		::System::UInt32 _CheatRollLeftNum_k__BackingField; // 0x38
		::System::UInt32 _GiveUpObtainCoin_k__BackingField; // 0x3C
		::System::Boolean _CanReRoll_k__BackingField; // 0x40
		::System::Boolean _IsCheatRollUnlocked_k__BackingField; // 0x41
		::System::UInt32 _ReRollLeftNum_k__BackingField; // 0x44
		::System::Int32 _PassiveAccumulateValue_k__BackingField; // 0x48
		::Enum_3_ED790DAC948A65A9_10 _DiceType_k__BackingField; // 0x4C
		::Enum_3_DB663931210BBC27_19 _CurDiceStatus_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void AddDiceModifier(::Class_1_D818CA99906737D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void AddDiceBranchModifier(::Class_1_D818CA99906737D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEBRANCHMODIFIER_OFFSET))(this, a1);
		}

		::System::Void ResetDiceStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_RESETDICESTATUS_OFFSET))(this);
		}

		::System::Void SyncChessRogueDiceInfo(::Class_1_14E02E1F6D70E487_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCCHESSROGUEDICEINFO_OFFSET))(this, a1);
		}

		::System::Void SyncDicePassiveAccumulateValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCDICEPASSIVEACCUMULATEVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSlotDataItem*>* GetNousDiceSlots()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSlotDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETNOUSDICESLOTS_OFFSET))(this);
		}

		::System::Void _RefreshDiceModifiers(::Class_1_D818CA99906737D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEMODIFIERS_OFFSET))(this, a1);
		}

		::System::Void _RefreshDiceBranchModifiers(::Class_1_00BAB2C33D444F88_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEBRANCHMODIFIERS_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_828* _CreateDiceItem(::Class_1_14E02E1F6D70E487_2* a1)
		{
			return ((::Class_0_16E4307DCC419505_828*(*)(::PVOID, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__CREATEDICEITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>* GetDiceSurfaceDisplayDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETDICESURFACEDISPLAYDATALIST_OFFSET))(this);
		}

		::RPG::Client::ChessRogueDiceSurfaceDisplayData* GetCurDiceSurfaceDisplayDataItem()
		{
			return ((::RPG::Client::ChessRogueDiceSurfaceDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICESURFACEDISPLAYDATAITEM_OFFSET))(this);
		}

		::RPG::Client::TextID GetCurDiceTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICETITLE_OFFSET))(this);
		}

		::System::String* GetDiceIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETDICEICON_OFFSET))(this);
		}

		::System::String* GetStartEffectToastDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETSTARTEFFECTTOASTDESC_OFFSET))(this);
		}

		::System::String* GetPassiveEffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetPassiveDescExtraEffect()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEDESCEXTRAEFFECT_OFFSET))(this);
		}

		::System::Void GetFullEffectDescWithExtraDesc(::System::String*& a1, ::Il2CppArray<::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETFULLEFFECTDESCWITHEXTRADESC_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetPassiveEffectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTCOUNT_OFFSET))(this);
		}

		::System::Single GetPassiveEffectBaseParam()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTBASEPARAM_OFFSET))(this);
		}

		::System::String* GetPassiveEffectIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTICONPATH_OFFSET))(this);
		}

		::System::Boolean HasProtectSpecialTypeModifier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_HASPROTECTSPECIALTYPEMODIFIER_OFFSET))(this);
		}

		::System::Void SyncRogueNousDiceBranchData(::Class_1_049EA20829C3E01B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_049EA20829C3E01B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCROGUENOUSDICEBRANCHDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_DiceModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEMODIFIERS_OFFSET))(this);
		}

		::System::Void set_DiceModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEMODIFIERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_DiceBranchModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEBRANCHMODIFIERS_OFFSET))(this);
		}

		::System::Void set_DiceBranchModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEBRANCHMODIFIERS_OFFSET))(this, a1);
		}

		::Enum_3_ED790DAC948A65A9_10 get_DiceType()
		{
			return ((::Enum_3_ED790DAC948A65A9_10(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICETYPE_OFFSET))(this);
		}

		::System::Void set_DiceType(::Enum_3_ED790DAC948A65A9_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICETYPE_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_19 get_CurDiceStatus()
		{
			return ((::Enum_3_DB663931210BBC27_19(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESTATUS_OFFSET))(this);
		}

		::System::Void set_CurDiceStatus(::Enum_3_DB663931210BBC27_19 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_19))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CURDICESTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCheatRollUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_ISCHEATROLLUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsCheatRollUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_ISCHEATROLLUNLOCKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_CheatRollLeftNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHEATROLLLEFTNUM_OFFSET))(this);
		}

		::System::Void set_CheatRollLeftNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHEATROLLLEFTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReRollLeftNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_REROLLLEFTNUM_OFFSET))(this);
		}

		::System::Void set_ReRollLeftNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_REROLLLEFTNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_CanReRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CANREROLL_OFFSET))(this);
		}

		::System::Void set_CanReRoll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CANREROLL_OFFSET))(this, a1);
		}

		::System::UInt32 get_GiveUpObtainCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_GIVEUPOBTAINCOIN_OFFSET))(this);
		}

		::System::Void set_GiveUpObtainCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_GIVEUPOBTAINCOIN_OFFSET))(this, a1);
		}

		::System::Int32 get_PassiveAccumulateValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_PASSIVEACCUMULATEVALUE_OFFSET))(this);
		}

		::System::Void set_PassiveAccumulateValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_PASSIVEACCUMULATEVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurBranchID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURBRANCHID_OFFSET))(this);
		}

		::System::UInt32 get_CurSlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURSLOTID_OFFSET))(this);
		}

		::System::UInt32 get_CurDiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICEID_OFFSET))(this);
		}

		::System::UInt32 get_CurDiceSurfaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESURFACEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CurRolledOutSurfaceIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURROLLEDOUTSURFACEIDS_OFFSET))(this);
		}

		::RPG::Client::ChessRogueDiceData* get_ChessRogueDiceData()
		{
			return ((::RPG::Client::ChessRogueDiceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHESSROGUEDICEDATA_OFFSET))(this);
		}

		::System::Void set_ChessRogueDiceData(::RPG::Client::ChessRogueDiceData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueDiceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHESSROGUEDICEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueNousDiceData* get_RogueNousDiceData()
		{
			return ((::RPG::Client::RogueNousDiceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_ROGUENOUSDICEDATA_OFFSET))(this);
		}

		::System::Void set_RogueNousDiceData(::RPG::Client::RogueNousDiceData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_ROGUENOUSDICEDATA_OFFSET))(this, a1);
		}
	};
}
