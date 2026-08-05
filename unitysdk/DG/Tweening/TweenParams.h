#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/DG/Tweening/LoopType.h"
#include "unitysdk/DG/Tweening/UpdateType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class EaseFunction; }
namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening { template <typename T> class TweenCallback_1; }
namespace UnityEngine { class AnimationCurve; }

#define DG_TWEENING_TWEENPARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FC134F0)
#define DG_TWEENING_TWEENPARAMS_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1FC138E0)
#define DG_TWEENING_TWEENPARAMS_ONKILL_OFFSET UNITYSDK_OFFSET(0x1FC138F0)
#define DG_TWEENING_TWEENPARAMS_ONPLAY_OFFSET UNITYSDK_OFFSET(0x1FC138A0)
#define DG_TWEENING_TWEENPARAMS_ONREWIND_OFFSET UNITYSDK_OFFSET(0x1FC138B0)
#define DG_TWEENING_TWEENPARAMS_ONSTART_OFFSET UNITYSDK_OFFSET(0x1FC13890)
#define DG_TWEENING_TWEENPARAMS_ONSTEPCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1FC138D0)
#define DG_TWEENING_TWEENPARAMS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC138C0)
#define DG_TWEENING_TWEENPARAMS_ONWAYPOINTCHANGE_OFFSET UNITYSDK_OFFSET(0x1FC13900)
#define DG_TWEENING_TWEENPARAMS_SETAUTOKILL_OFFSET UNITYSDK_OFFSET(0x1FC135F0)
#define DG_TWEENING_TWEENPARAMS_SETDELAY_OFFSET UNITYSDK_OFFSET(0x1FC13910)
#define DG_TWEENING_TWEENPARAMS_SETEASE_1_OFFSET UNITYSDK_OFFSET(0x1FC13770)
#define DG_TWEENING_TWEENPARAMS_SETEASE_2_OFFSET UNITYSDK_OFFSET(0x1FC137F0)
#define DG_TWEENING_TWEENPARAMS_SETEASE_OFFSET UNITYSDK_OFFSET(0x1FC13680)
#define DG_TWEENING_TWEENPARAMS_SETID_OFFSET UNITYSDK_OFFSET(0x1FC13600)
#define DG_TWEENING_TWEENPARAMS_SETLOOPS_OFFSET UNITYSDK_OFFSET(0x1FC13620)
#define DG_TWEENING_TWEENPARAMS_SETRECYCLABLE_OFFSET UNITYSDK_OFFSET(0x1FC13800)
#define DG_TWEENING_TWEENPARAMS_SETRELATIVE_OFFSET UNITYSDK_OFFSET(0x1FC13920)
#define DG_TWEENING_TWEENPARAMS_SETSPEEDBASED_OFFSET UNITYSDK_OFFSET(0x1FC13930)
#define DG_TWEENING_TWEENPARAMS_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1FC13610)
#define DG_TWEENING_TWEENPARAMS_SETUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1FC13880)
#define DG_TWEENING_TWEENPARAMS_SETUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC13810)
#define DG_TWEENING_TWEENPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC13940)
#define DG_TWEENING_TWEENPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC133F0)

namespace DG::Tweening
{
	inline static constexpr unsigned int TweenParams_TypeDefinitionIndex = 28533;

	class TweenParams : public ::System::Object
	{
	public:
		static ::DG::Tweening::TweenParams** StaticGet_Params()
		{
			return (::DG::Tweening::TweenParams**)Il2CppClass::FromTypeDefinitionIndex(TweenParams_TypeDefinitionIndex)->GetStaticField(0x24390);
		}
		::DG::Tweening::TweenCallback* onKill; // 0x10
		::DG::Tweening::TweenCallback* onRewind; // 0x18
		::DG::Tweening::TweenCallback* onUpdate; // 0x20
		::DG::Tweening::TweenCallback* onStepComplete; // 0x28
		::DG::Tweening::TweenCallback* onComplete; // 0x30
		::System::Object* id; // 0x38
		::DG::Tweening::TweenCallback* onPlay; // 0x40
		::DG::Tweening::TweenCallback* onStart; // 0x48
		::DG::Tweening::EaseFunction* customEase; // 0x50
		::DG::Tweening::TweenCallback_1<::System::Int32>* onWaypointChange; // 0x58
		::System::Object* target; // 0x60
		::DG::Tweening::Ease easeType; // 0x68
		::DG::Tweening::UpdateType updateType; // 0x6C
		::System::Single easeOvershootOrAmplitude; // 0x70
		::System::Single easePeriod; // 0x74
		::System::Boolean isSpeedBased; // 0x78
		::System::Boolean isRelative; // 0x79
		::System::Boolean autoKill; // 0x7A
		::DG::Tweening::LoopType loopType; // 0x7C
		::System::Boolean isIndependentUpdate; // 0x80
		::System::Boolean isRecyclable; // 0x81
		::System::Int32 loops; // 0x84
		::System::Single delay; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS__CCTOR_OFFSET))();
		}

		::DG::Tweening::TweenParams* Clear()
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_CLEAR_OFFSET))(this);
		}

		::DG::Tweening::TweenParams* SetAutoKill(::System::Boolean autoKillOnCompletion)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETAUTOKILL_OFFSET))(this, autoKillOnCompletion);
		}

		::DG::Tweening::TweenParams* SetId(::System::Object* id)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETID_OFFSET))(this, id);
		}

		::DG::Tweening::TweenParams* SetTarget(::System::Object* target)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETTARGET_OFFSET))(this, target);
		}

		::DG::Tweening::TweenParams* SetLoops(::System::Int32 loops, ::System::Nullable_1<::DG::Tweening::LoopType> loopType)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::DG::Tweening::LoopType>))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETLOOPS_OFFSET))(this, loops, loopType);
		}

		::DG::Tweening::TweenParams* SetEase(::DG::Tweening::Ease ease, ::System::Nullable_1<::System::Single> overshootOrAmplitude, ::System::Nullable_1<::System::Single> period)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::Ease, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETEASE_OFFSET))(this, ease, overshootOrAmplitude, period);
		}

		::DG::Tweening::TweenParams* SetEase_1(::UnityEngine::AnimationCurve* animCurve)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETEASE_1_OFFSET))(this, animCurve);
		}

		::DG::Tweening::TweenParams* SetEase_2(::DG::Tweening::EaseFunction* customEase)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::EaseFunction*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETEASE_2_OFFSET))(this, customEase);
		}

		::DG::Tweening::TweenParams* SetRecyclable(::System::Boolean recyclable)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETRECYCLABLE_OFFSET))(this, recyclable);
		}

		::DG::Tweening::TweenParams* SetUpdate(::System::Boolean isIndependentUpdate)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETUPDATE_OFFSET))(this, isIndependentUpdate);
		}

		::DG::Tweening::TweenParams* SetUpdate_1(::DG::Tweening::UpdateType updateType, ::System::Boolean isIndependentUpdate)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::UpdateType, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETUPDATE_1_OFFSET))(this, updateType, isIndependentUpdate);
		}

		::DG::Tweening::TweenParams* OnStart(::DG::Tweening::TweenCallback* action)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_ONSTART_OFFSET))(this, action);
		}

		::DG::Tweening::TweenParams* OnPlay(::DG::Tweening::TweenCallback* action)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_ONPLAY_OFFSET))(this, action);
		}

		::DG::Tweening::TweenParams* OnRewind(::DG::Tweening::TweenCallback* action)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_ONREWIND_OFFSET))(this, action);
		}

		::DG::Tweening::TweenParams* OnUpdate(::DG::Tweening::TweenCallback* action)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_ONUPDATE_OFFSET))(this, action);
		}

		::DG::Tweening::TweenParams* OnStepComplete(::DG::Tweening::TweenCallback* action)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_ONSTEPCOMPLETE_OFFSET))(this, action);
		}

		::DG::Tweening::TweenParams* OnComplete(::DG::Tweening::TweenCallback* action)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_ONCOMPLETE_OFFSET))(this, action);
		}

		::DG::Tweening::TweenParams* OnKill(::DG::Tweening::TweenCallback* action)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_ONKILL_OFFSET))(this, action);
		}

		::DG::Tweening::TweenParams* OnWaypointChange(::DG::Tweening::TweenCallback_1<::System::Int32>* action)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::DG::Tweening::TweenCallback_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_ONWAYPOINTCHANGE_OFFSET))(this, action);
		}

		::DG::Tweening::TweenParams* SetDelay(::System::Single delay)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETDELAY_OFFSET))(this, delay);
		}

		::DG::Tweening::TweenParams* SetRelative(::System::Boolean isRelative)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETRELATIVE_OFFSET))(this, isRelative);
		}

		::DG::Tweening::TweenParams* SetSpeedBased(::System::Boolean isSpeedBased)
		{
			return ((::DG::Tweening::TweenParams*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENPARAMS_SETSPEEDBASED_OFFSET))(this, isSpeedBased);
		}
	};
}
