#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BUBBLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF97D720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BubbleConfig_TypeDefinitionIndex = 43418;

	class ConfigHollowChessboard_BubbleConfig : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* NumberTimeCurve; // 0x10
		::System::Single BubbleTotalTime; // 0x18
		::System::Int32 NumberThreshold; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BUBBLECONFIG__CTOR_OFFSET))(this);
		}
	};
}
