#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_DYNAMICBINDINGEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x8636650)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int DynamicBindingException_TypeDefinitionIndex = 35240;

	class DynamicBindingException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* bindingName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_DYNAMICBINDINGEXCEPTION__CTOR_OFFSET))(this, bindingName);
		}
	};
}
