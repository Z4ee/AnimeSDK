#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IDisposable; }

#define R3_SERIALDISPOSABLECORE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C9ED40)
#define R3_SERIALDISPOSABLECORE_SET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x3C9ED30)

namespace R3
{
	inline static constexpr unsigned int SerialDisposableCore_TypeDefinitionIndex = 35280;

	struct alignas(8) SerialDisposableCore
	{
		::System::IDisposable* current; // 0x10

		::System::Void set_Disposable(::System::IDisposable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + R3_SERIALDISPOSABLECORE_SET_DISPOSABLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_SERIALDISPOSABLECORE_DISPOSE_OFFSET))(this);
		}
	};
}
