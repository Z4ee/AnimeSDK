#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ArrayPoolEventSource_BufferAllocatedReason.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"

#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERALLOCATED_OFFSET UNITYSDK_OFFSET(0x1E6BEB30)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRENTED_OFFSET UNITYSDK_OFFSET(0x1E6BE9E0)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRETURNED_OFFSET UNITYSDK_OFFSET(0x1E6BED40)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BEEE0)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BEEA0)

namespace System::Buffers
{
	inline static constexpr unsigned int ArrayPoolEventSource_TypeDefinitionIndex = 3748;

	class ArrayPoolEventSource : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Buffers::ArrayPoolEventSource** StaticGet_Log()
		{
			return (::System::Buffers::ArrayPoolEventSource**)Il2CppClass::FromTypeDefinitionIndex(ArrayPoolEventSource_TypeDefinitionIndex)->GetStaticField(0x60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE__CCTOR_OFFSET))();
		}

		::System::Void BufferRented(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRENTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BufferAllocated(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERALLOCATED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BufferReturned(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRETURNED_OFFSET))(this, a1, a2, a3);
		}
	};
}
