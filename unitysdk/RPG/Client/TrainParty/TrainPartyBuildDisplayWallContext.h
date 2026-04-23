#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDisplayWallContext_SlotComparerSelector; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSubArea; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xB33AF60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTDIYITEMS_OFFSET UNITYSDK_OFFSET(0xB33C000)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTSLOT_OFFSET UNITYSDK_OFFSET(0xB33BFE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTSUBAREA_OFFSET UNITYSDK_OFFSET(0xB33BFC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_SUBAREALIST_OFFSET UNITYSDK_OFFSET(0xB33BFA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_REFRESHCURRENTDIYITEMS_OFFSET UNITYSDK_OFFSET(0xB33B4D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTDIYITEMS_OFFSET UNITYSDK_OFFSET(0xB33C010)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTSLOT_OFFSET UNITYSDK_OFFSET(0xB33BFF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTSUBAREA_OFFSET UNITYSDK_OFFSET(0xB33BFD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_SUBAREALIST_OFFSET UNITYSDK_OFFSET(0xB33BFB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SORTCURRENTDIYITEMS_OFFSET UNITYSDK_OFFSET(0xB33B610)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SYNCCURRENTDIYITEMREFS_OFFSET UNITYSDK_OFFSET(0xB33B0B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0xB33C020)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CREATECOMPOSITECOMPARER_OFFSET UNITYSDK_OFFSET(0xB33B6A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB33AFF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__FINDMATCHINGITEM_OFFSET UNITYSDK_OFFSET(0xB33B390)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__GETDEFAULTSUBAREA_OFFSET UNITYSDK_OFFSET(0xB33BC40)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_TypeDefinitionIndex = 68557;

	class TrainPartyBuildDisplayWallContext : public ::System::Object
	{
	public:
		static ::RPG::Client::TrainParty::TrainPartyBuildDisplayWallContext_SlotComparerSelector** StaticGet__SlotComparerSelector()
		{
			return (::RPG::Client::TrainParty::TrainPartyBuildDisplayWallContext_SlotComparerSelector**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildDisplayWallContext_TypeDefinitionIndex)->GetStaticField(0x20A30);
		}
		// static const ::System::UInt32 _INVALID_SUB_AREA_ID = 0x0; // 0x0
		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* _CurrentSlot_k__BackingField; // 0x10
		::RPG::Client::TrainParty::TrainPartyBuildSubArea* _CurrentSubArea_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>* _SubAreaList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* _CurrentDIYItems_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 subAreaID, ::System::UInt32 slotGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CTOR_OFFSET))(this, subAreaID, slotGroupID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CCTOR_OFFSET))();
		}

		static ::RPG::Client::TrainParty::TrainPartyBuildDisplayWallContext* Create(::System::UInt32 subAreaID, ::System::UInt32 slotGroupID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDisplayWallContext*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_CREATE_OFFSET))(subAreaID, slotGroupID);
		}

		::System::Void SyncCurrentDIYItemRefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SYNCCURRENTDIYITEMREFS_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* _FindMatchingItem(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* list, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* target)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__FINDMATCHINGITEM_OFFSET))(this, list, target);
		}

		::System::Void RefreshCurrentDIYItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_REFRESHCURRENTDIYITEMS_OFFSET))(this);
		}

		::System::Void SortCurrentDIYItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SORTCURRENTDIYITEMS_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSubArea* _GetDefaultSubArea(::System::UInt32 subAreaID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSubArea*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__GETDEFAULTSUBAREA_OFFSET))(this, subAreaID);
		}

		::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* _CreateCompositeComparer()
		{
			return ((::System::Collections::Generic::IComparer_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT__CREATECOMPOSITECOMPARER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>* get_SubAreaList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_SUBAREALIST_OFFSET))(this);
		}

		::System::Void set_SubAreaList(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_SUBAREALIST_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSubArea* get_CurrentSubArea()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSubArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTSUBAREA_OFFSET))(this);
		}

		::System::Void set_CurrentSubArea(::RPG::Client::TrainParty::TrainPartyBuildSubArea* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSubArea*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTSUBAREA_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* get_CurrentSlot()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTSLOT_OFFSET))(this);
		}

		::System::Void set_CurrentSlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTSLOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* get_CurrentDIYItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_GET_CURRENTDIYITEMS_OFFSET))(this);
		}

		::System::Void set_CurrentDIYItems(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_SET_CURRENTDIYITEMS_OFFSET))(this, value);
		}
	};
}
