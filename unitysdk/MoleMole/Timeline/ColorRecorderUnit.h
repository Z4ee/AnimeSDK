#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnit.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_COLORRECORDERUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3DED60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorRecorderUnit_TypeDefinitionIndex = 30641;

	class ColorRecorderUnit : public ::MoleMole::Timeline::RecorderUnit
	{
	public:
		::UnityEngine::Color Value; // 0x18

		::System::Void _ctor(::System::String* key, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORRECORDERUNIT__CTOR_OFFSET))(this, key, value);
		}
	};
}
