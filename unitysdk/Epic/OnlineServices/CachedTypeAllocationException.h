#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AllocationException.h"

namespace System { class Type; }

#define EPIC_ONLINESERVICES_CACHEDTYPEALLOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CDCC0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int CachedTypeAllocationException_TypeDefinitionIndex = 35505;

	class CachedTypeAllocationException : public ::Epic::OnlineServices::AllocationException
	{
	public:
		::System::Void _ctor(::System::IntPtr address, ::System::Type* foundType, ::System::Type* expectedType)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CACHEDTYPEALLOCATIONEXCEPTION__CTOR_OFFSET))(this, address, foundType, expectedType);
		}
	};
}
