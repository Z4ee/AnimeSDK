#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::GameCore { class PlayerOutfitSlotRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAROUTFITSLOT_ADDUNIT_OFFSET UNITYSDK_OFFSET(0x9DB16F0)
#define RPG_CLIENT_AVATAROUTFITSLOT_CHECKISEMPTY_OFFSET UNITYSDK_OFFSET(0x9DB1760)
#define RPG_CLIENT_AVATAROUTFITSLOT_CREATE_OFFSET UNITYSDK_OFFSET(0x9DB1620)
#define RPG_CLIENT_AVATAROUTFITSLOT_FILLUNITSTO_OFFSET UNITYSDK_OFFSET(0x9DB0800)
#define RPG_CLIENT_AVATAROUTFITSLOT_GETDEFAULTUNIT_OFFSET UNITYSDK_OFFSET(0x9DB02B0)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_DEFAULTITEMID_OFFSET UNITYSDK_OFFSET(0x9DB15C0)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9DB1580)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DB1530)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0x9DB15E0)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_LIMITBASETYPE_OFFSET UNITYSDK_OFFSET(0x9DB15A0)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9DB1550)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9DAEBE0)
#define RPG_CLIENT_AVATAROUTFITSLOT_GET_VIRTUALCAMERAPATH_OFFSET UNITYSDK_OFFSET(0x9DB1600)
#define RPG_CLIENT_AVATAROUTFITSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB16B0)
#define RPG_CLIENT_AVATAROUTFITSLOT__GETDEFAULTUNIT_B__21_0_OFFSET UNITYSDK_OFFSET(0x9DB18A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfitSlot_TypeDefinitionIndex = 57679;

	class AvatarOutfitSlot : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitUnit*>* _Units; // 0x10
		::RPG::GameCore::PlayerOutfitSlotRow* _Meta; // 0x18

		::System::Void _ctor(::RPG::GameCore::PlayerOutfitSlotRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT__CTOR_OFFSET))(this, meta);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::PlayerOutfitSlotType get_Type()
		{
			return ((::RPG::GameCore::PlayerOutfitSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType get_LimitBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_LIMITBASETYPE_OFFSET))(this);
		}

		::System::UInt32 get_DefaultItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_DEFAULTITEMID_OFFSET))(this);
		}

		::System::UInt32 get_IntroduceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_INTRODUCEID_OFFSET))(this);
		}

		::System::String* get_VirtualCameraPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GET_VIRTUALCAMERAPATH_OFFSET))(this);
		}

		static ::RPG::Client::AvatarOutfitSlot* Create(::RPG::GameCore::PlayerOutfitSlotRow* meta)
		{
			return ((::RPG::Client::AvatarOutfitSlot*(*)(::RPG::GameCore::PlayerOutfitSlotRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_CREATE_OFFSET))(meta);
		}

		::System::Void AddUnit(::RPG::Client::AvatarOutfitUnit* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_ADDUNIT_OFFSET))(this, item);
		}

		::RPG::Client::AvatarOutfitUnit* GetDefaultUnit()
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_GETDEFAULTUNIT_OFFSET))(this);
		}

		::System::Void FillUnitsTo(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* buffer, ::System::Boolean withDefault)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_FILLUNITSTO_OFFSET))(this, buffer, withDefault);
		}

		::System::Boolean CheckIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT_CHECKISEMPTY_OFFSET))(this);
		}

		::System::Boolean _GetDefaultUnit_b__21_0(::RPG::Client::AvatarOutfitUnit* unit)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFITSLOT__GETDEFAULTUNIT_B__21_0_OFFSET))(this, unit);
		}
	};
}
