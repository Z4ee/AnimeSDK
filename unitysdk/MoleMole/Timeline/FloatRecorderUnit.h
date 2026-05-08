#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnit.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_FLOATRECORDERUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C16BFA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FloatRecorderUnit_TypeDefinitionIndex = 30639;

	class FloatRecorderUnit : public ::MoleMole::Timeline::RecorderUnit
	{
	public:
		::System::Single Value; // 0x18

		::System::Void _ctor(::System::String* key, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FLOATRECORDERUNIT__CTOR_OFFSET))(this, key, value);
		}
	};
}
