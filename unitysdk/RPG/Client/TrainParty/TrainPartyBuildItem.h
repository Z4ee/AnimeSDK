#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_CREATEDYNAMICITEM_OFFSET UNITYSDK_OFFSET(0xB33E170)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_CREATESTATICITEM_OFFSET UNITYSDK_OFFSET(0xB33E080)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB33E260)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xB33E220)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB33E240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB33E270)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xB33E230)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB33E250)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB33E070)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildItem_TypeDefinitionIndex = 68579;

	class TrainPartyBuildItem : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::TrainParty::TrainPartyBuildItem* CreateStaticItem(::System::UInt32 staticID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_CREATESTATICITEM_OFFSET))(staticID);
		}

		static ::RPG::Client::TrainParty::TrainPartyBuildItem* CreateDynamicItem(::System::UInt32 dynamicID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_CREATEDYNAMICITEM_OFFSET))(dynamicID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDITEM_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
