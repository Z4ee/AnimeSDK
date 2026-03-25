#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PRODUCTUSERID_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x86D8900)
#define EPIC_ONLINESERVICES_PRODUCTUSERID_ISVALID_OFFSET UNITYSDK_OFFSET(0x86D8AB0)
#define EPIC_ONLINESERVICES_PRODUCTUSERID_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x86D8E00)
#define EPIC_ONLINESERVICES_PRODUCTUSERID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x86D8BD0)
#define EPIC_ONLINESERVICES_PRODUCTUSERID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x86D88F0)
#define EPIC_ONLINESERVICES_PRODUCTUSERID__CTOR_OFFSET UNITYSDK_OFFSET(0x86D88E0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int ProductUserId_TypeDefinitionIndex = 35264;

	class ProductUserId : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 ProductuseridMaxLength = 0x20; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRODUCTUSERID__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRODUCTUSERID__CTOR_1_OFFSET))(this, innerHandle);
		}

		static ::Epic::OnlineServices::ProductUserId* FromString(::System::String* productUserIdString)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRODUCTUSERID_FROMSTRING_OFFSET))(productUserIdString);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRODUCTUSERID_ISVALID_OFFSET))(this);
		}

		::Epic::OnlineServices::Result ToString(::System::String*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRODUCTUSERID_TOSTRING_OFFSET))(this, outBuffer);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRODUCTUSERID_TOSTRING_1_OFFSET))(this);
		}
	};
}
