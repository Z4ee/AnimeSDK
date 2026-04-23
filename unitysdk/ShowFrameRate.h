#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Text; }

#define SHOWFRAMERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D66B10)

inline static constexpr unsigned int ShowFrameRate_TypeDefinitionIndex = 39700;

class ShowFrameRate : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::Text* text; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWFRAMERATE__CTOR_OFFSET))(this);
	}
};
