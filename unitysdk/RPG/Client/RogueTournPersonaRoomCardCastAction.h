#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_412B349691B63094_3;
class Class_1_C1A562AF201E3725_3;
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB0F9410)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_CASTDESC_OFFSET UNITYSDK_OFFSET(0xB0F8940)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xB0F8F90)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DISCARDROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xB0F88E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DRAWROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xB0F88C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0xB0F8900)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xB0F8920)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB0F88A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xB0F8FA0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DISCARDROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xB0F88F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DRAWROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xB0F88D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0xB0F8910)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xB0F8930)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB0F88B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB0F9450)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xB0F9080)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F8FB0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__GENERATECASTDESC_OFFSET UNITYSDK_OFFSET(0xB0F89C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardCastAction_TypeDefinitionIndex = 61754;

	class RogueTournPersonaRoomCardCastAction : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournUnderlineParamInfo* _DescUnderlineParamInfo_k__BackingField; // 0x10
		::System::String* _CastDesc; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ForceSelectRoomCardUniqueIDList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _DiscardRoomCardList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _DrawRoomCardList_k__BackingField; // 0x30
		::Class_1_C1A562AF201E3725_3* _ProtoPayloadInfo; // 0x38
		::System::UInt32 _HintID_k__BackingField; // 0x40
		::System::UInt32 _RogueActionID_k__BackingField; // 0x44

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_412B349691B63094_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_412B349691B63094_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* get_DrawRoomCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DRAWROOMCARDLIST_OFFSET))(this);
		}

		::System::Void set_DrawRoomCardList(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DRAWROOMCARDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* get_DiscardRoomCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DISCARDROOMCARDLIST_OFFSET))(this);
		}

		::System::Void set_DiscardRoomCardList(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DISCARDROOMCARDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ForceSelectRoomCardUniqueIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET))(this);
		}

		::System::Void set_ForceSelectRoomCardUniqueIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_HINTID_OFFSET))(this, value);
		}

		::System::String* get_CastDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_CASTDESC_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* get_DescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::Void set_DescUnderlineParamInfo(::RPG::Client::RogueTournUnderlineParamInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournUnderlineParamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DESCUNDERLINEPARAMINFO_OFFSET))(this, value);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_412B349691B63094_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_412B349691B63094_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CONSTRUCT_OFFSET))(this, proto);
		}

		::System::Void _GenerateCastDesc(::Class_1_C1A562AF201E3725_3* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C1A562AF201E3725_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__GENERATECASTDESC_OFFSET))(this, source);
		}
	};
}
