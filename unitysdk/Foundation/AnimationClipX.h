#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_ANIMATIONCLIPX_DRAWSAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x1DA2FF30)

namespace Foundation
{
	inline static constexpr unsigned int AnimationClipX_TypeDefinitionIndex = 7971;

	class AnimationClipX : public ::System::Object
	{
	public:
		static ::System::Void DrawSampleAnimation(::UnityEngine::AnimationClip* animationClip, ::UnityEngine::GameObject* target, ::UnityEngine::Color color, ::System::Int32 length, ::System::Int32 count)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::GameObject*, ::UnityEngine::Color, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ANIMATIONCLIPX_DRAWSAMPLEANIMATION_OFFSET))(animationClip, target, color, length, count);
		}
	};
}
