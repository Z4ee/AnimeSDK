#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDisplayWallContext_SlotComparerSelector; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSubArea; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xE24C2A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTDIYITEMS_OFFSET UNITYSDK_OFFSET(0xE24D4F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTSLOT_OFFSET UNITYSDK_OFFSET(0xE24D4D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTSUBAREA_OFFSET UNITYSDK_OFFSET(0xE24D4B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_SUBAREALIST_OFFSET UNITYSDK_OFFSET(0xE24D490)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_REFRESHCURRENTDIYITEMS_OFFSET UNITYSDK_OFFSET(0xE24C890)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTDIYITEMS_OFFSET UNITYSDK_OFFSET(0xE24D500)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTSLOT_OFFSET UNITYSDK_OFFSET(0xE24D4E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTSUBAREA_OFFSET UNITYSDK_OFFSET(0xE24D4C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_SUBAREALIST_OFFSET UNITYSDK_OFFSET(0xE24D4A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SORTCURRENTDIYITEMS_OFFSET UNITYSDK_OFFSET(0xE24C9D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SYNCCURRENTDIYITEMREFS_OFFSET UNITYSDK_OFFSET(0xE24C3F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0xE24D510)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CREATECOMPOSITECOMPARER_OFFSET UNITYSDK_OFFSET(0xE24CA60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE24C330)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__FINDMATCHINGITEM_OFFSET UNITYSDK_OFFSET(0xE24C6D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__GETDEFAULTSUBAREA_OFFSET UNITYSDK_OFFSET(0xE24D130)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_TypeDefinitionIndex = 74190;

	class TrainPartyBuildDisplayWallContext : public ::System::Object
	{
	public:
		static ::RPG::Client::TrainParty::TrainPartyBuildDisplayWallContext_SlotComparerSelector** StaticGet__SlotComparerSelector()
		{
			return (::RPG::Client::TrainParty::TrainPartyBuildDisplayWallContext_SlotComparerSelector**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildDisplayWallContext_TypeDefinitionIndex)->GetStaticField(0x5BB50);
		}
		// static const ::System::UInt32 _INVALID_SUB_AREA_ID = 0x0; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>* _SubAreaList_k__BackingField; // 0x10
		::RPG::Client::TrainParty::TrainPartyBuildSubArea* _CurrentSubArea_k__BackingField; // 0x18
		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* _CurrentSlot_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* _CurrentDIYItems_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CCTOR_OFFSET))();
		}

		static ::RPG::Client::TrainParty::TrainPartyBuildDisplayWallContext* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDisplayWallContext*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SyncCurrentDIYItemRefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SYNCCURRENTDIYITEMREFS_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* _FindMatchingItem(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__FINDMATCHINGITEM_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshCurrentDIYItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_REFRESHCURRENTDIYITEMS_OFFSET))(this);
		}

		::System::Void SortCurrentDIYItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SORTCURRENTDIYITEMS_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSubArea* _GetDefaultSubArea(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSubArea*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__GETDEFAULTSUBAREA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* _CreateCompositeComparer()
		{
			return ((::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CREATECOMPOSITECOMPARER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>* get_SubAreaList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_SUBAREALIST_OFFSET))(this);
		}

		::System::Void set_SubAreaList(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_SUBAREALIST_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSubArea* get_CurrentSubArea()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSubArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTSUBAREA_OFFSET))(this);
		}

		::System::Void set_CurrentSubArea(::RPG::Client::TrainParty::TrainPartyBuildSubArea* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSubArea*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTSUBAREA_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* get_CurrentSlot()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTSLOT_OFFSET))(this);
		}

		::System::Void set_CurrentSlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTSLOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* get_CurrentDIYItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTDIYITEMS_OFFSET))(this);
		}

		::System::Void set_CurrentDIYItems(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTDIYITEMS_OFFSET))(this, a1);
		}
	};
}
