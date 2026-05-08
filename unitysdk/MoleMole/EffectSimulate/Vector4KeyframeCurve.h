#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D746669983E39EA.h"
#include "unitysdk/Enum_3_7C181D7C1FDFA7A2.h"
#include "unitysdk/MoleMole/EffectSimulate/KeyframeableAnimationCurve_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_GET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x16D2F9F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x16D2F810)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x16D2F8B0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_GET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x16D2F950)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_04EDF435A0D753A9_OFFSET UNITYSDK_OFFSET(0x16D30030)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x16D30200)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_31FC867766176C3A_OFFSET UNITYSDK_OFFSET(0x16D2FC60)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x16D30490)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16D30480)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_8F8B3C218D38C840_OFFSET UNITYSDK_OFFSET(0x16D2FBD0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_9823BFA3CE8B5542_OFFSET UNITYSDK_OFFSET(0x16D257F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_A0F1D07FA5BAF2AE_OFFSET UNITYSDK_OFFSET(0x16D30130)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x16D26730)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_B56234B03748E3AC_OFFSET UNITYSDK_OFFSET(0x16D2FA90)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16D26360)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x16D2FB30)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_D219DD9B6D30CBB4_OFFSET UNITYSDK_OFFSET(0x16D24410)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_SET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x16D2FA20)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x16D2F840)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x16D2F8E0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_SET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x16D2F980)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D277B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector4KeyframeCurve_TypeDefinitionIndex = 40888;

	class Vector4KeyframeCurve : public ::MoleMole::EffectSimulate::KeyframeableAnimationCurve_1<::UnityEngine::Vector4>
	{
	public:
		// static const ::System::Single FIRST_LABEL_ITEM_WIDTH; // 0x0
		// static const ::System::Single SECOND_LABEL_ITEM_WIDTH; // 0x0
		// static const ::System::Single FIRST_AND_SECOND_MARGIN_VAL; // 0x0
		// static const ::System::Single K_FRAME_LABEL_WIDTH; // 0x0
		::System::Boolean sameOnVec; // 0x90
		::System::Single xBaseVal; // 0x94
		::System::Boolean xUseCurve; // 0x98
		::UnityEngine::AnimationCurve* xCurve; // 0xA0
		::System::Single yBaseVal; // 0xA8
		::System::Boolean yUseCurve; // 0xAC
		::UnityEngine::AnimationCurve* yCurve; // 0xB0
		::System::Single zBaseVal; // 0xB8
		::System::Boolean zUseCurve; // 0xBC
		::UnityEngine::AnimationCurve* zCurve; // 0xC0
		::System::Single wBaseVal; // 0xC8
		::System::Boolean wUseCurve; // 0xCC
		::UnityEngine::AnimationCurve* wCurve; // 0xD0

		::System::Void _ctor(::Enum_3_7C181D7C1FDFA7A2 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7C181D7C1FDFA7A2, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_SET_YKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_zKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_GET_ZKEYFRAME_OFFSET))(this);
		}

		::System::Void set_zKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_SET_ZKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_wKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_GET_WKEYFRAME_OFFSET))(this);
		}

		::System::Void set_wKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_SET_WKEYFRAME_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_5_B56234B03748E3AC(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_B56234B03748E3AC_OFFSET))(this, a1);
		}

		::System::Void Method_5_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_5_8F8B3C218D38C840()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_8F8B3C218D38C840_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_5_31FC867766176C3A(::System::Single a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_31FC867766176C3A_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_5_A0F1D07FA5BAF2AE(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_A0F1D07FA5BAF2AE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_D219DD9B6D30CBB4(::Enum_3_6D746669983E39EA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_6D746669983E39EA))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_D219DD9B6D30CBB4_OFFSET))(this, a1);
		}

		::System::Void Method_5_9823BFA3CE8B5542(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_9823BFA3CE8B5542_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A5ADA4706DA592FA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_A5ADA4706DA592FA_OFFSET))(this, a1);
		}

		::System::Void Method_5_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_1DE6433C25680F9D_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_5_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::Single Method_5_04EDF435A0D753A9(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::UnityEngine::AnimationCurve* a6, ::System::Int32 a7)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4KEYFRAMECURVE_METHOD_5_04EDF435A0D753A9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
