#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingSoldierView_AnimationCurveEntry_TypeDefinitionIndex = 74022;

	struct alignas(8) ChenLingSoldierView_AnimationCurveEntry
	{
		::System::String* Key; // 0x10
		::UnityEngine::AnimationCurve* Curve; // 0x18
	};
}
