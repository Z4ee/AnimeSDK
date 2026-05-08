#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_STRINGREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xDB84240)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int StringReference_TypeDefinitionIndex = 68897;

	class StringReference : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::String* Value; // 0x18

		::System::Void _ctor(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_STRINGREFERENCE__CTOR_OFFSET))(this, key, value);
		}
	};
}
