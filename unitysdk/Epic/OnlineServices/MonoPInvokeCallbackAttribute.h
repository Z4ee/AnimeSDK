#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define EPIC_ONLINESERVICES_MONOPINVOKECALLBACKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x86A44B0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int MonoPInvokeCallbackAttribute_TypeDefinitionIndex = 35250;

	class MonoPInvokeCallbackAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MONOPINVOKECALLBACKATTRIBUTE__CTOR_OFFSET))(this, type);
		}
	};
}
