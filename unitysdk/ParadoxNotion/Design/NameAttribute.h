#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PARADOXNOTION_DESIGN_NAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2AC330)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int NameAttribute_TypeDefinitionIndex = 27615;

	class NameAttribute : public ::System::Attribute
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 priority; // 0x18

		::System::Void _ctor(::System::String* name, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_NAMEATTRIBUTE__CTOR_OFFSET))(this, name, priority);
		}
	};
}
