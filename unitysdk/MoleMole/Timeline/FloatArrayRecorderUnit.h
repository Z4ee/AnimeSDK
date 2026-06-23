#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnit.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_FLOATARRAYRECORDERUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E866490)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FloatArrayRecorderUnit_TypeDefinitionIndex = 32186;

	class FloatArrayRecorderUnit : public ::MoleMole::Timeline::RecorderUnit
	{
	public:
		::Il2CppArray<::System::Single>* Value; // 0x18

		::System::Void _ctor(::System::String* key, ::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FLOATARRAYRECORDERUNIT__CTOR_OFFSET))(this, key, value);
		}
	};
}
