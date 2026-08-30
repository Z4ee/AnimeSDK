#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_20.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_10.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_917;
class Class_1_0A99AF1699F7F17E_7;
class Class_1_B06D2EC51B693A66;
class Class_1_BB4B99DE4C2501EC_7;
class Class_1_C9DFE5EE7107C629_7;
namespace RPG::Client { class ChessRogueDiceData; }
namespace RPG::Client { class ChessRogueDiceSurfaceDisplayData; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class RogueNousDiceData; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEBRANCHMODIFIER_OFFSET UNITYSDK_OFFSET(0x1CB376D0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1CB375D0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB36850)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICESURFACEDISPLAYDATAITEM_OFFSET UNITYSDK_OFFSET(0x1CB39F00)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICETITLE_OFFSET UNITYSDK_OFFSET(0x1CB3A050)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETDICEICON_OFFSET UNITYSDK_OFFSET(0x1CB3A1E0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETDICESURFACEDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x1CB39DB0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETFULLEFFECTDESCWITHEXTRADESC_OFFSET UNITYSDK_OFFSET(0x1CB3A780)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETNOUSDICESLOTS_OFFSET UNITYSDK_OFFSET(0x1CB39D00)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEDESCEXTRAEFFECT_OFFSET UNITYSDK_OFFSET(0x1CB3A600)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTBASEPARAM_OFFSET UNITYSDK_OFFSET(0x1CB3AA90)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB3A940)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0x1CB3A4A0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTICONPATH_OFFSET UNITYSDK_OFFSET(0x1CB3ABE0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETSTARTEFFECTTOASTDESC_OFFSET UNITYSDK_OFFSET(0x1CB3A340)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CANREROLL_OFFSET UNITYSDK_OFFSET(0x1CB3AF40)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHEATROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0x1CB3AF00)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHESSROGUEDICEDATA_OFFSET UNITYSDK_OFFSET(0x1CB3B360)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURBRANCHID_OFFSET UNITYSDK_OFFSET(0x1CB3AFA0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICEID_OFFSET UNITYSDK_OFFSET(0x1CB3B0F0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESTATUS_OFFSET UNITYSDK_OFFSET(0x1CB3AEC0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESURFACEID_OFFSET UNITYSDK_OFFSET(0x1CB3B170)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURROLLEDOUTSURFACEIDS_OFFSET UNITYSDK_OFFSET(0x1CB3B2C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURSLOTID_OFFSET UNITYSDK_OFFSET(0x1CB3B050)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1CB3AE80)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1CB3AE60)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICETYPE_OFFSET UNITYSDK_OFFSET(0x1CB3AEA0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_GIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0x1CB3AF60)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_ISCHEATROLLUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1CB3AEE0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_PASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0x1CB3AF80)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_REROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0x1CB3AF20)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_ROGUENOUSDICEDATA_OFFSET UNITYSDK_OFFSET(0x1CB3B380)
#define RPG_CLIENT_CHESSROGUEDICEINFO_HASPROTECTSPECIALTYPEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1CB3AD40)
#define RPG_CLIENT_CHESSROGUEDICEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1CB36550)
#define RPG_CLIENT_CHESSROGUEDICEINFO_RESETDICESTATUS_OFFSET UNITYSDK_OFFSET(0x1CB39890)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CANREROLL_OFFSET UNITYSDK_OFFSET(0x1CB3AF50)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHEATROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0x1CB3AF10)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHESSROGUEDICEDATA_OFFSET UNITYSDK_OFFSET(0x1CB3B370)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CURDICESTATUS_OFFSET UNITYSDK_OFFSET(0x1CB3AED0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1CB3AE90)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1CB3AE70)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICETYPE_OFFSET UNITYSDK_OFFSET(0x1CB3AEB0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_GIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0x1CB3AF70)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_ISCHEATROLLUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1CB3AEF0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_PASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0x1CB3AF90)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_REROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0x1CB3AF30)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_ROGUENOUSDICEDATA_OFFSET UNITYSDK_OFFSET(0x1CB3B390)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCCHESSROGUEDICEINFO_OFFSET UNITYSDK_OFFSET(0x1CB36D00)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCDICEPASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0x1CB39CB0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCROGUENOUSDICEBRANCHDATA_OFFSET UNITYSDK_OFFSET(0x1CB37360)
#define RPG_CLIENT_CHESSROGUEDICEINFO__CREATEDICEITEM_OFFSET UNITYSDK_OFFSET(0x1CB398E0)
#define RPG_CLIENT_CHESSROGUEDICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB36360)
#define RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1CB39B00)
#define RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1CB399E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDiceInfo_TypeDefinitionIndex = 66938;

	class ChessRogueDiceInfo : public ::System::Object
	{
	public:
		::RPG::Client::ChessRogueDiceData* _ChessRogueDiceData_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _DiceModifiers_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_917* _CurDiceItem; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _DiceBranchModifiers_k__BackingField; // 0x28
		::RPG::Client::RogueNousDiceData* _RogueNousDiceData_k__BackingField; // 0x30
		::System::Boolean _CanReRoll_k__BackingField; // 0x38
		::System::Boolean _IsCheatRollUnlocked_k__BackingField; // 0x39
		::Enum_3_ED790DAC948A65A9_10 _DiceType_k__BackingField; // 0x3C
		::System::Int32 _PassiveAccumulateValue_k__BackingField; // 0x40
		::System::UInt32 _CheatRollLeftNum_k__BackingField; // 0x44
		::Enum_3_DB663931210BBC27_20 _CurDiceStatus_k__BackingField; // 0x48
		::System::UInt32 _GiveUpObtainCoin_k__BackingField; // 0x4C
		::System::UInt32 _ReRollLeftNum_k__BackingField; // 0x50

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

		::System::Void AddDiceModifier(::Class_1_BB4B99DE4C2501EC_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void AddDiceBranchModifier(::Class_1_BB4B99DE4C2501EC_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEBRANCHMODIFIER_OFFSET))(this, a1);
		}

		::System::Void ResetDiceStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_RESETDICESTATUS_OFFSET))(this);
		}

		::System::Void SyncChessRogueDiceInfo(::Class_1_C9DFE5EE7107C629_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCCHESSROGUEDICEINFO_OFFSET))(this, a1);
		}

		::System::Void SyncDicePassiveAccumulateValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCDICEPASSIVEACCUMULATEVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSlotDataItem*>* GetNousDiceSlots()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSlotDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETNOUSDICESLOTS_OFFSET))(this);
		}

		::System::Void _RefreshDiceModifiers(::Class_1_BB4B99DE4C2501EC_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEMODIFIERS_OFFSET))(this, a1);
		}

		::System::Void _RefreshDiceBranchModifiers(::Class_1_0A99AF1699F7F17E_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEBRANCHMODIFIERS_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_917* _CreateDiceItem(::Class_1_C9DFE5EE7107C629_7* a1)
		{
			return ((::Class_0_16E4307DCC419505_917*(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__CREATEDICEITEM_OFFSET))(this, a1);
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

		::System::Void SyncRogueNousDiceBranchData(::Class_1_B06D2EC51B693A66* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B06D2EC51B693A66*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCROGUENOUSDICEBRANCHDATA_OFFSET))(this, a1);
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

		::Enum_3_DB663931210BBC27_20 get_CurDiceStatus()
		{
			return ((::Enum_3_DB663931210BBC27_20(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESTATUS_OFFSET))(this);
		}

		::System::Void set_CurDiceStatus(::Enum_3_DB663931210BBC27_20 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_20))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CURDICESTATUS_OFFSET))(this, a1);
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
