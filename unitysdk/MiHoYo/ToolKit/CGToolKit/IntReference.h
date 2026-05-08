#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_INTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xDB83F10)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int IntReference_TypeDefinitionIndex = 63887;

	class IntReference : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::UInt32 Value; // 0x18

		::System::Void _ctor(::System::String* key, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_INTREFERENCE__CTOR_OFFSET))(this, key, value);
		}
	};
}
