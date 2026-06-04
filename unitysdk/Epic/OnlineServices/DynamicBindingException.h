#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_DYNAMICBINDINGEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA2AD5B0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int DynamicBindingException_TypeDefinitionIndex = 41869;

	class DynamicBindingException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_DYNAMICBINDINGEXCEPTION__CTOR_OFFSET))(this, a1);
		}
	};
}
