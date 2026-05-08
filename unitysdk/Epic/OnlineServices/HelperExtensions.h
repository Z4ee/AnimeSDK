#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_HELPEREXTENSIONS_ISOPERATIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x19F9EA80)
#define EPIC_ONLINESERVICES_HELPEREXTENSIONS_TOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x19F9EA90)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int HelperExtensions_TypeDefinitionIndex = 33291;

	class HelperExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsOperationComplete(::Epic::OnlineServices::Result result)
		{
			return ((::System::Boolean(*)(::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPEREXTENSIONS_ISOPERATIONCOMPLETE_OFFSET))(result);
		}

		static ::System::String* ToHexString(::Il2CppArray<::System::Byte>* byteArray)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPEREXTENSIONS_TOHEXSTRING_OFFSET))(byteArray);
		}
	};
}
