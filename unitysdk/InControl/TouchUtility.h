#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchControlAnchor.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define INCONTROL_TOUCHUTILITY_ANCHORTOVIEWPOINT_OFFSET UNITYSDK_OFFSET(0xC0831B0)
#define INCONTROL_TOUCHUTILITY_ROUNDVECTOR_OFFSET UNITYSDK_OFFSET(0xC0831D0)

namespace InControl
{
	inline static constexpr unsigned int TouchUtility_TypeDefinitionIndex = 39599;

	class TouchUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 AnchorToViewPoint(::InControl::TouchControlAnchor a1)
		{
			return ((::UnityEngine::Vector2(*)(::InControl::TouchControlAnchor))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHUTILITY_ANCHORTOVIEWPOINT_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 RoundVector(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHUTILITY_ROUNDVECTOR_OFFSET))(a1);
		}
	};
}
