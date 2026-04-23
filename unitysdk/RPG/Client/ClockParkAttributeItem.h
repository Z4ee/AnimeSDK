#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA095BE0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA095ED0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA095EB0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA095E90)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA095EE0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA095EC0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA095EA0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA095E80)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkAttributeItem_TypeDefinitionIndex = 56699;

	class ClockParkAttributeItem : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::ClockParkAttributeType _Type_k__BackingField; // 0x18
		::System::UInt32 Value; // 0x1C
		::RPG::Client::TextID _Name_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ClockParkAttributeItem* Create(::RPG::Client::ClockParkAttributeType type, ::System::UInt32 value, ::RPG::Client::TextID name, ::System::String* iconPath)
		{
			return ((::RPG::Client::ClockParkAttributeItem*(*)(::RPG::Client::ClockParkAttributeType, ::System::UInt32, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_CREATE_OFFSET))(type, value, name, iconPath);
		}

		::RPG::Client::ClockParkAttributeType get_Type()
		{
			return ((::RPG::Client::ClockParkAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::ClockParkAttributeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_TYPE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
