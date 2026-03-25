#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeGPtrArrayHandle.h"
#include "unitysdk/System/ValueType.h"

#define MONO_SAFEGPTRARRAYHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20CB930)
#define MONO_SAFEGPTRARRAYHANDLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x20CB830)
#define MONO_SAFEGPTRARRAYHANDLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x20CB810)
#define MONO_SAFEGPTRARRAYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace Mono
{
	inline static constexpr unsigned int SafeGPtrArrayHandle_TypeDefinitionIndex = 21;

	struct alignas(8) SafeGPtrArrayHandle
	{
		::Mono::RuntimeGPtrArrayHandle handle; // 0x10

		::System::Void _ctor(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SAFEGPTRARRAYHANDLE__CTOR_OFFSET))(this, ptr);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFEGPTRARRAYHANDLE_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFEGPTRARRAYHANDLE_GET_LENGTH_OFFSET))(this);
		}

		::System::IntPtr get_Item(::System::Int32 i)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SAFEGPTRARRAYHANDLE_GET_ITEM_OFFSET))(this, i);
		}
	};
}
