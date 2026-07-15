#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace System { class String; }

#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x19FDF880)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_GET_TEXTIDNAME_OFFSET UNITYSDK_OFFSET(0x19FDF690)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_GET_TEXTSTRINGNAME_OFFSET UNITYSDK_OFFSET(0x19FDF6B0)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x19FDF6D0)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_SET_TEXTIDNAME_OFFSET UNITYSDK_OFFSET(0x19FDF6A0)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_SET_TEXTSTRINGNAME_OFFSET UNITYSDK_OFFSET(0x19FDF6C0)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FDB130)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__ISSTRINGVALID_OFFSET UNITYSDK_OFFSET(0x19FDF760)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__ISTEXTIDVALID_OFFSET UNITYSDK_OFFSET(0x19FDF7C0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int NameBillboardData_TypeDefinitionIndex = 71385;

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

		::System::Void set_TextIDName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_SET_TEXTIDNAME_OFFSET))(this, a1);
		}

		::System::String* get_TextStringName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_GET_TEXTSTRINGNAME_OFFSET))(this);
		}

		::System::Void set_TextStringName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_SET_TEXTSTRINGNAME_OFFSET))(this, a1);
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
