#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
class MonoUITableScrollV2_ConfigScrollViewFade;
namespace System::Threading { class CancellationTokenSource; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET_ISPLAYINGFADEIN_OFFSET UNITYSDK_OFFSET(0x11BFFE50)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET_ISPLAYINGFADEOUT_OFFSET UNITYSDK_OFFSET(0x11BFFE30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET__FADEINCONFIG_OFFSET UNITYSDK_OFFSET(0x11BFFE70)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_PLAYFADEINANIMATIONINNER_OFFSET UNITYSDK_OFFSET(0x11BFFF40)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x11BFFE90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SETFADEINANIMATIONTOFIRSTFRAMEINNER_OFFSET UNITYSDK_OFFSET(0x11C00010)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SETFADEINANIMATIONTOFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x11BFFFC0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SET_ISPLAYINGFADEIN_OFFSET UNITYSDK_OFFSET(0x11BFFE60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SET_ISPLAYINGFADEOUT_OFFSET UNITYSDK_OFFSET(0x11BFFE40)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x11C00090)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x11BFFC70)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginScrollViewFade_TypeDefinitionIndex = 69915;

class MonoUITableScrollV2_TableScrollPluginScrollViewFade : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Threading::CancellationTokenSource* cts; // 0x18
	::Class_2_FDFE69FE7B72463B* _scrollViewAnimation; // 0x20
	::System::Boolean _isPlayingFadeOut_k__BackingField; // 0x28
	::System::Boolean _isPlayingFadeIn_k__BackingField; // 0x29

	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__CTOR_OFFSET))(this, tableScroll);
	}

	::System::Boolean get_isPlayingFadeOut()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET_ISPLAYINGFADEOUT_OFFSET))(this);
	}

	::System::Void set_isPlayingFadeOut(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SET_ISPLAYINGFADEOUT_OFFSET))(this, value);
	}

	::System::Boolean get_isPlayingFadeIn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET_ISPLAYINGFADEIN_OFFSET))(this);
	}

	::System::Void set_isPlayingFadeIn(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SET_ISPLAYINGFADEIN_OFFSET))(this, value);
	}

	::MonoUITableScrollV2_ConfigScrollViewFade* get__fadeInconfig()
	{
		return ((::MonoUITableScrollV2_ConfigScrollViewFade*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_GET__FADEINCONFIG_OFFSET))(this);
	}

	::System::Void PlayFadeInAnimation(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_PLAYFADEINANIMATION_OFFSET))(this, normalizedTime);
	}

	::System::Void SetFadeInAnimationToFirstFrame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SETFADEINANIMATIONTOFIRSTFRAME_OFFSET))(this);
	}

	::System::Void StopAnimation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_STOPANIMATION_OFFSET))(this);
	}

	::System::Void SetFadeInAnimationToFirstFrameInner()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_SETFADEINANIMATIONTOFIRSTFRAMEINNER_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid PlayFadeInAnimationInner(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE_PLAYFADEINANIMATIONINNER_OFFSET))(this, normalizedTime);
	}
};
