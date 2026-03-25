#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class KeyImageInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3DA90)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1E140)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x3D740)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_URL_OFFSET UNITYSDK_OFFSET(0x3D8A0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x5E00)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3DA20)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x3DA00)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3DA10)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x3D7F0)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_URL_OFFSET UNITYSDK_OFFSET(0x3D950)
#define EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xBC50)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int KeyImageInfoInternal_TypeDefinitionIndex = 36367;

	struct alignas(8) KeyImageInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Type; // 0x18
		::System::IntPtr m_Url; // 0x20
		::System::UInt32 m_Width; // 0x28
		::System::UInt32 m_Height; // 0x2C

		::System::String* get_Type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_TYPE_OFFSET))(this, value);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_URL_OFFSET))(this, value);
		}

		::System::UInt32 get_Width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_WIDTH_OFFSET))(this, value);
		}

		::System::UInt32 get_Height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::KeyImageInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::KeyImageInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_KEYIMAGEINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
