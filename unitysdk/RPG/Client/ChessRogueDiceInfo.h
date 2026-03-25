#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_18.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_6.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_677;
class Class_1_14E02E1F6D70E487_3;
class Class_1_21FD947A9E38C6A8;
class Class_1_49AFAF7E1EDC93F8;
class Class_1_E85FDBE62E39A5EA_5;
namespace RPG::Client { class ChessRogueDiceData; }
namespace RPG::Client { class ChessRogueDiceSurfaceDisplayData; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class RogueNousDiceData; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEBRANCHMODIFIER_OFFSET UNITYSDK_OFFSET(0x936E2C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEMODIFIER_OFFSET UNITYSDK_OFFSET(0x936E220)
#define RPG_CLIENT_CHESSROGUEDICEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x936D560)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICESURFACEDISPLAYDATAITEM_OFFSET UNITYSDK_OFFSET(0x9370950)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICETITLE_OFFSET UNITYSDK_OFFSET(0x9370A50)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETDICEICON_OFFSET UNITYSDK_OFFSET(0x9370B90)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETDICESURFACEDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x9370850)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETFULLEFFECTDESCWITHEXTRADESC_OFFSET UNITYSDK_OFFSET(0x9370FF0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETNOUSDICESLOTS_OFFSET UNITYSDK_OFFSET(0x93707C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEDESCEXTRAEFFECT_OFFSET UNITYSDK_OFFSET(0x9370EC0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTBASEPARAM_OFFSET UNITYSDK_OFFSET(0x9371260)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x9371150)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0x9370DB0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTICONPATH_OFFSET UNITYSDK_OFFSET(0x9371370)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETSTARTEFFECTTOASTDESC_OFFSET UNITYSDK_OFFSET(0x9370CA0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CANREROLL_OFFSET UNITYSDK_OFFSET(0x9371690)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHEATROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0x9371650)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHESSROGUEDICEDATA_OFFSET UNITYSDK_OFFSET(0x9371A40)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURBRANCHID_OFFSET UNITYSDK_OFFSET(0x93716F0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICEID_OFFSET UNITYSDK_OFFSET(0x9371810)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESTATUS_OFFSET UNITYSDK_OFFSET(0x9371610)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESURFACEID_OFFSET UNITYSDK_OFFSET(0x93718C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURROLLEDOUTSURFACEIDS_OFFSET UNITYSDK_OFFSET(0x93719C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURSLOTID_OFFSET UNITYSDK_OFFSET(0x9371790)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0x93715D0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x93715B0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICETYPE_OFFSET UNITYSDK_OFFSET(0x93715F0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_GIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0x93716B0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_ISCHEATROLLUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9371630)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_PASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0x93716D0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_REROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0x9371670)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_ROGUENOUSDICEDATA_OFFSET UNITYSDK_OFFSET(0x9371A60)
#define RPG_CLIENT_CHESSROGUEDICEINFO_HASPROTECTSPECIALTYPEMODIFIER_OFFSET UNITYSDK_OFFSET(0x9371480)
#define RPG_CLIENT_CHESSROGUEDICEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x936D260)
#define RPG_CLIENT_CHESSROGUEDICEINFO_RESETDICESTATUS_OFFSET UNITYSDK_OFFSET(0x9370420)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CANREROLL_OFFSET UNITYSDK_OFFSET(0x93716A0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHEATROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0x9371660)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHESSROGUEDICEDATA_OFFSET UNITYSDK_OFFSET(0x9371A50)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CURDICESTATUS_OFFSET UNITYSDK_OFFSET(0x9371620)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0x93715E0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x93715C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICETYPE_OFFSET UNITYSDK_OFFSET(0x9371600)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_GIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0x93716C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_ISCHEATROLLUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9371640)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_PASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0x93716E0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_REROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0x9371680)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_ROGUENOUSDICEDATA_OFFSET UNITYSDK_OFFSET(0x9371A70)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCCHESSROGUEDICEINFO_OFFSET UNITYSDK_OFFSET(0x936DA40)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCDICEPASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0x9370770)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCROGUENOUSDICEBRANCHDATA_OFFSET UNITYSDK_OFFSET(0x936DFB0)
#define RPG_CLIENT_CHESSROGUEDICEINFO__CREATEDICEITEM_OFFSET UNITYSDK_OFFSET(0x9370470)
#define RPG_CLIENT_CHESSROGUEDICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x936D080)
#define RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0x9370650)
#define RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x9370570)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDiceInfo_TypeDefinitionIndex = 54459;

	class ChessRogueDiceInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _DiceBranchModifiers_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_677* _CurDiceItem; // 0x18
		::RPG::Client::ChessRogueDiceData* _ChessRogueDiceData_k__BackingField; // 0x20
		::RPG::Client::RogueNousDiceData* _RogueNousDiceData_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _DiceModifiers_k__BackingField; // 0x30
		::System::Boolean _IsCheatRollUnlocked_k__BackingField; // 0x38
		::System::Boolean _CanReRoll_k__BackingField; // 0x39
		::System::Int32 _PassiveAccumulateValue_k__BackingField; // 0x3C
		::System::UInt32 _CheatRollLeftNum_k__BackingField; // 0x40
		::System::UInt32 _ReRollLeftNum_k__BackingField; // 0x44
		::Enum_3_ED790DAC948A65A9_6 _DiceType_k__BackingField; // 0x48
		::Enum_3_DB663931210BBC27_18 _CurDiceStatus_k__BackingField; // 0x4C
		::System::UInt32 _GiveUpObtainCoin_k__BackingField; // 0x50

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

		::System::Void AddDiceModifier(::Class_1_49AFAF7E1EDC93F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEMODIFIER_OFFSET))(this, proto);
		}

		::System::Void AddDiceBranchModifier(::Class_1_49AFAF7E1EDC93F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEBRANCHMODIFIER_OFFSET))(this, proto);
		}

		::System::Void ResetDiceStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_RESETDICESTATUS_OFFSET))(this);
		}

		::System::Void SyncChessRogueDiceInfo(::Class_1_14E02E1F6D70E487_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCCHESSROGUEDICEINFO_OFFSET))(this, proto);
		}

		::System::Void SyncDicePassiveAccumulateValue(::System::Int32 passiveAccumulateValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCDICEPASSIVEACCUMULATEVALUE_OFFSET))(this, passiveAccumulateValue);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSlotDataItem*>* GetNousDiceSlots()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSlotDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETNOUSDICESLOTS_OFFSET))(this);
		}

		::System::Void _RefreshDiceModifiers(::Class_1_49AFAF7E1EDC93F8* protoMofiModifier)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEMODIFIERS_OFFSET))(this, protoMofiModifier);
		}

		::System::Void _RefreshDiceBranchModifiers(::Class_1_E85FDBE62E39A5EA_5* protoMofiModifiers)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEBRANCHMODIFIERS_OFFSET))(this, protoMofiModifiers);
		}

		::Class_0_16E4307DCC419505_677* _CreateDiceItem(::Class_1_14E02E1F6D70E487_3* proto)
		{
			return ((::Class_0_16E4307DCC419505_677*(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__CREATEDICEITEM_OFFSET))(this, proto);
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

		::System::Void GetFullEffectDescWithExtraDesc(::System::String*& effectDesc, ::Il2CppArray<::System::UInt32>*& extraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETFULLEFFECTDESCWITHEXTRADESC_OFFSET))(this, effectDesc, extraDesc);
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

		::System::Void SyncRogueNousDiceBranchData(::Class_1_21FD947A9E38C6A8* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21FD947A9E38C6A8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCROGUENOUSDICEBRANCHDATA_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_DiceModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEMODIFIERS_OFFSET))(this);
		}

		::System::Void set_DiceModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEMODIFIERS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_DiceBranchModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEBRANCHMODIFIERS_OFFSET))(this);
		}

		::System::Void set_DiceBranchModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEBRANCHMODIFIERS_OFFSET))(this, value);
		}

		::Enum_3_ED790DAC948A65A9_6 get_DiceType()
		{
			return ((::Enum_3_ED790DAC948A65A9_6(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICETYPE_OFFSET))(this);
		}

		::System::Void set_DiceType(::Enum_3_ED790DAC948A65A9_6 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_6))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICETYPE_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_18 get_CurDiceStatus()
		{
			return ((::Enum_3_DB663931210BBC27_18(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESTATUS_OFFSET))(this);
		}

		::System::Void set_CurDiceStatus(::Enum_3_DB663931210BBC27_18 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_18))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CURDICESTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsCheatRollUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_ISCHEATROLLUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsCheatRollUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_ISCHEATROLLUNLOCKED_OFFSET))(this, value);
		}

		::System::UInt32 get_CheatRollLeftNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHEATROLLLEFTNUM_OFFSET))(this);
		}

		::System::Void set_CheatRollLeftNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHEATROLLLEFTNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_ReRollLeftNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_REROLLLEFTNUM_OFFSET))(this);
		}

		::System::Void set_ReRollLeftNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_REROLLLEFTNUM_OFFSET))(this, value);
		}

		::System::Boolean get_CanReRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CANREROLL_OFFSET))(this);
		}

		::System::Void set_CanReRoll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CANREROLL_OFFSET))(this, value);
		}

		::System::UInt32 get_GiveUpObtainCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_GIVEUPOBTAINCOIN_OFFSET))(this);
		}

		::System::Void set_GiveUpObtainCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_GIVEUPOBTAINCOIN_OFFSET))(this, value);
		}

		::System::Int32 get_PassiveAccumulateValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_PASSIVEACCUMULATEVALUE_OFFSET))(this);
		}

		::System::Void set_PassiveAccumulateValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_PASSIVEACCUMULATEVALUE_OFFSET))(this, value);
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

		::System::Void set_ChessRogueDiceData(::RPG::Client::ChessRogueDiceData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueDiceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHESSROGUEDICEDATA_OFFSET))(this, value);
		}

		::RPG::Client::RogueNousDiceData* get_RogueNousDiceData()
		{
			return ((::RPG::Client::RogueNousDiceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_ROGUENOUSDICEDATA_OFFSET))(this);
		}

		::System::Void set_RogueNousDiceData(::RPG::Client::RogueNousDiceData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_ROGUENOUSDICEDATA_OFFSET))(this, value);
		}
	};
}
