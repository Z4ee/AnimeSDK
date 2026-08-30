#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DFE2D50)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONS_GET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1DFE2D70)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DFE2D60)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONS_SET_PARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1DFE2D80)
#define EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE2D90)

namespace Epic::OnlineServices::KWS
{
	inline static constexpr unsigned int UpdateParentEmailOptions_TypeDefinitionIndex = 45940;

	class UpdateParentEmailOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _ParentEmail_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_ParentEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONS_GET_PARENTEMAIL_OFFSET))(this);
		}

		::System::Void set_ParentEmail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_KWS_UPDATEPARENTEMAILOPTIONS_SET_PARENTEMAIL_OFFSET))(this, a1);
		}
	};
}
