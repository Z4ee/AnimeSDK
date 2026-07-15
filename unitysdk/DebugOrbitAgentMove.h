#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DebugOrbitAgentMove_ScreenAreaMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DEBUGORBITAGENTMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x14B8A490)

inline static constexpr unsigned int DebugOrbitAgentMove_TypeDefinitionIndex = 45318;

class DebugOrbitAgentMove : public ::UnityEngine::MonoBehaviour
{
public:
	::DebugOrbitAgentMove_ScreenAreaMode Mode; // 0x18
	::UnityEngine::Vector2 CenterOffsetRatio; // 0x1C
	::System::Single WidthRatio; // 0x24
	::System::Single HeightRatio; // 0x28
	::System::Boolean ShowDebugGUI; // 0x2C
	::UnityEngine::Color AreaColor; // 0x30
	::UnityEngine::Color CenterColor; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGORBITAGENTMOVE__CTOR_OFFSET))(this);
	}
};
