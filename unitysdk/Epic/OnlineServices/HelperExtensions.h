#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_HELPEREXTENSIONS_ISOPERATIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BFAAC80)
#define EPIC_ONLINESERVICES_HELPEREXTENSIONS_TOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1BFAAC90)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int HelperExtensions_TypeDefinitionIndex = 34854;

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
