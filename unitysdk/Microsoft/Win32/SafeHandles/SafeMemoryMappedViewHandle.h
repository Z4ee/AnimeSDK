#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/SafeBuffer.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDVIEWHANDLE_FLUSH_OFFSET UNITYSDK_OFFSET(0x19EB6830)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDVIEWHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x19EB6850)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDVIEWHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB67C0)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeMemoryMappedViewHandle_TypeDefinitionIndex = 3084;

	class SafeMemoryMappedViewHandle : public ::System::Runtime::InteropServices::SafeBuffer
	{
	public:
		::System::IntPtr mmap_handle; // 0x38

		::System::Void _ctor(::System::IntPtr mmap_handle, ::System::IntPtr base_address, ::System::Int64 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDVIEWHANDLE__CTOR_OFFSET))(this, mmap_handle, base_address, size);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDVIEWHANDLE_FLUSH_OFFSET))(this);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDVIEWHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
