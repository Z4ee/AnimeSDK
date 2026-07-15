#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AllocationException.h"

namespace System { class Type; }

#define EPIC_ONLINESERVICES_EXTERNALALLOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAB4B0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int ExternalAllocationException_TypeDefinitionIndex = 42727;

	class ExternalAllocationException : public ::Epic::OnlineServices::AllocationException
	{
	public:
		::System::Void _ctor(::System::IntPtr a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EXTERNALALLOCATIONEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
