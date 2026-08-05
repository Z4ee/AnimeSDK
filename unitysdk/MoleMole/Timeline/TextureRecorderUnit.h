#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnit.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_TEXTURERECORDERUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB34160)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TextureRecorderUnit_TypeDefinitionIndex = 32813;

	class TextureRecorderUnit : public ::MoleMole::Timeline::RecorderUnit
	{
	public:
		::UnityEngine::Texture* Value; // 0x18

		::System::Void _ctor(::System::String* key, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURERECORDERUNIT__CTOR_OFFSET))(this, key, value);
		}
	};
}
