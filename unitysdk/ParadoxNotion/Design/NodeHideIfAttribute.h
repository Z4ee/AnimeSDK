#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PARADOXNOTION_DESIGN_NODEHIDEIFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBC520)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int NodeHideIfAttribute_TypeDefinitionIndex = 28173;

	class NodeHideIfAttribute : public ::System::Attribute
	{
	public:
		::System::String* condition; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_NODEHIDEIFATTRIBUTE__CTOR_OFFSET))(this, name);
		}
	};
}
