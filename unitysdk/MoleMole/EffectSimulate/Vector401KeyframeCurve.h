#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D746669983E39EA.h"
#include "unitysdk/MoleMole/EffectSimulate/Keyframeable01Curve_1.h"
#include "unitysdk/MoleMole/EffectSimulate/Vector401KeyframeCurve_Struct_2_38C62D43D5BBA5B1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_GET_EDITORDEFAULTVAL_OFFSET UNITYSDK_OFFSET(0x15106B10)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_GET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x151068C0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x151064F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x15106680)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_GET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x151067A0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_043B534750B9E7A6_OFFSET UNITYSDK_OFFSET(0x15106600)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_0CD324DF036A29AB_OFFSET UNITYSDK_OFFSET(0x15106B20)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_164B2BDEE6F7C25D_OFFSET UNITYSDK_OFFSET(0x15106EA0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x15107A70)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_21A9C5CD44F59232_OFFSET UNITYSDK_OFFSET(0x15107130)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x15107D00)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15107CF0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_8899B33907DB68CE_OFFSET UNITYSDK_OFFSET(0x151077F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_8F8B3C218D38C840_OFFSET UNITYSDK_OFFSET(0x15107760)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_A0F1D07FA5BAF2AE_OFFSET UNITYSDK_OFFSET(0x15106F20)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_B06E4777914A5853_OFFSET UNITYSDK_OFFSET(0x151071D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_B56234B03748E3AC_OFFSET UNITYSDK_OFFSET(0x15106FF0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x15107090)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_SET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x15106930)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x15106550)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x151066F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_SET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x15106810)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x151069E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector401KeyframeCurve_TypeDefinitionIndex = 68517;

	class Vector401KeyframeCurve : public ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>
	{
	public:
		// static const ::System::Single FIRST_LABEL_ITEM_WIDTH; // 0x0
		// static const ::System::Single SECOND_LABEL_ITEM_WIDTH; // 0x0
		// static const ::System::Single FIRST_AND_SECOND_MARGIN_VAL; // 0x0
		// static const ::System::Single CURVE_ITEM_WIDTH; // 0x0
		// static const ::System::Single K_FRAME_LABEL_WIDTH; // 0x0
		// static const ::System::Single LINE_SPACE_HEIGHT; // 0x0
		::System::Boolean sameOnVec; // 0x98
		::System::Single xBaseVal; // 0x9C
		::System::Boolean xUseCurve; // 0xA0
		::UnityEngine::AnimationCurve* xCurve; // 0xA8
		::System::Single yBaseVal; // 0xB0
		::System::Boolean yUseCurve; // 0xB4
		::UnityEngine::AnimationCurve* yCurve; // 0xB8
		::System::Single zBaseVal; // 0xC0
		::System::Boolean zUseCurve; // 0xC4
		::UnityEngine::AnimationCurve* zCurve; // 0xC8
		::System::Single wBaseVal; // 0xD0
		::System::Boolean wUseCurve; // 0xD4
		::UnityEngine::AnimationCurve* wCurve; // 0xD8

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE__CTOR_OFFSET))(this, a1);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_SET_YKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_zKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_GET_ZKEYFRAME_OFFSET))(this);
		}

		::System::Void set_zKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_SET_ZKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_wKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_GET_WKEYFRAME_OFFSET))(this);
		}

		::System::Void set_wKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_SET_WKEYFRAME_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_editorDefaultVal()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_GET_EDITORDEFAULTVAL_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_4_0CD324DF036A29AB(::System::Single a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_0CD324DF036A29AB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_4_A0F1D07FA5BAF2AE(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_A0F1D07FA5BAF2AE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationCurve* Method_4_B56234B03748E3AC(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_B56234B03748E3AC_OFFSET))(this, a1);
		}

		::System::Void Method_4_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
		}

		::System::Single Method_4_21A9C5CD44F59232(::UnityEngine::Vector4 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_21A9C5CD44F59232_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B06E4777914A5853(::Enum_3_6D746669983E39EA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_6D746669983E39EA))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_B06E4777914A5853_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 Method_4_8F8B3C218D38C840()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_8F8B3C218D38C840_OFFSET))(this);
		}

		::System::String* Method_4_8899B33907DB68CE(::System::Single a1, ::UnityEngine::Vector4 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_8899B33907DB68CE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_1DE6433C25680F9D_OFFSET))(this);
		}

		::System::Single Method_4_164B2BDEE6F7C25D(::System::Single a1, ::System::Boolean a2, ::UnityEngine::AnimationCurve* a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::System::Int32 a6, ::MoleMole::EffectSimulate::Vector401KeyframeCurve_Struct_2_38C62D43D5BBA5B1& a7)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Int32, ::MoleMole::EffectSimulate::Vector401KeyframeCurve_Struct_2_38C62D43D5BBA5B1&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_164B2BDEE6F7C25D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_4_043B534750B9E7A6(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_043B534750B9E7A6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_4_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR401KEYFRAMECURVE_METHOD_4_35EA095E1AFDD9C8_OFFSET))(this);
		}
	};
}
