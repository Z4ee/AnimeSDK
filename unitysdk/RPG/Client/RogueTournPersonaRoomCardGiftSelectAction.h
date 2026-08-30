#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_88;
namespace RPG::Client { class IRogueTournPersonaRoomCard; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xDF97100)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_GET_ADDSELECTEDCARDLEVEL_OFFSET UNITYSDK_OFFSET(0xDF96E70)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xDF96E30)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_GET_ROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xDF96E50)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_SET_ADDSELECTEDCARDLEVEL_OFFSET UNITYSDK_OFFSET(0xDF96E80)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xDF96E40)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_SET_ROOMCARDLIST_OFFSET UNITYSDK_OFFSET(0xDF96E60)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xDF97140)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xDF96EE0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDF96E90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardGiftSelectAction_TypeDefinitionIndex = 67051;

	class RogueTournPersonaRoomCardGiftSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* _RoomCardList_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18
		::System::UInt32 _AddSelectedCardLevel_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_7FF19F6206AF6DD7_88* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7FF19F6206AF6DD7_88*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* get_RoomCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_GET_ROOMCARDLIST_OFFSET))(this);
		}

		::System::Void set_RoomCardList(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_SET_ROOMCARDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddSelectedCardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_GET_ADDSELECTEDCARDLEVEL_OFFSET))(this);
		}

		::System::Void set_AddSelectedCardLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_SET_ADDSELECTEDCARDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_7FF19F6206AF6DD7_88* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_88*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDGIFTSELECTACTION__CONSTRUCT_OFFSET))(this, a1);
		}
	};
}
