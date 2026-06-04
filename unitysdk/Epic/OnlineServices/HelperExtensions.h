#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_HELPEREXTENSIONS_ISOPERATIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA2CDC10)
#define EPIC_ONLINESERVICES_HELPEREXTENSIONS_TOHEXSTRING_OFFSET UNITYSDK_OFFSET(0xA2CDC20)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int HelperExtensions_TypeDefinitionIndex = 41875;

	class HelperExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsOperationComplete(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Boolean(*)(::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPEREXTENSIONS_ISOPERATIONCOMPLETE_OFFSET))(a1);
		}

		static ::System::String* ToHexString(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPEREXTENSIONS_TOHEXSTRING_OFFSET))(a1);
		}
	};
}
