#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class CanvasGroup; }

#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_CLEAR_OFFSET UNITYSDK_OFFSET(0xB964380)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_DESTROY_OFFSET UNITYSDK_OFFSET(0xB98D030)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_GET_ANIMATIONFADEVALID_OFFSET UNITYSDK_OFFSET(0xB98D0D0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_HIDE_OFFSET UNITYSDK_OFFSET(0xB9641B0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0xB963E80)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xB963F50)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xB963B80)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_SHOW_OFFSET UNITYSDK_OFFSET(0xB964280)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_TICKFADEIN_OFFSET UNITYSDK_OFFSET(0xB9636F0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB963E70)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListViewItem2_CanvasFadeInHandler_TypeDefinitionIndex = 44414;

	class LoopListViewItem2_CanvasFadeInHandler : public ::System::Object
	{
	public:
		::UnityEngine::Animation* _animation; // 0x10
		::UnityEngine::AnimationClip* _animClip; // 0x18
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x20
		::System::Single _fadeInLength; // 0x28
		::System::Single _fadeInBeginStamp; // 0x2C
		::System::Single _fadeInEndStamp; // 0x30
		::System::Boolean inAnim; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::CanvasGroup* canvasGroup)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_INIT_OFFSET))(this, canvasGroup);
		}

		::System::Boolean get_animationFadeValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_GET_ANIMATIONFADEVALID_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Single beginStamp, ::System::Single length, ::UnityEngine::AnimationClip* clip, ::UnityEngine::Animation* animation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationClip*, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_PLAYFADEIN_OFFSET))(this, beginStamp, length, clip, animation);
		}

		::System::Void TickFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_TICKFADEIN_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_HIDE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_SHOW_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_CLEAR_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_DESTROY_OFFSET))(this);
		}
	};
}
