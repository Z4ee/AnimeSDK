#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class CanvasGroup; }

#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x104E3030)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_DESTROY_OFFSET UNITYSDK_OFFSET(0x104E39E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_GET_ANIMATIONFADEVALID_OFFSET UNITYSDK_OFFSET(0x104E3A70)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_HIDE_OFFSET UNITYSDK_OFFSET(0x104E2F00)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x104E2E10)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x104E3250)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x104E2F70)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_SHOW_OFFSET UNITYSDK_OFFSET(0x104E3AE0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_TICKFADEIN_OFFSET UNITYSDK_OFFSET(0x104E2B20)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x104E2E00)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListViewItem2_CanvasFadeInHandler_TypeDefinitionIndex = 48132;

	class LoopListViewItem2_CanvasFadeInHandler : public ::System::Object
	{
	public:
		::UnityEngine::AnimationClip* _animClip; // 0x10
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x18
		::UnityEngine::Animation* _animation; // 0x20
		::System::Single _fadeInLength; // 0x28
		::System::Boolean inAnim; // 0x2C
		::System::Single _fadeInBeginStamp; // 0x30
		::System::Single _fadeInEndStamp; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::CanvasGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_INIT_OFFSET))(this, a1);
		}

		::System::Boolean get_animationFadeValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_GET_ANIMATIONFADEVALID_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationClip* a3, ::UnityEngine::Animation* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationClip*, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_PLAYFADEIN_OFFSET))(this, a1, a2, a3, a4);
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
