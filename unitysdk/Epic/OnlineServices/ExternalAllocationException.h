#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AllocationException.h"

namespace System { class Type; }

#define EPIC_ONLINESERVICES_EXTERNALALLOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8B1F0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int ExternalAllocationException_TypeDefinitionIndex = 34845;

	class ExternalAllocationException : public ::Epic::OnlineServices::AllocationException
	{
	public:
		::System::Void _ctor(::System::IntPtr address, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EXTERNALALLOCATIONEXCEPTION__CTOR_OFFSET))(this, address, type);
		}
	};
}
