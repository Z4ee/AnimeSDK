#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client
{
	inline static constexpr unsigned int FullBodyBipedChainBlender_1_TypeDefinitionIndex = 65547;

	template <typename T>
	class FullBodyBipedChainBlender_1 : public ::System::Object
	{
	public:
		::System::Nullable_1<T> StartValue; // 0x0
		::System::Single Time; // 0x0
		::System::Single Duration; // 0x0
		::UnityEngine::AnimationCurve* Curve; // 0x0
	};
}
