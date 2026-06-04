#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define AOT_MONOPINVOKECALLBACKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B26E920)

namespace AOT
{
	inline static constexpr unsigned int MonoPInvokeCallbackAttribute_TypeDefinitionIndex = 3903;

	class MonoPInvokeCallbackAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + AOT_MONOPINVOKECALLBACKATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
