#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MONO_SECURITY_URI_URISCHEME__CTOR_OFFSET UNITYSDK_OFFSET(0x82E370)

namespace Mono::Security
{
	inline static constexpr unsigned int Uri_UriScheme_TypeDefinitionIndex = 53;

	struct alignas(8) Uri_UriScheme
	{
		::System::String* scheme; // 0x10
		::System::String* delimiter; // 0x18
		::System::Int32 defaultPort; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_URISCHEME__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
