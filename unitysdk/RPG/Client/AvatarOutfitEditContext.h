#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_22D5201F709611D8;
class Class_1_999AE0B49D951C72;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarOutfitSlot; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_CHECKISEQUIPPED_OFFSET UNITYSDK_OFFSET(0xC835200)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xC835050)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_EQUIP_OFFSET UNITYSDK_OFFSET(0xC836450)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETEQUIPPEDUNIT_OFFSET UNITYSDK_OFFSET(0xC835670)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETICONPATH_OFFSET UNITYSDK_OFFSET(0xC835D00)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETPREVIEWAVATARMODELS_OFFSET UNITYSDK_OFFSET(0xC8363C0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETRARITYFRAMEICONPATH_OFFSET UNITYSDK_OFFSET(0xC835E30)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETSLOTBYINDEX_OFFSET UNITYSDK_OFFSET(0xC835CA0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETSLOTTYPEBYINDEX_OFFSET UNITYSDK_OFFSET(0xC835BF0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITBYID_OFFSET UNITYSDK_OFFSET(0xC835B30)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITBYITEMID_OFFSET UNITYSDK_OFFSET(0xC835B90)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITSBYSLOT_OFFSET UNITYSDK_OFFSET(0xC835F90)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GET_COUNTOFSLOTS_OFFSET UNITYSDK_OFFSET(0xC834FD0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GET_TARGETAVATAR_OFFSET UNITYSDK_OFFSET(0xC834FC0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT_SORTUNITS_OFFSET UNITYSDK_OFFSET(0xC836280)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__CHECKSLOTISEMPTY_OFFSET UNITYSDK_OFFSET(0xC835370)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC835160)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__FIXEDCOMPARE_OFFSET UNITYSDK_OFFSET(0xC836A30)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__GETUNITSORTPRIORITY_OFFSET UNITYSDK_OFFSET(0xC836CC0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__IGNOREEQUIPPEDCOMPARISON_OFFSET UNITYSDK_OFFSET(0xC836B20)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__NORMALCOMPARISON_OFFSET UNITYSDK_OFFSET(0xC8368C0)
#define RPG_CLIENT_AVATAROUTFITEDITCONTEXT__STATECOMPARE_OFFSET UNITYSDK_OFFSET(0xC8369A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfitEditContext_TypeDefinitionIndex = 62582;

	class AvatarOutfitEditContext : public ::System::Object
	{
	public:
		::Class_1_22D5201F709611D8* _Repository; // 0x10
		::RPG::AvatarSystem::IAvatar* _TargetAvatar_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_TargetAvatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GET_TARGETAVATAR_OFFSET))(this);
		}

		::System::Int32 get_CountOfSlots()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GET_COUNTOFSLOTS_OFFSET))(this);
		}

		static ::RPG::Client::AvatarOutfitEditContext* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::AvatarOutfitEditContext*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_CREATE_OFFSET))(a1);
		}

		::System::Boolean CheckIsEquipped(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_CHECKISEQUIPPED_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarOutfitUnit* GetEquippedUnit(::RPG::Client::AvatarOutfitSlot* a1)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::RPG::Client::AvatarOutfitSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETEQUIPPEDUNIT_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarOutfitUnit* GetUnitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITBYID_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarOutfitUnit* GetUnitByItemID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITBYITEMID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PlayerOutfitSlotType GetSlotTypeByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::PlayerOutfitSlotType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETSLOTTYPEBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarOutfitSlot* GetSlotByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETSLOTBYINDEX_OFFSET))(this, a1);
		}

		::System::String* GetIconPath(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETICONPATH_OFFSET))(this, a1);
		}

		::System::String* GetRarityFrameIconPath(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETRARITYFRAMEICONPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>* GetUnitsBySlot(::RPG::Client::AvatarOutfitSlot* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>*(*)(::PVOID, ::RPG::Client::AvatarOutfitSlot*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETUNITSBYSLOT_OFFSET))(this, a1, a2);
		}

		::System::Void SortUnits(::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_SORTUNITS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>* GetPreviewAvatarModels(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_999AE0B49D951C72*>*(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_GETPREVIEWAVATARMODELS_OFFSET))(this, a1);
		}

		::System::Void Equip(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT_EQUIP_OFFSET))(this, a1);
		}

		::System::Boolean _CheckSlotIsEmpty(::RPG::GameCore::PlayerOutfitSlotType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__CHECKSLOTISEMPTY_OFFSET))(this, a1);
		}

		::System::Int32 _NormalComparison(::RPG::Client::AvatarOutfitUnit* a1, ::RPG::Client::AvatarOutfitUnit* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__NORMALCOMPARISON_OFFSET))(this, a1, a2);
		}

		::System::Int32 _IgnoreEquippedComparison(::RPG::Client::AvatarOutfitUnit* a1, ::RPG::Client::AvatarOutfitUnit* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__IGNOREEQUIPPEDCOMPARISON_OFFSET))(this, a1, a2);
		}

		::System::Int32 _StateCompare(::RPG::Client::AvatarOutfitUnit* a1, ::RPG::Client::AvatarOutfitUnit* a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__STATECOMPARE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 _GetUnitSortPriority(::RPG::Client::AvatarOutfitUnit* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__GETUNITSORTPRIORITY_OFFSET))(this, a1, a2);
		}

		::System::Int32 _FixedCompare(::RPG::Client::AvatarOutfitUnit* a1, ::RPG::Client::AvatarOutfitUnit* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITEDITCONTEXT__FIXEDCOMPARE_OFFSET))(this, a1, a2);
		}
	};
}
