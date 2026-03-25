#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_1D2546645D1F8DBC;
class Class_1_999AE0B49D951C72;
namespace RPG::Client { class AvatarOutfitSlot; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_CHECKISEQUIPPED_OFFSET UNITYSDK_OFFSET(0x914E160)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x914E020)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_EQUIP_OFFSET UNITYSDK_OFFSET(0x914F200)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETEQUIPPEDUNIT_OFFSET UNITYSDK_OFFSET(0x914E560)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETICONPATH_OFFSET UNITYSDK_OFFSET(0x914EB30)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETPREVIEWAVATARMODELS_OFFSET UNITYSDK_OFFSET(0x914F170)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETRARITYFRAMEICONPATH_OFFSET UNITYSDK_OFFSET(0x914EC60)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETSLOTBYINDEX_OFFSET UNITYSDK_OFFSET(0x914EAD0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETSLOTTYPEBYINDEX_OFFSET UNITYSDK_OFFSET(0x914EA50)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITBYID_OFFSET UNITYSDK_OFFSET(0x914E990)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITBYITEMID_OFFSET UNITYSDK_OFFSET(0x914E9F0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITSBYSLOT_OFFSET UNITYSDK_OFFSET(0x914EDC0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GET_COUNTOFSLOTS_OFFSET UNITYSDK_OFFSET(0x914DFA0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GET_TARGETAVATAR_OFFSET UNITYSDK_OFFSET(0x914DF90)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_SORTUNITS_OFFSET UNITYSDK_OFFSET(0x914F060)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__CHECKSLOTISEMPTY_OFFSET UNITYSDK_OFFSET(0x914E2C0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x914E140)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__FIXEDCOMPARE_OFFSET UNITYSDK_OFFSET(0x914F740)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__GETUNITSORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x914F910)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__IGNOREEQUIPPEDCOMPARISON_OFFSET UNITYSDK_OFFSET(0x914F830)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__NORMALCOMPARISON_OFFSET UNITYSDK_OFFSET(0x914F5D0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__STATECOMPARE_OFFSET UNITYSDK_OFFSET(0x914F6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfitEditContext_TypeDefinitionIndex = 50796;

	class AvatarOutfitEditContext : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _TargetAvatar_k__BackingField; // 0x10
		::Class_1_1D2546645D1F8DBC* _Repository; // 0x18

		::System::Void _ctor(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__CTOR_OFFSET))(this, avatar);
		}

		::RPG::Client::IAvatarInfoProvider* get_TargetAvatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GET_TARGETAVATAR_OFFSET))(this);
		}

		::System::Int32 get_CountOfSlots()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GET_COUNTOFSLOTS_OFFSET))(this);
		}

		static ::RPG::Client::AvatarOutfitEditContext* Create(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::RPG::Client::AvatarOutfitEditContext*(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_CREATE_OFFSET))(avatar);
		}

		::System::Boolean CheckIsEquipped(::RPG::Client::AvatarOutfitUnit* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_CHECKISEQUIPPED_OFFSET))(this, item);
		}

		::RPG::Client::AvatarOutfitUnit* GetEquippedUnit(::RPG::Client::AvatarOutfitSlot* slot)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::RPG::Client::AvatarOutfitSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETEQUIPPEDUNIT_OFFSET))(this, slot);
		}

		::RPG::Client::AvatarOutfitUnit* GetUnitByID(::System::UInt32 id)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITBYID_OFFSET))(this, id);
		}

		::RPG::Client::AvatarOutfitUnit* GetUnitByItemID(::System::UInt32 itemID)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITBYITEMID_OFFSET))(this, itemID);
		}

		::RPG::GameCore::PlayerOutfitSlotType GetSlotTypeByIndex(::System::Int32 index)
		{
			return ((::RPG::GameCore::PlayerOutfitSlotType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETSLOTTYPEBYINDEX_OFFSET))(this, index);
		}

		::RPG::Client::AvatarOutfitSlot* GetSlotByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETSLOTBYINDEX_OFFSET))(this, index);
		}

		::System::String* GetIconPath(::RPG::Client::AvatarOutfitUnit* item)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETICONPATH_OFFSET))(this, item);
		}

		::System::String* GetRarityFrameIconPath(::RPG::Client::AvatarOutfitUnit* item)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETRARITYFRAMEICONPATH_OFFSET))(this, item);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>* GetUnitsBySlot(::RPG::Client::AvatarOutfitSlot* slot, ::System::Boolean withDefault)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>*(*)(::PVOID, ::RPG::Client::AvatarOutfitSlot*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITSBYSLOT_OFFSET))(this, slot, withDefault);
		}

		::System::Void SortUnits(::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>* buffer, ::System::Boolean ignoreEquipped)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_SORTUNITS_OFFSET))(this, buffer, ignoreEquipped);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* GetPreviewAvatarModels(::RPG::Client::AvatarOutfitUnit* item)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETPREVIEWAVATARMODELS_OFFSET))(this, item);
		}

		::System::Void Equip(::RPG::Client::AvatarOutfitUnit* targetItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_EQUIP_OFFSET))(this, targetItem);
		}

		::System::Boolean _CheckSlotIsEmpty(::RPG::GameCore::PlayerOutfitSlotType slotType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__CHECKSLOTISEMPTY_OFFSET))(this, slotType);
		}

		::System::Int32 _NormalComparison(::RPG::Client::AvatarOutfitUnit* left, ::RPG::Client::AvatarOutfitUnit* right)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__NORMALCOMPARISON_OFFSET))(this, left, right);
		}

		::System::Int32 _IgnoreEquippedComparison(::RPG::Client::AvatarOutfitUnit* left, ::RPG::Client::AvatarOutfitUnit* right)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__IGNOREEQUIPPEDCOMPARISON_OFFSET))(this, left, right);
		}

		::System::Int32 _StateCompare(::RPG::Client::AvatarOutfitUnit* left, ::RPG::Client::AvatarOutfitUnit* right, ::System::Boolean ignoreEquipped)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__STATECOMPARE_OFFSET))(this, left, right, ignoreEquipped);
		}

		::System::Int32 _GetUnitSortPriority(::RPG::Client::AvatarOutfitUnit* item, ::System::Boolean ignoreEquipped)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__GETUNITSORTPRIORITY_OFFSET))(this, item, ignoreEquipped);
		}

		::System::Int32 _FixedCompare(::RPG::Client::AvatarOutfitUnit* left, ::RPG::Client::AvatarOutfitUnit* right)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__FIXEDCOMPARE_OFFSET))(this, left, right);
		}
	};
}
