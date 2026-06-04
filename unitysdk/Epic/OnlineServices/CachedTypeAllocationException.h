#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AllocationException.h"

namespace System { class Type; }

#define EPIC_ONLINESERVICES_CACHEDTYPEALLOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA297100)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int CachedTypeAllocationException_TypeDefinitionIndex = 41867;

	class CachedTypeAllocationException : public ::Epic::OnlineServices::AllocationException
	{
	public:
		::System::Void _ctor(::System::IntPtr a1, ::System::Type* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CACHEDTYPEALLOCATIONEXCEPTION__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
