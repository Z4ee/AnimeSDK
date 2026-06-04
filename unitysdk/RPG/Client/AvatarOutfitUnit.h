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

#define RPG_CLIENT_AVATAROUTFITUNIT_BELONGSTOSLOT_OFFSET UNITYSDK_OFFSET(0xB38DA50)
#define RPG_CLIENT_AVATAROUTFITUNIT_CHECKISOWNED_OFFSET UNITYSDK_OFFSET(0xB38D9A0)
#define RPG_CLIENT_AVATAROUTFITUNIT_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB38D6F0)
#define RPG_CLIENT_AVATAROUTFITUNIT_CONFLICTWITH_OFFSET UNITYSDK_OFFSET(0xB38DAD0)
#define RPG_CLIENT_AVATAROUTFITUNIT_FILLSLOTTYPESTO_OFFSET UNITYSDK_OFFSET(0xB389A60)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xB38D760)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETICONPATH_OFFSET UNITYSDK_OFFSET(0xB38BE20)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETMODEL_OFFSET UNITYSDK_OFFSET(0xB389BC0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GETRARITYFRAMEICONPATH_OFFSET UNITYSDK_OFFSET(0xB38BF50)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0xB38D4D0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB38D410)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_HASITEMDISPLAY_OFFSET UNITYSDK_OFFSET(0xB38D2C0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ID_OFFSET UNITYSDK_OFFSET(0xB38D250)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0xB38B4A0)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xB38D590)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xB38D260)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB38D350)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB38CE00)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_SLOTTYPES_OFFSET UNITYSDK_OFFSET(0xB38D280)
#define RPG_CLIENT_AVATAROUTFITUNIT_GET_SLOT_OFFSET UNITYSDK_OFFSET(0xB38D2A0)
#define RPG_CLIENT_AVATAROUTFITUNIT_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0xB38DB70)
#define RPG_CLIENT_AVATAROUTFITUNIT_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xB38D270)
#define RPG_CLIENT_AVATAROUTFITUNIT_SET_SLOTTYPES_OFFSET UNITYSDK_OFFSET(0xB38D290)
#define RPG_CLIENT_AVATAROUTFITUNIT_SET_SLOT_OFFSET UNITYSDK_OFFSET(0xB38D2B0)
#define RPG_CLIENT_AVATAROUTFITUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xB38D6E0)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETDEFAULTDETAIL_OFFSET UNITYSDK_OFFSET(0xB38DD40)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETDETAIL_OFFSET UNITYSDK_OFFSET(0xB38D880)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETMODELBYTARGETGENDER_OFFSET UNITYSDK_OFFSET(0xB38DCD0)
#define RPG_CLIENT_AVATAROUTFITUNIT__GETTARGETGENDER_OFFSET UNITYSDK_OFFSET(0xB38D820)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfitUnit_TypeDefinitionIndex = 58470;

	class AvatarOutfitUnit : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* _SlotTypes_k__BackingField; // 0x10
		::RPG::Client::AvatarOutfitSlot* _Slot_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_9CD95AD0A2E83C8D*>* _Details; // 0x20
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
