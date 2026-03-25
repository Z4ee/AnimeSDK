#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36F606812EC9EB69_3;
class Class_1_69F06BA11FF28429_3;
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA3C1C60)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_CASTDESC_OFFSET UNITYSDK_OFFSET(0xA3C17B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xA3C17D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DISCARDROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xA3C1750)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DRAWROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xA3C1730)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0xA3C1770)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xA3C1790)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA3C1710)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_CASTDESC_OFFSET UNITYSDK_OFFSET(0xA3C17C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xA3C17E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DISCARDROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xA3C1760)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DRAWROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xA3C1740)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0xA3C1780)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xA3C17A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA3C1720)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA3C1CA0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA3C18C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C17F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__GENERATEDESC_OFFSET UNITYSDK_OFFSET(0xA3C1DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardCastAction_TypeDefinitionIndex = 54566;

	class RogueTournPersonaRoomCardCastAction : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournUnderlineParamInfo* _DescUnderlineParamInfo_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _DiscardRoomCardList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ForceSelectRoomCardUniqueIDList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _DrawRoomCardList_k__BackingField; // 0x28
		::System::String* _CastDesc_k__BackingField; // 0x30
		::System::UInt32 _HintID_k__BackingField; // 0x38
		::System::UInt32 _RogueActionID_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_69F06BA11FF28429_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_69F06BA11FF28429_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CTOR_OFFSET))(this, actionID, proto);
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

		::System::Void set_CastDesc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_CASTDESC_OFFSET))(this, value);
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

		::System::Void _Construct(::Class_1_69F06BA11FF28429_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69F06BA11FF28429_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CONSTRUCT_OFFSET))(this, proto);
		}

		::System::Void _GenerateDesc(::Class_1_36F606812EC9EB69_3* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36F606812EC9EB69_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__GENERATEDESC_OFFSET))(this, source);
		}
	};
}
