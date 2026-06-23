#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_COMMON_ISOPERATIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B7AB450)
#define EPIC_ONLINESERVICES_COMMON_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B7AB690)
#define EPIC_ONLINESERVICES_COMMON_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1B7AB990)
#define EPIC_ONLINESERVICES_COMMON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B7AB560)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Common_TypeDefinitionIndex = 34861;

	class Common : public ::System::Object
	{
	public:
		// static const ::System::UInt64 InvalidNotificationid = 0x0; // 0x0
		// static const ::System::Int32 PagequeryApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PagequeryMaxcountDefault = 0xA; // 0x0
		// static const ::System::Int32 PagequeryMaxcountMaximum = 0x64; // 0x0
		// static const ::System::Int32 PaginationApiLatest = 0x1; // 0x0

		static ::System::Boolean IsOperationComplete(::Epic::OnlineServices::Result result)
		{
			return ((::System::Boolean(*)(::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_COMMON_ISOPERATIONCOMPLETE_OFFSET))(result);
		}

		static ::System::String* ToString(::Epic::OnlineServices::Result result)
		{
			return ((::System::String*(*)(::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_COMMON_TOSTRING_OFFSET))(result);
		}

		static ::Epic::OnlineServices::Result ToString_1(::Il2CppArray<::System::Byte>* byteArray, ::System::String*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::Il2CppArray<::System::Byte>*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_COMMON_TOSTRING_1_OFFSET))(byteArray, outBuffer);
		}

		static ::System::String* ToString_2(::Il2CppArray<::System::Byte>* byteArray)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_COMMON_TOSTRING_2_OFFSET))(byteArray);
		}
	};
}
