#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class CanvasGroup; }

#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x10515D60)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_DESTROY_OFFSET UNITYSDK_OFFSET(0x10516E80)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_GET_ANIMATIONFADEVALID_OFFSET UNITYSDK_OFFSET(0x10516F10)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_HIDE_OFFSET UNITYSDK_OFFSET(0x10515920)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x10515830)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x10515F80)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x10515C40)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_SHOW_OFFSET UNITYSDK_OFFSET(0x10516F80)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER_TICKFADEIN_OFFSET UNITYSDK_OFFSET(0x10515540)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANVASFADEINHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10515820)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListViewItem2_CanvasFadeInHandler_TypeDefinitionIndex = 45878;

	class LoopListViewItem2_CanvasFadeInHandler : public ::System::Object
	{
	public:
		::UnityEngine::AnimationClip* _animClip; // 0x10
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x18
		::UnityEngine::Animation* _animation; // 0x20
		::System::Single _fadeInEndStamp; // 0x28
		::System::Single _fadeInBeginStamp; // 0x2C
		::System::Single _fadeInLength; // 0x30
		::System::Boolean inAnim; // 0x34

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
