#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeStructs_GPtrArray.h"
#include "unitysdk/System/ValueType.h"

#define MONO_RUNTIMEGPTRARRAYHANDLE_DESTROYANDFREE_OFFSET UNITYSDK_OFFSET(0x1617AB70)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x20CB830)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x20CB810)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GPTRARRAYFREE_OFFSET UNITYSDK_OFFSET(0x1617AB30)
#define MONO_RUNTIMEGPTRARRAYHANDLE_LOOKUP_OFFSET UNITYSDK_OFFSET(0x20CB830)
#define MONO_RUNTIMEGPTRARRAYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace Mono
{
	inline static constexpr unsigned int RuntimeGPtrArrayHandle_TypeDefinitionIndex = 10;

	struct alignas(8) RuntimeGPtrArrayHandle
	{
		::Mono::RuntimeStructs_GPtrArray* value; // 0x10

		::System::Void _ctor(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE__CTOR_OFFSET))(this, ptr);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GET_LENGTH_OFFSET))(this);
		}

		::System::IntPtr get_Item(::System::Int32 i)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GET_ITEM_OFFSET))(this, i);
		}

		::System::IntPtr Lookup(::System::Int32 i)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_LOOKUP_OFFSET))(this, i);
		}

		static ::System::Void GPtrArrayFree(::Mono::RuntimeStructs_GPtrArray* value)
		{
			return ((::System::Void(*)(::Mono::RuntimeStructs_GPtrArray*))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GPTRARRAYFREE_OFFSET))(value);
		}

		static ::System::Void DestroyAndFree(::Mono::RuntimeGPtrArrayHandle& h)
		{
			return ((::System::Void(*)(::Mono::RuntimeGPtrArrayHandle&))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_DESTROYANDFREE_OFFSET))(h);
		}
	};
}
