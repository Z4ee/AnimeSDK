#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MESSAGEPACK_MONOPROTECTIONDISPOSAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5DA00)
#define MESSAGEPACK_MONOPROTECTIONDISPOSAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D9C0)

namespace MessagePack
{
	inline static constexpr unsigned int MonoProtectionDisposal_TypeDefinitionIndex = 30728;

	struct alignas(8) MonoProtectionDisposal
	{
		::System::Object* lockObject; // 0x10

		::System::Void _ctor(::System::Object* lockObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MONOPROTECTIONDISPOSAL__CTOR_OFFSET))(this, lockObject);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MONOPROTECTIONDISPOSAL_DISPOSE_OFFSET))(this);
		}
	};
}
