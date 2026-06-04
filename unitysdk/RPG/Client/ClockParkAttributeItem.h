#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xB6D41E0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB6D45D0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB6D45B0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB6D4590)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB6D45E0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB6D45C0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xB6D45A0)
#define RPG_CLIENT_CLOCKPARKATTRIBUTEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D4580)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkAttributeItem_TypeDefinitionIndex = 57483;

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

		static ::RPG::Client::ClockParkAttributeItem* Create(::RPG::Client::ClockParkAttributeType a1, ::System::UInt32 a2, ::RPG::Client::TextID a3, ::System::String* a4)
		{
			return ((::RPG::Client::ClockParkAttributeItem*(*)(::RPG::Client::ClockParkAttributeType, ::System::UInt32, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::RPG::Client::ClockParkAttributeType get_Type()
		{
			return ((::RPG::Client::ClockParkAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::ClockParkAttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKATTRIBUTEITEM_SET_ICONPATH_OFFSET))(this, a1);
		}
	};
}
