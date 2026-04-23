#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace System { class String; }

#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x9E9B310)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_GET_TEXTIDNAME_OFFSET UNITYSDK_OFFSET(0x9E9B120)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_GET_TEXTSTRINGNAME_OFFSET UNITYSDK_OFFSET(0x9E9B140)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x9E9B160)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_SET_TEXTIDNAME_OFFSET UNITYSDK_OFFSET(0x9E9B130)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_SET_TEXTSTRINGNAME_OFFSET UNITYSDK_OFFSET(0x9E9B150)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E972B0)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__ISSTRINGVALID_OFFSET UNITYSDK_OFFSET(0x9E9B1F0)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__ISTEXTIDVALID_OFFSET UNITYSDK_OFFSET(0x9E9B250)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int NameBillboardData_TypeDefinitionIndex = 69050;

	class NameBillboardData : public ::System::Object
	{
	public:
		::System::String* _TextStringName_k__BackingField; // 0x10
		::RPG::Client::TextID _TextIDName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_TextIDName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_GET_TEXTIDNAME_OFFSET))(this);
		}

		::System::Void set_TextIDName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_SET_TEXTIDNAME_OFFSET))(this, value);
		}

		::System::String* get_TextStringName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_GET_TEXTSTRINGNAME_OFFSET))(this);
		}

		::System::Void set_TextStringName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_SET_TEXTSTRINGNAME_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_CLONE_OFFSET))(this);
		}

		::System::Boolean _IsStringValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__ISSTRINGVALID_OFFSET))(this);
		}

		::System::Boolean _IsTextIDValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__ISTEXTIDVALID_OFFSET))(this);
		}
	};
}
