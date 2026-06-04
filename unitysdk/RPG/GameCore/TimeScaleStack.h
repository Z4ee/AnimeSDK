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

#define RPG_GAMECORE_TIMESCALESTACK_CALCCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xCF25730)
#define RPG_GAMECORE_TIMESCALESTACK_CALCVALUEFORINDEX_OFFSET UNITYSDK_OFFSET(0xCF28C20)
#define RPG_GAMECORE_TIMESCALESTACK_CALCVALUEIGNOREINDEX_OFFSET UNITYSDK_OFFSET(0xCF28B70)
#define RPG_GAMECORE_TIMESCALESTACK_CONTAINSFINITELYSCALE_OFFSET UNITYSDK_OFFSET(0xCF28AC0)
#define RPG_GAMECORE_TIMESCALESTACK_CONTAINSINDEX_OFFSET UNITYSDK_OFFSET(0xCF28A00)
#define RPG_GAMECORE_TIMESCALESTACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF257F0)
#define RPG_GAMECORE_TIMESCALESTACK_FLUSH_OFFSET UNITYSDK_OFFSET(0xCF275C0)
#define RPG_GAMECORE_TIMESCALESTACK_GETINDEXVALUE_OFFSET UNITYSDK_OFFSET(0xCF29030)
#define RPG_GAMECORE_TIMESCALESTACK_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xCF257E0)
#define RPG_GAMECORE_TIMESCALESTACK_GET_MUTETIMESCALE_OFFSET UNITYSDK_OFFSET(0xCF29AA0)
#define RPG_GAMECORE_TIMESCALESTACK_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xCF257D0)
#define RPG_GAMECORE_TIMESCALESTACK_MUTEINDEX_OFFSET UNITYSDK_OFFSET(0xCF29420)
#define RPG_GAMECORE_TIMESCALESTACK_NOTIFYVALUEUPDATE_OFFSET UNITYSDK_OFFSET(0xCF26600)
#define RPG_GAMECORE_TIMESCALESTACK_PAUSE_OFFSET UNITYSDK_OFFSET(0xCF279B0)
#define RPG_GAMECORE_TIMESCALESTACK_PUBLICPAUSE_OFFSET UNITYSDK_OFFSET(0xCF282E0)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVEALLFINITELYSCALE_OFFSET UNITYSDK_OFFSET(0xCF272F0)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVEALLINFINITELYSCALE_OFFSET UNITYSDK_OFFSET(0xCF27020)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYINDEX_OFFSET UNITYSDK_OFFSET(0xCF26BF0)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYKEY_OFFSET UNITYSDK_OFFSET(0xCF26660)
#define RPG_GAMECORE_TIMESCALESTACK_SAFELYREMOVESCALEBYINDEX_OFFSET UNITYSDK_OFFSET(0xCF26FA0)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEBYCURVE_OFFSET UNITYSDK_OFFSET(0xCF283A0)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEBYDURATION_OFFSET UNITYSDK_OFFSET(0xCF27EA0)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEBYINDEX_OFFSET UNITYSDK_OFFSET(0xCF28880)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEINFINITELY_OFFSET UNITYSDK_OFFSET(0xCF27A90)
#define RPG_GAMECORE_TIMESCALESTACK_SETINDEXVALUE_OFFSET UNITYSDK_OFFSET(0xCF290F0)
#define RPG_GAMECORE_TIMESCALESTACK_SET_MUTETIMESCALE_OFFSET UNITYSDK_OFFSET(0xCF29AB0)
#define RPG_GAMECORE_TIMESCALESTACK_STRETCHENTRYBYINDEX_OFFSET UNITYSDK_OFFSET(0xCF28D90)
#define RPG_GAMECORE_TIMESCALESTACK_TICK_OFFSET UNITYSDK_OFFSET(0xCF25880)
#define RPG_GAMECORE_TIMESCALESTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xCF25580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeScaleStack_TypeDefinitionIndex = 55384;

	class TimeScaleStack : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* ValueUpdateCallback; // 0x10
		::System::Collections::Generic::List_1<::Struct_2_8914B164A728534C>* _TimeSlowEntries; // 0x18
		::System::Action_1<::System::Int32>* SlowEntryRemoveCallback; // 0x20
		::Class_1_83AB3963F9C15714* _TimeScaleStack; // 0x28
		::System::Int32 _PublicPauseIndex; // 0x30
		::System::Single _MaxValue; // 0x34
		::System::Boolean _HasTimeSlowEntry; // 0x38
		::System::Boolean _MuteTimeScale; // 0x39
		::System::Single _MinValue; // 0x3C
		::System::Single _CurrentValue; // 0x40

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_TICK_OFFSET))(this, a1);
		}

		::System::Void RemoveScaleByKey(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYKEY_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveScaleByIndex(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void SafelyRemoveScaleByIndex(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SAFELYREMOVESCALEBYINDEX_OFFSET))(this, a1, a2, a3);
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

		::System::Int32 Pause(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_PAUSE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PublicPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_PUBLICPAUSE_OFFSET))(this, a1);
		}

		::System::Int32 ScaleByDuration(::System::Single a1, ::System::Single a2, ::System::String* a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::AnimationCurve* a6, ::UnityEngine::AnimationCurve* a7, ::System::Single a8, ::System::Boolean a9)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEBYDURATION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Int32 ScaleByCurve(::System::Single a1, ::UnityEngine::AnimationCurve* a2, ::System::String* a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::String*, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEBYCURVE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 ScaleByIndex(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::Int32 ScaleInfinitely(::System::Single a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5, ::UnityEngine::AnimationCurve* a6, ::System::Single a7, ::System::Boolean a8)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::String*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEINFINITELY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean ContainsIndex(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CONTAINSINDEX_OFFSET))(this, a1);
		}

		::System::Boolean ContainsFinitelyScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CONTAINSFINITELYSCALE_OFFSET))(this);
		}

		::System::Single CalcValueIgnoreIndex(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CALCVALUEIGNOREINDEX_OFFSET))(this, a1);
		}

		::System::Single CalcValueForIndex(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CALCVALUEFORINDEX_OFFSET))(this, a1);
		}

		::System::Boolean StretchEntryByIndex(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_STRETCHENTRYBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::Single GetIndexValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_GETINDEXVALUE_OFFSET))(this, a1);
		}

		::System::Void SetIndexValue(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SETINDEXVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void MuteIndex(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_MUTEINDEX_OFFSET))(this, a1, a2);
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

		::System::Void set_MuteTimeScale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SET_MUTETIMESCALE_OFFSET))(this, a1);
		}
	};
}
