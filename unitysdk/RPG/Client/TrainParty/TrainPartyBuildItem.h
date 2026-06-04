#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_CREATEDYNAMICITEM_OFFSET UNITYSDK_OFFSET(0xCA98DF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_CREATESTATICITEM_OFFSET UNITYSDK_OFFSET(0xCA98D00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCA98EE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xCA98EA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCA98EC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCA98EF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xCA98EB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_NAME_OFFSET UNITYSDK_OFFSET(0xCA98ED0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCA98CF0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildItem_TypeDefinitionIndex = 69391;

	class TrainPartyBuildItem : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::TrainParty::TrainPartyBuildItem* CreateStaticItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_CREATESTATICITEM_OFFSET))(a1);
		}

		static ::RPG::Client::TrainParty::TrainPartyBuildItem* CreateDynamicItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_CREATEDYNAMICITEM_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_ICONPATH_OFFSET))(this, a1);
		}
	};
}
