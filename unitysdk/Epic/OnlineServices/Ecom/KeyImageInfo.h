#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/KeyImageInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x8E7E3C0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x8E7E360)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_URL_OFFSET UNITYSDK_OFFSET(0x8E7E380)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x8E7E3A0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8E7E860)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x8E7E3D0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_OFFSET UNITYSDK_OFFSET(0x8E7E3E0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x8E7E370)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_URL_OFFSET UNITYSDK_OFFSET(0x8E7E390)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x8E7E3B0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8E7E990)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int KeyImageInfo_TypeDefinitionIndex = 42192;

	class KeyImageInfo : public ::System::Object
	{
	public:
		::System::String* _Url_k__BackingField; // 0x10
		::System::String* _Type_k__BackingField; // 0x18
		::System::UInt32 _Width_k__BackingField; // 0x20
		::System::UInt32 _Height_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_Type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_TYPE_OFFSET))(this, value);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_URL_OFFSET))(this, value);
		}

		::System::UInt32 get_Width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_WIDTH_OFFSET))(this, value);
		}

		::System::UInt32 get_Height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_1_OFFSET))(this, other);
		}
	};
}
