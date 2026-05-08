#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_DYNAMICBINDINGEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2BA480)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int DynamicBindingException_TypeDefinitionIndex = 33285;

	class DynamicBindingException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* bindingName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_DYNAMICBINDINGEXCEPTION__CTOR_OFFSET))(this, bindingName);
		}
	};
}
