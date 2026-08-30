#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Text; }

#define SHOWFRAMERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E55C0B0)

inline static constexpr unsigned int ShowFrameRate_TypeDefinitionIndex = 42298;

class ShowFrameRate : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::Text* text; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWFRAMERATE__CTOR_OFFSET))(this);
	}
};
