#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF2D3B79941AF6F8_2;
namespace RPG::Client { class IRogueTournPersonaRoomCard; }
namespace RPG::Client { class RogueTournPersonaGameData; }
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GETLEVELBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA3C5D60)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA3C5DF0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_CURUSEDREROLLCNT_OFFSET UNITYSDK_OFFSET(0xA3C52A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0xA3C5340)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_FREEGOODSMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0xA3C53C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_FREEGOODSPROGRESS_OFFSET UNITYSDK_OFFSET(0xA3C53A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ISINSTANTKILLACTIVE_OFFSET UNITYSDK_OFFSET(0xA3C5380)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ISPRESET_OFFSET UNITYSDK_OFFSET(0xA3C52E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ISQINGQUEKONG_OFFSET UNITYSDK_OFFSET(0xA3C5300)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ISREROLLFORBID_OFFSET UNITYSDK_OFFSET(0xA3C5320)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_MAXREROLLCNT_OFFSET UNITYSDK_OFFSET(0xA3C52C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_QINGQUESUPERCARDUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0xA3C5360)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA3C5260)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xA3C5280)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0xA3C5D00)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_CURUSEDREROLLCNT_OFFSET UNITYSDK_OFFSET(0xA3C52B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0xA3C5350)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_FREEGOODSMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0xA3C53D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_FREEGOODSPROGRESS_OFFSET UNITYSDK_OFFSET(0xA3C53B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ISINSTANTKILLACTIVE_OFFSET UNITYSDK_OFFSET(0xA3C5390)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ISPRESET_OFFSET UNITYSDK_OFFSET(0xA3C52F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ISQINGQUEKONG_OFFSET UNITYSDK_OFFSET(0xA3C5310)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ISREROLLFORBID_OFFSET UNITYSDK_OFFSET(0xA3C5330)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_MAXREROLLCNT_OFFSET UNITYSDK_OFFSET(0xA3C52D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_QINGQUESUPERCARDUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0xA3C5370)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA3C5270)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xA3C5290)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA3C5E30)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__CHECKFREEGOODSEFFECT_OFFSET UNITYSDK_OFFSET(0xA3C61A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__CHECKINSTANTKILLEFFECT_OFFSET UNITYSDK_OFFSET(0xA3C6010)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__CHECKSTYLEEFFECT_OFFSET UNITYSDK_OFFSET(0xA3C5FB0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA3C5570)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C53E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__REFRESHPILEBELONG_OFFSET UNITYSDK_OFFSET(0xA3C5E80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardSelectAction_TypeDefinitionIndex = 54574;

	class RogueTournPersonaRoomCardSelectAction : public ::System::Object
	{
	public:
		// static const ::System::UInt64 _InstantKillStyleID = 0x6C; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _QingQueSuperCardUniqueIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ForceSelectRoomCardUniqueIDList_k__BackingField; // 0x18
		::System::String* _InstantKillBlakcBoardKey; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* RoomUniqueIDLevelDict; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* _RoomCardList_k__BackingField; // 0x30
		::System::UInt32 _CurUsedRerollCnt_k__BackingField; // 0x38
		::System::UInt32 _RogueActionID_k__BackingField; // 0x3C
		::System::UInt32 _FreeGoodsMaxProgress_k__BackingField; // 0x40
		::System::Boolean _IsPreset_k__BackingField; // 0x44
		::System::Boolean _IsInstantKillActive_k__BackingField; // 0x45
		::System::Boolean _IsQingQueKong_k__BackingField; // 0x46
		::System::Boolean _IsRerollForbid_k__BackingField; // 0x47
		::System::UInt32 _FreeGoodsProgress_k__BackingField; // 0x48
		::System::UInt32 _MaxRerollCnt_k__BackingField; // 0x4C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_EF2D3B79941AF6F8_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_EF2D3B79941AF6F8_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* get_RoomCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ROOMCARDLIST_OFFSET))(this);
		}

		::System::Void set_RoomCardList(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ROOMCARDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_CurUsedRerollCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_CURUSEDREROLLCNT_OFFSET))(this);
		}

		::System::Void set_CurUsedRerollCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_CURUSEDREROLLCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxRerollCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_MAXREROLLCNT_OFFSET))(this);
		}

		::System::Void set_MaxRerollCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_MAXREROLLCNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsPreset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ISPRESET_OFFSET))(this);
		}

		::System::Void set_IsPreset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ISPRESET_OFFSET))(this, value);
		}

		::System::Boolean get_IsQingQueKong()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ISQINGQUEKONG_OFFSET))(this);
		}

		::System::Void set_IsQingQueKong(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ISQINGQUEKONG_OFFSET))(this, value);
		}

		::System::Boolean get_IsRerollForbid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ISREROLLFORBID_OFFSET))(this);
		}

		::System::Void set_IsRerollForbid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ISREROLLFORBID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ForceSelectRoomCardUniqueIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET))(this);
		}

		::System::Void set_ForceSelectRoomCardUniqueIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_QingQueSuperCardUniqueIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_QINGQUESUPERCARDUNIQUEIDLIST_OFFSET))(this);
		}

		::System::Void set_QingQueSuperCardUniqueIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_QINGQUESUPERCARDUNIQUEIDLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsInstantKillActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_ISINSTANTKILLACTIVE_OFFSET))(this);
		}

		::System::Void set_IsInstantKillActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_ISINSTANTKILLACTIVE_OFFSET))(this, value);
		}

		::System::UInt32 get_FreeGoodsProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_FREEGOODSPROGRESS_OFFSET))(this);
		}

		::System::Void set_FreeGoodsProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_FREEGOODSPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_FreeGoodsMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GET_FREEGOODSMAXPROGRESS_OFFSET))(this);
		}

		::System::Void set_FreeGoodsMaxProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_SET_FREEGOODSMAXPROGRESS_OFFSET))(this, value);
		}

		::System::Void RefreshOnRollRsp(::Class_1_EF2D3B79941AF6F8_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_REFRESHONROLLRSP_OFFSET))(this, proto);
		}

		::System::UInt32 GetLevelByUniqueID(::System::UInt32 uniqueID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GETLEVELBYUNIQUEID_OFFSET))(this, uniqueID);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_EF2D3B79941AF6F8_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__CONSTRUCT_OFFSET))(this, proto);
		}

		::System::Void _RefreshPileBelong(::Class_1_EF2D3B79941AF6F8_2* proto, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* deckInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8_2*, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__REFRESHPILEBELONG_OFFSET))(this, proto, deckInfo);
		}

		::System::Void _CheckStyleEffect(::RPG::Client::RogueTournPersonaGameData* gameData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__CHECKSTYLEEFFECT_OFFSET))(this, gameData);
		}

		::System::Void _CheckInstantKillEffect(::RPG::Client::RogueTournPersonaGameData* gameData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__CHECKINSTANTKILLEFFECT_OFFSET))(this, gameData);
		}

		::System::Void _CheckFreeGoodsEffect(::RPG::Client::RogueTournPersonaGameData* gameData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDSELECTACTION__CHECKFREEGOODSEFFECT_OFFSET))(this, gameData);
		}
	};
}
