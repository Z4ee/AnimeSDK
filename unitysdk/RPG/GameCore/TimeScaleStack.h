#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_8914B164A728534C.h"
#include "unitysdk/System/Object.h"

class Class_1_83AB3963F9C15714;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_GAMECORE_TIMESCALESTACK_CALCCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xB7822C0)
#define RPG_GAMECORE_TIMESCALESTACK_CALCVALUEFORINDEX_OFFSET UNITYSDK_OFFSET(0xB7849B0)
#define RPG_GAMECORE_TIMESCALESTACK_CALCVALUEIGNOREINDEX_OFFSET UNITYSDK_OFFSET(0xB784910)
#define RPG_GAMECORE_TIMESCALESTACK_CONTAINSFINITELYSCALE_OFFSET UNITYSDK_OFFSET(0xB784880)
#define RPG_GAMECORE_TIMESCALESTACK_CONTAINSINDEX_OFFSET UNITYSDK_OFFSET(0xB7847D0)
#define RPG_GAMECORE_TIMESCALESTACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB782370)
#define RPG_GAMECORE_TIMESCALESTACK_FLUSH_OFFSET UNITYSDK_OFFSET(0xB7839E0)
#define RPG_GAMECORE_TIMESCALESTACK_GETINDEXVALUE_OFFSET UNITYSDK_OFFSET(0xB784DA0)
#define RPG_GAMECORE_TIMESCALESTACK_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xB782360)
#define RPG_GAMECORE_TIMESCALESTACK_GET_MUTETIMESCALE_OFFSET UNITYSDK_OFFSET(0xB785610)
#define RPG_GAMECORE_TIMESCALESTACK_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB782350)
#define RPG_GAMECORE_TIMESCALESTACK_MUTEINDEX_OFFSET UNITYSDK_OFFSET(0xB7850A0)
#define RPG_GAMECORE_TIMESCALESTACK_NOTIFYVALUEUPDATE_OFFSET UNITYSDK_OFFSET(0xB782DA0)
#define RPG_GAMECORE_TIMESCALESTACK_PAUSE_OFFSET UNITYSDK_OFFSET(0xB783C40)
#define RPG_GAMECORE_TIMESCALESTACK_PUBLICPAUSE_OFFSET UNITYSDK_OFFSET(0xB7842D0)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVEALLFINITELYSCALE_OFFSET UNITYSDK_OFFSET(0xB7837E0)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVEALLINFINITELYSCALE_OFFSET UNITYSDK_OFFSET(0xB7835E0)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYINDEX_OFFSET UNITYSDK_OFFSET(0xB783270)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYKEY_OFFSET UNITYSDK_OFFSET(0xB782E00)
#define RPG_GAMECORE_TIMESCALESTACK_SAFELYREMOVESCALEBYINDEX_OFFSET UNITYSDK_OFFSET(0xB783560)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEBYCURVE_OFFSET UNITYSDK_OFFSET(0xB784390)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEBYDURATION_OFFSET UNITYSDK_OFFSET(0xB783FE0)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEBYINDEX_OFFSET UNITYSDK_OFFSET(0xB784710)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEINFINITELY_OFFSET UNITYSDK_OFFSET(0xB783D20)
#define RPG_GAMECORE_TIMESCALESTACK_SETINDEXVALUE_OFFSET UNITYSDK_OFFSET(0xB784E60)
#define RPG_GAMECORE_TIMESCALESTACK_SET_MUTETIMESCALE_OFFSET UNITYSDK_OFFSET(0xB785620)
#define RPG_GAMECORE_TIMESCALESTACK_STRETCHENTRYBYINDEX_OFFSET UNITYSDK_OFFSET(0xB784B00)
#define RPG_GAMECORE_TIMESCALESTACK_TICK_OFFSET UNITYSDK_OFFSET(0xB782400)
#define RPG_GAMECORE_TIMESCALESTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB782160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeScaleStack_TypeDefinitionIndex = 54657;

	class TimeScaleStack : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_8914B164A728534C>* _TimeSlowEntries; // 0x10
		::Class_1_83AB3963F9C15714* _TimeScaleStack; // 0x18
		::System::Action_1<::System::Single>* ValueUpdateCallback; // 0x20
		::System::Action_1<::System::Int32>* SlowEntryRemoveCallback; // 0x28
		::System::Single _CurrentValue; // 0x30
		::System::Single _MaxValue; // 0x34
		::System::Int32 _PublicPauseIndex; // 0x38
		::System::Boolean _HasTimeSlowEntry; // 0x3C
		::System::Boolean _MuteTimeScale; // 0x3D
		::System::Single _MinValue; // 0x40

		::System::Void _ctor(::RPG::GameCore::FixPoint min, ::RPG::GameCore::FixPoint max)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK__CTOR_OFFSET))(this, min, max);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_GET_ISPAUSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_TICK_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void RemoveScaleByKey(::System::String* key, ::System::Boolean fadeRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYKEY_OFFSET))(this, key, fadeRemove);
		}

		::System::Void RemoveScaleByIndex(::System::Int32 index, ::System::Boolean fadeRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYINDEX_OFFSET))(this, index, fadeRemove);
		}

		::System::Void SafelyRemoveScaleByIndex(::System::Int32 index, ::System::Int32 stackHashCode, ::System::Boolean fadeRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SAFELYREMOVESCALEBYINDEX_OFFSET))(this, index, stackHashCode, fadeRemove);
		}

		::System::Void RemoveAllInfinitelyScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_REMOVEALLINFINITELYSCALE_OFFSET))(this);
		}

		::System::Void RemoveAllFinitelyScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_REMOVEALLFINITELYSCALE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_FLUSH_OFFSET))(this);
		}

		::System::Int32 Pause(::System::Single fDuration, ::System::Boolean skipFirstFrame, ::System::Single delay)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_PAUSE_OFFSET))(this, fDuration, skipFirstFrame, delay);
		}

		::System::Void PublicPause(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_PUBLICPAUSE_OFFSET))(this, isPause);
		}

		::System::Int32 ScaleByDuration(::System::Single fScale, ::System::Single fDuration, ::System::String* key, ::System::Single fadeInTime, ::System::Single fadeOutTime, ::UnityEngine::AnimationCurve* fadeInCurve, ::UnityEngine::AnimationCurve* fadeOutCurve, ::System::Single activeDelay, ::System::Boolean skipFirstFrame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEBYDURATION_OFFSET))(this, fScale, fDuration, key, fadeInTime, fadeOutTime, fadeInCurve, fadeOutCurve, activeDelay, skipFirstFrame);
		}

		::System::Int32 ScaleByCurve(::System::Single fDuration, ::UnityEngine::AnimationCurve* pCurve, ::System::String* key, ::System::Single fNormalizedScale, ::System::Boolean skipFirstFrame, ::System::Single delay)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::String*, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEBYCURVE_OFFSET))(this, fDuration, pCurve, key, fNormalizedScale, skipFirstFrame, delay);
		}

		::System::Int32 ScaleByIndex(::System::Int32 nIndex, ::System::Single fScale)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEBYINDEX_OFFSET))(this, nIndex, fScale);
		}

		::System::Int32 ScaleInfinitely(::System::Single fScale, ::System::String* key, ::System::Single fadeInTime, ::System::Single fadeOutTime, ::UnityEngine::AnimationCurve* fadeInCurve, ::UnityEngine::AnimationCurve* fadeOutCurve, ::System::Single activeDelay, ::System::Boolean skipFirstFrame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::String*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEINFINITELY_OFFSET))(this, fScale, key, fadeInTime, fadeOutTime, fadeInCurve, fadeOutCurve, activeDelay, skipFirstFrame);
		}

		::System::Boolean ContainsIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CONTAINSINDEX_OFFSET))(this, index);
		}

		::System::Boolean ContainsFinitelyScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CONTAINSFINITELYSCALE_OFFSET))(this);
		}

		::System::Single CalcValueIgnoreIndex(::System::Collections::Generic::List_1<::System::Int32>* ignoreIndexList)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CALCVALUEIGNOREINDEX_OFFSET))(this, ignoreIndexList);
		}

		::System::Single CalcValueForIndex(::System::Collections::Generic::List_1<::System::Int32>* indexList)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CALCVALUEFORINDEX_OFFSET))(this, indexList);
		}

		::System::Boolean StretchEntryByIndex(::System::Int32 index, ::System::Single scale)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_STRETCHENTRYBYINDEX_OFFSET))(this, index, scale);
		}

		::System::Single GetIndexValue(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_GETINDEXVALUE_OFFSET))(this, index);
		}

		::System::Void SetIndexValue(::System::Int32 nIndex, ::System::Single fValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SETINDEXVALUE_OFFSET))(this, nIndex, fValue);
		}

		::System::Void MuteIndex(::System::Int32 nIndex, ::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_MUTEINDEX_OFFSET))(this, nIndex, mute);
		}

		::System::Void NotifyValueUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_NOTIFYVALUEUPDATE_OFFSET))(this);
		}

		::System::Void CalcCurrentValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CALCCURRENTVALUE_OFFSET))(this);
		}

		::System::Boolean get_MuteTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_GET_MUTETIMESCALE_OFFSET))(this);
		}

		::System::Void set_MuteTimeScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SET_MUTETIMESCALE_OFFSET))(this, value);
		}
	};
}
