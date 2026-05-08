#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define POSTPROCESS_MKGLOW_EFFECT_KEYWORD__CTOR_OFFSET UNITYSDK_OFFSET(0x3493D0)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Effect_Keyword_TypeDefinitionIndex = 29654;

	struct alignas(8) Effect_Keyword
	{
		::System::String* name; // 0x10
		::System::Boolean enabled; // 0x18

		::System::Void _ctor(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_EFFECT_KEYWORD__CTOR_OFFSET))(this, name, enabled);
		}
	};
}
