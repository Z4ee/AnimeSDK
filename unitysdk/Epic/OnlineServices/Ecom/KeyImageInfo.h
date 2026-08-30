#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/KeyImageInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xB362B70)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB362B10)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_URL_OFFSET UNITYSDK_OFFSET(0xB362B30)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xB362B50)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB363010)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xB362B80)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_OFFSET UNITYSDK_OFFSET(0xB362B90)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xB362B20)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_URL_OFFSET UNITYSDK_OFFSET(0xB362B40)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xB362B60)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB363140)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int KeyImageInfo_TypeDefinitionIndex = 46038;

	class KeyImageInfo : public ::System::Object
	{
	public:
		::System::String* _Type_k__BackingField; // 0x10
		::System::String* _Url_k__BackingField; // 0x18
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

		::System::Void set_Type(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_TYPE_OFFSET))(this, a1);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_URL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::UInt32 get_Height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
