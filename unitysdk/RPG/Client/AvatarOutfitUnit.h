#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_6F1A105107B2BC27;
class Class_1_999AE0B49D951C72;
namespace RPG::Client { class AvatarOutfitSlot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define RPG_CLIENT_AVATAROUTFITUNIT_BELONGSTOSLOT_OFFSET UNITYSDK_OFFSET(0x9DB0230)
#define RPG_CLIENT_AVATAROUTFITUNIT_CHECKISOWNED_OFFSET UNITYSDK_OFFSET(0x9DB13F0)
#define RPG_CLIENT_AVATAROUTFITUNIT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9DB1D80)
#define RPG_CLIENT_AVATAROUTFITUNIT_CONFLICTWITH_OFFSET UNITYSDK_OFFSET(0x9DADE80)
#define RPG_CLIENT_AVATAROUTFITUNIT_FILLSLOTTYPESTO_OFFSET UNITYSDK_OFFSET(0x9DADF20)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x9DB2010)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETICONPATH_OFFSET UNITYSDK_OFFSET(0x9DB0550)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETMODEL_OFFSET UNITYSDK_OFFSET(0x9DAE090)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETRARITYFRAMEICONPATH_OFFSET UNITYSDK_OFFSET(0x9DB0680)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x9DB1BA0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9DB1AE0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_HASITEMDISPLAY_OFFSET UNITYSDK_OFFSET(0x9DB1940)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DB18D0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x9DAFBC0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x9DB1C60)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x9DB18E0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9DB1A20)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x9DB14A0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_SLOTTYPES_OFFSET UNITYSDK_OFFSET(0x9DB1900)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x9DB1920)
#define RPG_CLIENT_AVATAROUTFITUNIT_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0x9DB20D0)
#define RPG_CLIENT_AVATAROUTFITUNIT_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x9DB18F0)
#define RPG_CLIENT_AVATAROUTFITUNIT_SET_SLOTTYPES_OFFSET UNITYSDK_OFFSET(0x9DB1910)
#define RPG_CLIENT_AVATAROUTFITUNIT_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x9DB1930)
#define RPG_CLIENT_AVATAROUTFITUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB1D70)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETDEFAULTDETAIL_OFFSET UNITYSDK_OFFSET(0x9DB19D0)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETDETAIL_OFFSET UNITYSDK_OFFSET(0x9DB1EC0)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETMODELBYTARGETGENDER_OFFSET UNITYSDK_OFFSET(0x9DB1E50)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETTARGETGENDER_OFFSET UNITYSDK_OFFSET(0x9DB1DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfitUnit_TypeDefinitionIndex = 57680;

	class AvatarOutfitUnit : public ::System::Object
	{
	public:
		::RPG::Client::AvatarOutfitSlot* _Slot_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_6F1A105107B2BC27*>* _Details; // 0x18
		::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* _SlotTypes_k__BackingField; // 0x20
		::System::UInt32 _ItemID_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 id, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_6F1A105107B2BC27*>* details)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_6F1A105107B2BC27*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT__CTOR_OFFSET))(this, id, details);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_SET_ITEMID_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* get_SlotTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_SLOTTYPES_OFFSET))(this);
		}

		::System::Void set_SlotTypes(::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_SET_SLOTTYPES_OFFSET))(this, value);
		}

		::RPG::Client::AvatarOutfitSlot* get_Slot()
		{
			return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::RPG::Client::AvatarOutfitSlot* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_SET_SLOT_OFFSET))(this, value);
		}

		::System::Boolean get_HasItemDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_HASITEMDISPLAY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_BGDESC_OFFSET))(this);
		}

		::RPG::GameCore::ItemRarity get_Rarity()
		{
			return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_RARITY_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_ISNEW_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::AvatarOutfitUnit* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_COMPARETO_OFFSET))(this, other);
		}

		::System::Void FillSlotTypesTo(::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_FILLSLOTTYPESTO_OFFSET))(this, buffer);
		}

		::Class_1_999AE0B49D951C72* GetModel(::RPG::GameCore::GenderType gender)
		{
			return ((::Class_1_999AE0B49D951C72*(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GETMODEL_OFFSET))(this, gender);
		}

		::System::String* GetIconPath(::RPG::GameCore::GenderType gender)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GETICONPATH_OFFSET))(this, gender);
		}

		::System::String* GetRarityFrameIconPath(::RPG::GameCore::GenderType gender)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GETRARITYFRAMEICONPATH_OFFSET))(this, gender);
		}

		::System::String* GetFigureIconPath(::RPG::GameCore::GenderType gender)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GETFIGUREICONPATH_OFFSET))(this, gender);
		}

		::System::Boolean CheckIsOwned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_CHECKISOWNED_OFFSET))(this);
		}

		::System::Boolean BelongsToSlot(::RPG::GameCore::PlayerOutfitSlotType target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_BELONGSTOSLOT_OFFSET))(this, target);
		}

		::System::Boolean ConflictWith(::RPG::Client::AvatarOutfitUnit* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_CONFLICTWITH_OFFSET))(this, other);
		}

		::System::Void MarkHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_MARKHASSEEN_OFFSET))(this);
		}

		::Class_1_999AE0B49D951C72* _GetModelByTargetGender(::RPG::GameCore::TargetGenderType gender)
		{
			return ((::Class_1_999AE0B49D951C72*(*)(::PVOID, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT__GETMODELBYTARGETGENDER_OFFSET))(this, gender);
		}

		::RPG::GameCore::TargetGenderType _GetTargetGender(::RPG::GameCore::GenderType gender)
		{
			return ((::RPG::GameCore::TargetGenderType(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT__GETTARGETGENDER_OFFSET))(this, gender);
		}

		::Class_1_6F1A105107B2BC27* _GetDefaultDetail()
		{
			return ((::Class_1_6F1A105107B2BC27*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT__GETDEFAULTDETAIL_OFFSET))(this);
		}

		::Class_1_6F1A105107B2BC27* _GetDetail(::RPG::GameCore::TargetGenderType gender)
		{
			return ((::Class_1_6F1A105107B2BC27*(*)(::PVOID, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT__GETDETAIL_OFFSET))(this, gender);
		}
	};
}
