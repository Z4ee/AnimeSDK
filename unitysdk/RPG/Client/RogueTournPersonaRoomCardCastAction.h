#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21565BDC51733634_1;
class Class_1_5D136E48E4F0A374_2;
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1C7A6F60)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_CASTDESC_OFFSET UNITYSDK_OFFSET(0x1C7A6370)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0x1C7A6A10)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DISCARDROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0x1C7A6310)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DRAWROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0x1C7A62F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0x1C7A6330)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0x1C7A6350)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1C7A62D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0x1C7A6A20)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DISCARDROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0x1C7A6320)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DRAWROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0x1C7A6300)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0x1C7A6340)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0x1C7A6360)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1C7A62E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1C7A6FA0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1C7A6B00)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A6A30)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__GENERATECASTDESC_OFFSET UNITYSDK_OFFSET(0x1C7A63F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardCastAction_TypeDefinitionIndex = 67046;

	class RogueTournPersonaRoomCardCastAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _DiscardRoomCardList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ForceSelectRoomCardUniqueIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _DrawRoomCardList_k__BackingField; // 0x20
		::RPG::Client::RogueTournUnderlineParamInfo* _DescUnderlineParamInfo_k__BackingField; // 0x28
		::System::String* _CastDesc; // 0x30
		::Class_1_21565BDC51733634_1* _ProtoPayloadInfo; // 0x38
		::System::UInt32 _HintID_k__BackingField; // 0x40
		::System::UInt32 _RogueActionID_k__BackingField; // 0x44

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_5D136E48E4F0A374_2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_5D136E48E4F0A374_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* get_DrawRoomCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DRAWROOMCARDLIST_OFFSET))(this);
		}

		::System::Void set_DrawRoomCardList(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DRAWROOMCARDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* get_DiscardRoomCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DISCARDROOMCARDLIST_OFFSET))(this);
		}

		::System::Void set_DiscardRoomCardList(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DISCARDROOMCARDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ForceSelectRoomCardUniqueIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET))(this);
		}

		::System::Void set_ForceSelectRoomCardUniqueIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_FORCESELECTROOMCARDUNIQUEIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::String* get_CastDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_CASTDESC_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* get_DescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GET_DESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::Void set_DescUnderlineParamInfo(::RPG::Client::RogueTournUnderlineParamInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournUnderlineParamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_SET_DESCUNDERLINEPARAMINFO_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_5D136E48E4F0A374_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5D136E48E4F0A374_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__CONSTRUCT_OFFSET))(this, a1);
		}

		::System::Void _GenerateCastDesc(::Class_1_21565BDC51733634_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21565BDC51733634_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDCASTACTION__GENERATECASTDESC_OFFSET))(this, a1);
		}
	};
}
