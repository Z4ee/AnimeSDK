#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }
namespace MoleMole::Config { class ScreenEffectVector3; }
namespace MoleMole::Config { class ScreenEffectVector4; }
namespace MoleMole::Config { template <typename T> class ScreenEffectValue_1; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_CALCULATEFIXEDHOLDTIMER_OFFSET UNITYSDK_OFFSET(0x12714820)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETCURVEVALUE_1_OFFSET UNITYSDK_OFFSET(0x12715530)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETCURVEVALUE_2_OFFSET UNITYSDK_OFFSET(0x127157C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETCURVEVALUE_3_OFFSET UNITYSDK_OFFSET(0x12715A70)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETCURVEVALUE_4_OFFSET UNITYSDK_OFFSET(0x12715CE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x127152A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_1_OFFSET UNITYSDK_OFFSET(0x12715ED0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_2_OFFSET UNITYSDK_OFFSET(0x12715F40)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_3_OFFSET UNITYSDK_OFFSET(0x12715FB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_4_OFFSET UNITYSDK_OFFSET(0x12716040)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_5_OFFSET UNITYSDK_OFFSET(0x127160E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_6_OFFSET UNITYSDK_OFFSET(0x12716160)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_7_OFFSET UNITYSDK_OFFSET(0x12716270)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_8_OFFSET UNITYSDK_OFFSET(0x12716360)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_OFFSET UNITYSDK_OFFSET(0x12715E60)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_1_OFFSET UNITYSDK_OFFSET(0x127148D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_2_OFFSET UNITYSDK_OFFSET(0x12713FB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_3_OFFSET UNITYSDK_OFFSET(0x12714AE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_4_OFFSET UNITYSDK_OFFSET(0x12714C20)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_5_OFFSET UNITYSDK_OFFSET(0x12714DA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_6_OFFSET UNITYSDK_OFFSET(0x12714F10)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_OFFSET UNITYSDK_OFFSET(0x127146B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_1_OFFSET UNITYSDK_OFFSET(0x12715150)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_2_OFFSET UNITYSDK_OFFSET(0x127151B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_3_OFFSET UNITYSDK_OFFSET(0x12715210)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_4_OFFSET UNITYSDK_OFFSET(0x12715410)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_5_OFFSET UNITYSDK_OFFSET(0x127154B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_6_OFFSET UNITYSDK_OFFSET(0x127156B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_7_OFFSET UNITYSDK_OFFSET(0x12715980)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_8_OFFSET UNITYSDK_OFFSET(0x12715BF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x127150F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x127145C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityScreenEffectBase_TypeDefinitionIndex = 59929;

	class ConfigEntityScreenEffectBase : public ::System::Object
	{
	public:
		::System::String* StartCurveKey; // 0x10
		::System::String* EndCurveKey; // 0x18
		::System::Single StartTime; // 0x20
		::System::Single HoldLoopDuration; // 0x24
		::System::Int32 Priority; // 0x28
		::System::Single EndTime; // 0x2C
		::System::Boolean IgnoreWitchTimescale; // 0x30
		::System::Boolean EnablePermanent; // 0x31
		::System::Boolean ValidInBlackCurtain; // 0x32
		::System::Single HoldTime; // 0x34
		::System::Boolean HoldPermanently; // 0x38
		::System::Boolean EnableInterrupt; // 0x39
		::System::Boolean IgnoreOwnerTimescale; // 0x3A
		::System::Boolean IgnoreWorldTimescale; // 0x3B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color GetHoldValue(::MoleMole::Config::ScreenEffectValue_1<::UnityEngine::Color>* seValue, ::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::MoleMole::Config::ScreenEffectValue_1<::UnityEngine::Color>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_OFFSET))(this, seValue, curTime, realHoldTime);
		}

		::UnityEngine::Color GetHoldValue_1(::MoleMole::Config::ScreenEffectColor* seValue, ::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::MoleMole::Config::ScreenEffectColor*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_1_OFFSET))(this, seValue, curTime, realHoldTime);
		}

		::System::Single GetHoldValue_2(::MoleMole::Config::ScreenEffectFloat* seValue, ::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ScreenEffectFloat*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_2_OFFSET))(this, seValue, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetHoldValue_3(::MoleMole::Config::ScreenEffectVector2* seValue, ::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::Config::ScreenEffectVector2*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_3_OFFSET))(this, seValue, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetHoldValue_4(::MoleMole::Config::ScreenEffectVector3* seValue, ::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Config::ScreenEffectVector3*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_4_OFFSET))(this, seValue, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetHoldValue_5(::MoleMole::Config::ScreenEffectVector4* seValue, ::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::MoleMole::Config::ScreenEffectVector4*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_5_OFFSET))(this, seValue, curTime, realHoldTime);
		}

		::System::Boolean GetHoldValue_6(::MoleMole::Config::ScreenEffectBool* seValue, ::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ScreenEffectBool*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETHOLDVALUE_6_OFFSET))(this, seValue, curTime, realHoldTime);
		}

		::System::Void CalculateFixedHoldTimer(::System::Single timer, ::System::Single realHoldTime, ::System::Single& finalTimer, ::System::Single& finalHoldTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_CALCULATEFIXEDHOLDTIMER_OFFSET))(this, timer, realHoldTime, finalTimer, finalHoldTime);
		}

		::UnityEngine::Texture* GetStartValue(::UnityEngine::Texture* startValue, ::UnityEngine::Texture* endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Gradient* GetStartValue_1(::UnityEngine::Gradient* startValue, ::UnityEngine::Gradient* endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_1_OFFSET))(this, startValue, endValue, curTime);
		}

		::System::Boolean GetStartValue_2(::System::Boolean startValue, ::System::Boolean endValue, ::System::Single curTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_2_OFFSET))(this, startValue, endValue, curTime);
		}

		::System::Int32 GetStartValue_3(::System::Int32 startValue, ::System::Int32 endValue, ::System::Single curTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_3_OFFSET))(this, startValue, endValue, curTime);
		}

		::System::Single GetStartValue_4(::System::Single startValue, ::System::Single endValue, ::System::Single curTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_4_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Vector2 GetStartValue_5(::UnityEngine::Vector2 startValue, ::UnityEngine::Vector2 endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_5_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Vector3 GetStartValue_6(::UnityEngine::Vector3 startValue, ::UnityEngine::Vector3 endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_6_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Vector4 GetStartValue_7(::UnityEngine::Vector4 startValue, ::UnityEngine::Vector4 endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_7_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Color GetStartValue_8(::UnityEngine::Color startValue, ::UnityEngine::Color endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETSTARTVALUE_8_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Texture* GetEndValue(::UnityEngine::Texture* startValue, ::UnityEngine::Texture* endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Gradient* GetEndValue_1(::UnityEngine::Gradient* startValue, ::UnityEngine::Gradient* endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_1_OFFSET))(this, startValue, endValue, curTime);
		}

		::System::Boolean GetEndValue_2(::System::Boolean startValue, ::System::Boolean endValue, ::System::Single curTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_2_OFFSET))(this, startValue, endValue, curTime);
		}

		::System::Int32 GetEndValue_3(::System::Int32 startValue, ::System::Int32 endValue, ::System::Single curTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_3_OFFSET))(this, startValue, endValue, curTime);
		}

		::System::Single GetEndValue_4(::System::Single startValue, ::System::Single endValue, ::System::Single curTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_4_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Vector2 GetEndValue_5(::UnityEngine::Vector2 startValue, ::UnityEngine::Vector2 endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_5_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Vector3 GetEndValue_6(::UnityEngine::Vector3 startValue, ::UnityEngine::Vector3 endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_6_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Vector4 GetEndValue_7(::UnityEngine::Vector4 startValue, ::UnityEngine::Vector4 endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_7_OFFSET))(this, startValue, endValue, curTime);
		}

		::UnityEngine::Color GetEndValue_8(::UnityEngine::Color startValue, ::UnityEngine::Color endValue, ::System::Single curTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETENDVALUE_8_OFFSET))(this, startValue, endValue, curTime);
		}

		::System::Single GetCurveValue(::System::String* curveKey, ::System::Single startValue, ::System::Single endValue, ::System::Single curTime, ::System::Single totalTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETCURVEVALUE_OFFSET))(this, curveKey, startValue, endValue, curTime, totalTime);
		}

		::UnityEngine::Vector2 GetCurveValue_1(::System::String* curveKey, ::UnityEngine::Vector2 startValue, ::UnityEngine::Vector2 endValue, ::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETCURVEVALUE_1_OFFSET))(this, curveKey, startValue, endValue, curTime, totalTime);
		}

		::UnityEngine::Vector3 GetCurveValue_2(::System::String* curveKey, ::UnityEngine::Vector3 startValue, ::UnityEngine::Vector3 endValue, ::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETCURVEVALUE_2_OFFSET))(this, curveKey, startValue, endValue, curTime, totalTime);
		}

		::UnityEngine::Vector4 GetCurveValue_3(::System::String* curveKey, ::UnityEngine::Vector4 startValue, ::UnityEngine::Vector4 endValue, ::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETCURVEVALUE_3_OFFSET))(this, curveKey, startValue, endValue, curTime, totalTime);
		}

		::UnityEngine::Color GetCurveValue_4(::System::String* curveKey, ::UnityEngine::Color startValue, ::UnityEngine::Color endValue, ::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECTBASE_GETCURVEVALUE_4_OFFSET))(this, curveKey, startValue, endValue, curTime, totalTime);
		}
	};
}
