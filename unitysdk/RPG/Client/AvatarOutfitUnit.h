#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_999AE0B49D951C72;
class Class_1_9CD95AD0A2E83C8D;
namespace RPG::Client { class AvatarOutfitSlot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define RPG_CLIENT_AVATAROUTFITUNIT_BELONGSTOSLOT_OFFSET UNITYSDK_OFFSET(0x18146E50)
#define RPG_CLIENT_AVATAROUTFITUNIT_CHECKISOWNED_OFFSET UNITYSDK_OFFSET(0x18148190)
#define RPG_CLIENT_AVATAROUTFITUNIT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x18148CD0)
#define RPG_CLIENT_AVATAROUTFITUNIT_CONFLICTWITH_OFFSET UNITYSDK_OFFSET(0x18144A00)
#define RPG_CLIENT_AVATAROUTFITUNIT_FILLSLOTTYPESTO_OFFSET UNITYSDK_OFFSET(0x18144AA0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x18148F30)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETICONPATH_OFFSET UNITYSDK_OFFSET(0x181471B0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETMODEL_OFFSET UNITYSDK_OFFSET(0x18144C70)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETRARITYFRAMEICONPATH_OFFSET UNITYSDK_OFFSET(0x181472E0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x18148AE0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_DESC_OFFSET UNITYSDK_OFFSET(0x18148A20)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_HASITEMDISPLAY_OFFSET UNITYSDK_OFFSET(0x18148880)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ID_OFFSET UNITYSDK_OFFSET(0x18148810)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x18146720)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x18148BA0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x18148820)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18148960)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x18148240)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_SLOTTYPES_OFFSET UNITYSDK_OFFSET(0x18148840)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x18148860)
#define RPG_CLIENT_AVATAROUTFITUNIT_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0x18148FF0)
#define RPG_CLIENT_AVATAROUTFITUNIT_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x18148830)
#define RPG_CLIENT_AVATAROUTFITUNIT_SET_SLOTTYPES_OFFSET UNITYSDK_OFFSET(0x18148850)
#define RPG_CLIENT_AVATAROUTFITUNIT_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x18148870)
#define RPG_CLIENT_AVATAROUTFITUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18148CC0)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETDEFAULTDETAIL_OFFSET UNITYSDK_OFFSET(0x18148910)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETDETAIL_OFFSET UNITYSDK_OFFSET(0x18148E10)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETMODELBYTARGETGENDER_OFFSET UNITYSDK_OFFSET(0x18148DA0)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETTARGETGENDER_OFFSET UNITYSDK_OFFSET(0x18148D40)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfitUnit_TypeDefinitionIndex = 59740;

	class AvatarOutfitUnit : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_9CD95AD0A2E83C8D*>* _Details; // 0x10
		::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* _SlotTypes_k__BackingField; // 0x18
		::RPG::Client::AvatarOutfitSlot* _Slot_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::UInt32 _ItemID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_9CD95AD0A2E83C8D*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_9CD95AD0A2E83C8D*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_SET_ITEMID_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* get_SlotTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_SLOTTYPES_OFFSET))(this);
		}

		::System::Void set_SlotTypes(::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_SET_SLOTTYPES_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarOutfitSlot* get_Slot()
		{
			return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::RPG::Client::AvatarOutfitSlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_SET_SLOT_OFFSET))(this, a1);
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

		::System::Int32 CompareTo(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void FillSlotTypesTo(::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_FILLSLOTTYPESTO_OFFSET))(this, a1);
		}

		::Class_1_999AE0B49D951C72* GetModel(::RPG::GameCore::GenderType a1)
		{
			return ((::Class_1_999AE0B49D951C72*(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GETMODEL_OFFSET))(this, a1);
		}

		::System::String* GetIconPath(::RPG::GameCore::GenderType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GETICONPATH_OFFSET))(this, a1);
		}

		::System::String* GetRarityFrameIconPath(::RPG::GameCore::GenderType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GETRARITYFRAMEICONPATH_OFFSET))(this, a1);
		}

		::System::String* GetFigureIconPath(::RPG::GameCore::GenderType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_GETFIGUREICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsOwned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_CHECKISOWNED_OFFSET))(this);
		}

		::System::Boolean BelongsToSlot(::RPG::GameCore::PlayerOutfitSlotType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_BELONGSTOSLOT_OFFSET))(this, a1);
		}

		::System::Boolean ConflictWith(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_CONFLICTWITH_OFFSET))(this, a1);
		}

		::System::Void MarkHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT_MARKHASSEEN_OFFSET))(this);
		}

		::Class_1_999AE0B49D951C72* _GetModelByTargetGender(::RPG::GameCore::TargetGenderType a1)
		{
			return ((::Class_1_999AE0B49D951C72*(*)(::PVOID, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT__GETMODELBYTARGETGENDER_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetGenderType _GetTargetGender(::RPG::GameCore::GenderType a1)
		{
			return ((::RPG::GameCore::TargetGenderType(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT__GETTARGETGENDER_OFFSET))(this, a1);
		}

		::Class_1_9CD95AD0A2E83C8D* _GetDefaultDetail()
		{
			return ((::Class_1_9CD95AD0A2E83C8D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT__GETDEFAULTDETAIL_OFFSET))(this);
		}

		::Class_1_9CD95AD0A2E83C8D* _GetDetail(::RPG::GameCore::TargetGenderType a1)
		{
			return ((::Class_1_9CD95AD0A2E83C8D*(*)(::PVOID, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITUNIT__GETDETAIL_OFFSET))(this, a1);
		}
	};
}
