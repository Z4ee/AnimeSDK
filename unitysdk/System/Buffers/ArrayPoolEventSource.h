#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ArrayPoolEventSource_BufferAllocatedReason.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"

#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERALLOCATED_OFFSET UNITYSDK_OFFSET(0x19EB4F90)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRENTED_OFFSET UNITYSDK_OFFSET(0x19EB4E40)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRETURNED_OFFSET UNITYSDK_OFFSET(0x19EB51A0)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EB5210)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB51D0)

namespace System::Buffers
{
	inline static constexpr unsigned int ArrayPoolEventSource_TypeDefinitionIndex = 4769;

	class ArrayPoolEventSource : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Buffers::ArrayPoolEventSource** StaticGet_Log()
		{
			return (::System::Buffers::ArrayPoolEventSource**)Il2CppClass::FromTypeDefinitionIndex(ArrayPoolEventSource_TypeDefinitionIndex)->GetStaticField(0xE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE__CCTOR_OFFSET))();
		}

		::System::Void BufferRented(::System::Int32 bufferId, ::System::Int32 bufferSize, ::System::Int32 poolId, ::System::Int32 bucketId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRENTED_OFFSET))(this, bufferId, bufferSize, poolId, bucketId);
		}

		::System::Void BufferAllocated(::System::Int32 bufferId, ::System::Int32 bufferSize, ::System::Int32 poolId, ::System::Int32 bucketId, ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERALLOCATED_OFFSET))(this, bufferId, bufferSize, poolId, bucketId, reason);
		}

		::System::Void BufferReturned(::System::Int32 bufferId, ::System::Int32 bufferSize, ::System::Int32 poolId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRETURNED_OFFSET))(this, bufferId, bufferSize, poolId);
		}
	};
}
