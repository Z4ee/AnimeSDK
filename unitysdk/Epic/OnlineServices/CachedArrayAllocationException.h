#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AllocationException.h"

#define EPIC_ONLINESERVICES_CACHEDARRAYALLOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB339F80)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int CachedArrayAllocationException_TypeDefinitionIndex = 44911;

	class CachedArrayAllocationException : public ::Epic::OnlineServices::AllocationException
	{
	public:
		::System::Void _ctor(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CACHEDARRAYALLOCATIONEXCEPTION__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
