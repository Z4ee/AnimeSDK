#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AllocationException.h"

#define EPIC_ONLINESERVICES_CACHEDARRAYALLOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x8E3D7A0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int CachedArrayAllocationException_TypeDefinitionIndex = 41065;

	class CachedArrayAllocationException : public ::Epic::OnlineServices::AllocationException
	{
	public:
		::System::Void _ctor(::System::IntPtr address, ::System::Int32 foundLength, ::System::Int32 expectedLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CACHEDARRAYALLOCATIONEXCEPTION__CTOR_OFFSET))(this, address, foundLength, expectedLength);
		}
	};
}
