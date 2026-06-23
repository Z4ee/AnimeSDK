#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LoopStyle.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_RandomConfig.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_RollConfig.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_TimePartType.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_TimePointStyle.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_TimeRandomType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOUITIMERCOUNTER_APPLYCOLORTODIGITIMAGES_OFFSET UNITYSDK_OFFSET(0x15152780)
#define MOLEMOLE_MONOUITIMERCOUNTER_BACKUPDIGITIMAGECOLORS_OFFSET UNITYSDK_OFFSET(0x15152570)
#define MOLEMOLE_MONOUITIMERCOUNTER_GET_OPENSECONDRANDOM_OFFSET UNITYSDK_OFFSET(0x15150CB0)
#define MOLEMOLE_MONOUITIMERCOUNTER_GET_TIMESHOWINGTYPE_OFFSET UNITYSDK_OFFSET(0x15150C90)
#define MOLEMOLE_MONOUITIMERCOUNTER_OVERRIDETIMEDIGITIMAGESCOLOR_OFFSET UNITYSDK_OFFSET(0x15152340)
#define MOLEMOLE_MONOUITIMERCOUNTER_RESTORETIMEDIGITIMAGESCOLOR_OFFSET UNITYSDK_OFFSET(0x151528F0)
#define MOLEMOLE_MONOUITIMERCOUNTER_SETCOUNTSECONDS_OFFSET UNITYSDK_OFFSET(0x15150CD0)
#define MOLEMOLE_MONOUITIMERCOUNTER_SET_OPENSECONDRANDOM_OFFSET UNITYSDK_OFFSET(0x15150CC0)
#define MOLEMOLE_MONOUITIMERCOUNTER_SET_TIMESHOWINGTYPE_OFFSET UNITYSDK_OFFSET(0x15150CA0)
#define MOLEMOLE_MONOUITIMERCOUNTER_STARTNORMALRANDOM_OFFSET UNITYSDK_OFFSET(0x151517A0)
#define MOLEMOLE_MONOUITIMERCOUNTER_STARTROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x15152070)
#define MOLEMOLE_MONOUITIMERCOUNTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x151514A0)
#define MOLEMOLE_MONOUITIMERCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15152B50)
#define MOLEMOLE_MONOUITIMERCOUNTER__FULLANYRANDOM_OFFSET UNITYSDK_OFFSET(0x151517F0)
#define MOLEMOLE_MONOUITIMERCOUNTER__GETCURVEDURATION_OFFSET UNITYSDK_OFFSET(0x15151FC0)
#define MOLEMOLE_MONOUITIMERCOUNTER__GETTIMEPARTINTERVAL_OFFSET UNITYSDK_OFFSET(0x15151EC0)
#define MOLEMOLE_MONOUITIMERCOUNTER__SETBYTIMEPART_OFFSET UNITYSDK_OFFSET(0x15151070)
#define MOLEMOLE_MONOUITIMERCOUNTER__TIMEPARTRANDOM_OFFSET UNITYSDK_OFFSET(0x151518F0)
#define MOLEMOLE_MONOUITIMERCOUNTER__TRYRANDOM_OFFSET UNITYSDK_OFFSET(0x15151550)
#define MOLEMOLE_MONOUITIMERCOUNTER__TRYROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x151515C0)
#define MOLEMOLE_MONOUITIMERCOUNTER___FULLANYRANDOM_G____GETCURVALUE_36_0_OFFSET UNITYSDK_OFFSET(0x15152CE0)
#define MOLEMOLE_MONOUITIMERCOUNTER___FULLANYRANDOM_G____GETRANDOMINTERVAL_36_1_OFFSET UNITYSDK_OFFSET(0x15151DB0)
#define MOLEMOLE_MONOUITIMERCOUNTER___FULLANYRANDOM_G____RANDOMSET_36_2_OFFSET UNITYSDK_OFFSET(0x15151D30)
#define MOLEMOLE_MONOUITIMERCOUNTER___TIMEPARTRANDOM_G___RANDOMPART_40_0_OFFSET UNITYSDK_OFFSET(0x15151DD0)
#define MOLEMOLE_MONOUITIMERCOUNTER___TRYROLLTOTARGET_G___ROOLPART_49_0_OFFSET UNITYSDK_OFFSET(0x15152100)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_TypeDefinitionIndex = 46883;

	class MonoUITimerCounter : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		// static const ::MoleMole::MonoUITimerCounter_TimePartType Urgent_NoHour; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* imageNums; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::UnityEngine::UI::Image*>* timePartImages; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::UnityEngine::UI::Image*>* addonTimePartImages; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* extraImages; // 0x70
		::MoleMole::MonoUITimerCounter_TimePartType _timeShowingType_k__BackingField; // 0x78
		::MoleMole::MonoUITimerCounter_TimePointStyle timePointStyle; // 0x7C
		::System::Single countSeconds; // 0x80
		::System::Boolean _openSecondRandom_k__BackingField; // 0x84
		::MoleMole::MonoUITimerCounter_TimeRandomType randomType; // 0x88
		::System::Single randomInterval; // 0x8C
		::UnityEngine::AnimationCurve* randomIntervalCurve; // 0x90
		::System::Int32 min; // 0x98
		::System::Int32 max; // 0x9C
		::MoleMole::LoopStyle randomLoopStyle; // 0xA0
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RandomConfig>* timePartRandoms; // 0xA8
		::System::Single _dt; // 0xB0
		::System::Int32 _dtFlag; // 0xB4
		::System::Single _trigDt; // 0xB8
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::System::Single>* _runningTimePartTriggerDelta; // 0xC0
		::System::Int32 _lastRandomSeconds; // 0xC8
		::System::Single _timeSinceRandom; // 0xCC
		::System::Boolean openSecondRoll; // 0xD0
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RollConfig>* timePartRollConfigs; // 0xD8
		::System::Action* rollDoneCb; // 0xE0
		::System::Int32 _rollTargetSeconds; // 0xE8
		::System::Int32 _beforeRollTargetSeconds; // 0xEC
		::System::Single _rollDt; // 0xF0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Image*, ::UnityEngine::Color>* _timeDigitImageColorBackup; // 0xF8
		::System::Boolean _timeDigitColorOverrideActive; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoUITimerCounter_TimePartType get_timeShowingType()
		{
			return ((::MoleMole::MonoUITimerCounter_TimePartType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_GET_TIMESHOWINGTYPE_OFFSET))(this);
		}

		::System::Void set_timeShowingType(::MoleMole::MonoUITimerCounter_TimePartType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUITimerCounter_TimePartType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_SET_TIMESHOWINGTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_openSecondRandom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_GET_OPENSECONDRANDOM_OFFSET))(this);
		}

		::System::Void set_openSecondRandom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_SET_OPENSECONDRANDOM_OFFSET))(this, value);
		}

		::System::Void SetCountSeconds(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_SETCOUNTSECONDS_OFFSET))(this, value);
		}

		::System::Void _SetByTimePart(::MoleMole::MonoUITimerCounter_TimePartType tp, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUITimerCounter_TimePartType, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER__SETBYTIMEPART_OFFSET))(this, tp, val);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_UPDATE_OFFSET))(this);
		}

		::System::Void StartNormalRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_STARTNORMALRANDOM_OFFSET))(this);
		}

		::System::Void _TryRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER__TRYRANDOM_OFFSET))(this);
		}

		::System::Void _FullAnyRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER__FULLANYRANDOM_OFFSET))(this);
		}

		::System::Void _TimePartRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER__TIMEPARTRANDOM_OFFSET))(this);
		}

		static ::System::Single _GetTimePartInterval(::System::Single totalTime, ::MoleMole::MonoUITimerCounter_RandomConfig cfg)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::MonoUITimerCounter_RandomConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER__GETTIMEPARTINTERVAL_OFFSET))(totalTime, cfg);
		}

		::System::Void StartRollToTarget(::System::Int32 targetSeconds, ::System::Action* rollDoneCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_STARTROLLTOTARGET_OFFSET))(this, targetSeconds, rollDoneCallback);
		}

		::System::Void _TryRollToTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER__TRYROLLTOTARGET_OFFSET))(this);
		}

		static ::System::Single _GetCurveDuration(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Single(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER__GETCURVEDURATION_OFFSET))(curve);
		}

		::System::Void OverrideTimeDigitImagesColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_OVERRIDETIMEDIGITIMAGESCOLOR_OFFSET))(this, color);
		}

		::System::Void RestoreTimeDigitImagesColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_RESTORETIMEDIGITIMAGESCOLOR_OFFSET))(this);
		}

		static ::System::Void BackupDigitImageColors(::UnityEngine::UI::Image* img, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Image*, ::UnityEngine::Color>* backup)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Image*, ::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_BACKUPDIGITIMAGECOLORS_OFFSET))(img, backup);
		}

		static ::System::Void ApplyColorToDigitImages(::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Image*, ::UnityEngine::Color>* map, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Image*, ::UnityEngine::Color>*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_APPLYCOLORTODIGITIMAGES_OFFSET))(map, color);
		}

		::System::Single __FullAnyRandom_g____GetCurValue_36_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER___FULLANYRANDOM_G____GETCURVALUE_36_0_OFFSET))(this);
		}

		::System::Single __FullAnyRandom_g____GetRandomInterval_36_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER___FULLANYRANDOM_G____GETRANDOMINTERVAL_36_1_OFFSET))(this);
		}

		::System::Void __FullAnyRandom_g____RandomSet_36_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER___FULLANYRANDOM_G____RANDOMSET_36_2_OFFSET))(this);
		}

		::System::Void __TimePartRandom_g___RandomPart_40_0(::MoleMole::MonoUITimerCounter_TimePartType part)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUITimerCounter_TimePartType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER___TIMEPARTRANDOM_G___RANDOMPART_40_0_OFFSET))(this, part);
		}

		::System::Boolean __TryRollToTarget_g___RoolPart_49_0(::MoleMole::MonoUITimerCounter_TimePartType part, ::MoleMole::MonoUITimerCounter_RollConfig rcfg)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RollConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER___TRYROLLTOTARGET_G___ROOLPART_49_0_OFFSET))(this, part, rcfg);
		}
	};
}
