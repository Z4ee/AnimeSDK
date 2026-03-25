#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CUSTOMRP_RESOLVEDUMP_TEX__CTOR_OFFSET UNITYSDK_OFFSET(0x7F600)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ResolveDump_Tex_TypeDefinitionIndex = 29366;

	struct alignas(8) ResolveDump_Tex
	{
		::System::String* name; // 0x10
		::System::Single size; // 0x18

		::System::Void _ctor(::System::String* n, ::System::Single s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP_TEX__CTOR_OFFSET))(this, n, s);
		}
	};
}
