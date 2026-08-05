#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LoopStyle.h"
#include "unitysdk/MoleMole/MonoUIImageNumberWithKUnity_ImageUnit.h"
#include "unitysdk/MoleMole/MonoUIImageNumberWithKUnity_NumRandomType.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_RandomConfig.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_RollConfig.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_GET_OPENSCORERANDOM_OFFSET UNITYSDK_OFFSET(0x1909ED30)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_ISFULLRANDOM_OFFSET UNITYSDK_OFFSET(0x1909ED50)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_ISSPLITRANDOM_OFFSET UNITYSDK_OFFSET(0x1909EDA0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x1909EF70)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_SET_OPENSCORERANDOM_OFFSET UNITYSDK_OFFSET(0x1909ED40)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_STARTNORMALRANDOM_OFFSET UNITYSDK_OFFSET(0x1909FA80)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_STARTROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x1909FD30)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1909F3F0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__CTOR_OFFSET UNITYSDK_OFFSET(0x190A0010)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__FLUSHRUNDIGITSTONUM_OFFSET UNITYSDK_OFFSET(0x1909FBF0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__FULLANYRANDOM_OFFSET UNITYSDK_OFFSET(0x1909F690)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__GETCURVEDURATION_OFFSET UNITYSDK_OFFSET(0x1909FC80)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__GETMAXNUMBERTAG_OFFSET UNITYSDK_OFFSET(0x1909EDF0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__GETPARTINTERVAL_OFFSET UNITYSDK_OFFSET(0x1909FAF0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__ONTOTALDIGIT_OFFSET UNITYSDK_OFFSET(0x1909ECE0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__SETREALNUMBER_OFFSET UNITYSDK_OFFSET(0x1909F040)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__SPLITRANDOM_OFFSET UNITYSDK_OFFSET(0x1909F740)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__TRYRANDOM_OFFSET UNITYSDK_OFFSET(0x1909F620)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__TRYROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x1909F4A0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY___FULLANYRANDOM_G____GETCURVALUE_41_0_OFFSET UNITYSDK_OFFSET(0x190A0280)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY___FULLANYRANDOM_G____GETRANDOMINTERVAL_41_1_OFFSET UNITYSDK_OFFSET(0x1909FAD0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY___TRYROLLTOTARGET_G___ROLLPART_51_0_OFFSET UNITYSDK_OFFSET(0x1909FE30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageNumberWithKUnity_TypeDefinitionIndex = 42078;

	class MonoUIImageNumberWithKUnity : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		// static const ::System::Int32 KNumber = 0x3E8; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* spritesNums; // 0x58
		::UnityEngine::Sprite* kSprite; // 0x60
		::System::Int32 totalDigits; // 0x68
		::System::Boolean useGlobalKTag; // 0x6C
		::System::Int32 customKTag; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::MonoUIImageNumberWithKUnity_ImageUnit>* imageUnits; // 0x78
		::UnityEngine::UI::Image* kUnit; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::MonoUIImageNumberWithKUnity_ImageUnit>* imageShadowUnits; // 0x88
		::UnityEngine::UI::Image* kShadowUnit; // 0x90
		::System::Boolean _openScoreRandom_k__BackingField; // 0x98
		::MoleMole::MonoUIImageNumberWithKUnity_NumRandomType randomType; // 0x9C
		::System::Single randomInterval; // 0xA0
		::UnityEngine::AnimationCurve* randomIntervalCurve; // 0xA8
		::System::Int32 min; // 0xB0
		::System::Int32 max; // 0xB4
		::MoleMole::LoopStyle randomLoopStyle; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUITimerCounter_RandomConfig>* digitPartRandoms; // 0xC0
		::System::Boolean openSecondRoll; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUITimerCounter_RollConfig>* numbPartRollConfigs; // 0xD0
		::System::Action* rollDoneCb; // 0xD8
		::System::Int32 _rollTargetNumb; // 0xE0
		::System::Int32 _beforeRollTargetNumb; // 0xE4
		::System::Single _dt; // 0xE8
		::System::Int32 _dtFlag; // 0xEC
		::System::Single _trigDt; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _runningDigitsTriggerDelta; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _runningDigits; // 0x100
		::System::Int32 _lastRandomNum; // 0x108
		::System::Single _timeSinceRandom; // 0x10C
		::System::Single _rollDt; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__CTOR_OFFSET))(this);
		}

		::System::Void _OnTotalDigit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__ONTOTALDIGIT_OFFSET))(this);
		}

		::System::Boolean get_openScoreRandom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_GET_OPENSCORERANDOM_OFFSET))(this);
		}

		::System::Void set_openScoreRandom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_SET_OPENSCORERANDOM_OFFSET))(this, value);
		}

		::System::Boolean IsFullRandom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_ISFULLRANDOM_OFFSET))(this);
		}

		::System::Boolean IsSplitRandom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_ISSPLITRANDOM_OFFSET))(this);
		}

		::System::Int32 _GetMaxNumberTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__GETMAXNUMBERTAG_OFFSET))(this);
		}

		::System::Void SetNumber(::System::Int32 number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_SETNUMBER_OFFSET))(this, number);
		}

		::System::Void _SetRealNumber(::System::Int32 realNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__SETREALNUMBER_OFFSET))(this, realNumber);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_UPDATE_OFFSET))(this);
		}

		::System::Void _TryRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__TRYRANDOM_OFFSET))(this);
		}

		::System::Void StartNormalRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_STARTNORMALRANDOM_OFFSET))(this);
		}

		::System::Void _FullAnyRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__FULLANYRANDOM_OFFSET))(this);
		}

		::System::Void _SplitRandom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__SPLITRANDOM_OFFSET))(this);
		}

		::System::Void _FlushRunDigitsToNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__FLUSHRUNDIGITSTONUM_OFFSET))(this);
		}

		static ::System::Single _GetPartInterval(::System::Single totalTime, ::MoleMole::MonoUITimerCounter_RandomConfig cfg)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::MonoUITimerCounter_RandomConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__GETPARTINTERVAL_OFFSET))(totalTime, cfg);
		}

		::System::Void StartRollToTarget(::System::Int32 targetNumb, ::System::Action* rollDoneCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_STARTROLLTOTARGET_OFFSET))(this, targetNumb, rollDoneCallback);
		}

		::System::Void _TryRollToTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__TRYROLLTOTARGET_OFFSET))(this);
		}

		static ::System::Single _GetCurveDuration(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Single(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY__GETCURVEDURATION_OFFSET))(curve);
		}

		::System::Single __FullAnyRandom_g____GetCurValue_41_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY___FULLANYRANDOM_G____GETCURVALUE_41_0_OFFSET))(this);
		}

		::System::Single __FullAnyRandom_g____GetRandomInterval_41_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY___FULLANYRANDOM_G____GETRANDOMINTERVAL_41_1_OFFSET))(this);
		}

		::System::Boolean __TryRollToTarget_g___RollPart_51_0(::System::Int32 index, ::MoleMole::MonoUITimerCounter_RollConfig rcfg)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::MonoUITimerCounter_RollConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY___TRYROLLTOTARGET_G___ROLLPART_51_0_OFFSET))(this, index, rcfg);
		}
	};
}
