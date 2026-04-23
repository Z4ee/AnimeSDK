#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace System { class String; }

#define RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x9E99CB0)
#define RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_GET_TYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x9E99C30)
#define RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x9E99C50)
#define RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_SET_TYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x9E99C40)
#define RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E96F00)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int IconBillboardData_TypeDefinitionIndex = 69047;

	class IconBillboardData : public ::System::Object
	{
	public:
		::System::String* _TypeIconPath_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_TypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_GET_TYPEICONPATH_OFFSET))(this);
		}

		::System::Void set_TypeIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_SET_TYPEICONPATH_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ICONBILLBOARDDATA_CLONE_OFFSET))(this);
		}
	};
}
