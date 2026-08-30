#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeStructs_GPtrArray.h"
#include "unitysdk/System/ValueType.h"

#define MONO_RUNTIMEGPTRARRAYHANDLE_DESTROYANDFREE_OFFSET UNITYSDK_OFFSET(0x1BB60EF0)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3B5FD00)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x3B5FCE0)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GPTRARRAYFREE_OFFSET UNITYSDK_OFFSET(0x1BB60EB0)
#define MONO_RUNTIMEGPTRARRAYHANDLE_LOOKUP_OFFSET UNITYSDK_OFFSET(0x3B5FD00)
#define MONO_RUNTIMEGPTRARRAYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC610)

namespace Mono
{
	inline static constexpr unsigned int RuntimeGPtrArrayHandle_TypeDefinitionIndex = 10;

	struct alignas(8) RuntimeGPtrArrayHandle
	{
		::Mono::RuntimeStructs_GPtrArray* value; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GET_LENGTH_OFFSET))(this);
		}

		::System::IntPtr get_Item(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::IntPtr Lookup(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_LOOKUP_OFFSET))(this, a1);
		}

		static ::System::Void GPtrArrayFree(::Mono::RuntimeStructs_GPtrArray* a1)
		{
			return ((::System::Void(*)(::Mono::RuntimeStructs_GPtrArray*))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GPTRARRAYFREE_OFFSET))(a1);
		}

		static ::System::Void DestroyAndFree(::Mono::RuntimeGPtrArrayHandle& a1)
		{
			return ((::System::Void(*)(::Mono::RuntimeGPtrArrayHandle&))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_DESTROYANDFREE_OFFSET))(a1);
		}
	};
}
