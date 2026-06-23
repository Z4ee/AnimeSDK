#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnit.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_VECTOR4RECORDERUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E757940)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int Vector4RecorderUnit_TypeDefinitionIndex = 32184;

	class Vector4RecorderUnit : public ::MoleMole::Timeline::RecorderUnit
	{
	public:
		::UnityEngine::Vector4 Value; // 0x18

		::System::Void _ctor(::System::String* key, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VECTOR4RECORDERUNIT__CTOR_OFFSET))(this, key, value);
		}
	};
}
