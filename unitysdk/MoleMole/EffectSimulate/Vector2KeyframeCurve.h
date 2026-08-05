#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_65390B67EF8301C5.h"
#include "unitysdk/Enum_3_6D746669983E39EA.h"
#include "unitysdk/MoleMole/EffectSimulate/KeyframeableAnimationCurve_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1B1915D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1B191660)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_04EDF435A0D753A9_OFFSET UNITYSDK_OFFSET(0x1B191A30)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_2356514D84A0DDE4_OFFSET UNITYSDK_OFFSET(0x1B1916F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1B192130)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x1B191E60)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_5213E75FA17D9E65_OFFSET UNITYSDK_OFFSET(0x1B191D40)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_65D3D663660E88F2_OFFSET UNITYSDK_OFFSET(0x1B191820)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B192120)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_958E77D3D32E4233_OFFSET UNITYSDK_OFFSET(0x1B191760)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1B191FB0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_A2270461D39D4BF9_OFFSET UNITYSDK_OFFSET(0x1B191BF0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x1B1917D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B191DF0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_E49226E55BF3741F_OFFSET UNITYSDK_OFFSET(0x1B191B30)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1B1915F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1B191680)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1884E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector2KeyframeCurve_TypeDefinitionIndex = 63251;

	class Vector2KeyframeCurve : public ::MoleMole::EffectSimulate::KeyframeableAnimationCurve_1<::UnityEngine::Vector2>
	{
	public:
		// static const ::System::Single FIRST_LABEL_ITEM_WIDTH; // 0x0
		// static const ::System::Single SECOND_LABEL_ITEM_WIDTH; // 0x0
		// static const ::System::Single FIRST_AND_SECOND_MARGIN_VAL; // 0x0
		// static const ::System::Single CURVE_ITEM_WIDTH; // 0x0
		// static const ::System::Single K_FRAME_LABEL_WIDTH; // 0x0
		::System::Boolean sameOnVec; // 0x90
		::System::Single xBaseVal; // 0x94
		::System::Boolean xUseCurve; // 0x98
		::UnityEngine::AnimationCurve* xCurve; // 0xA0
		::System::Single yBaseVal; // 0xA8
		::System::Boolean yUseCurve; // 0xAC
		::UnityEngine::AnimationCurve* yCurve; // 0xB0

		::System::Void _ctor(::Enum_3_65390B67EF8301C5 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_65390B67EF8301C5, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_SET_YKEYFRAME_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_5_2356514D84A0DDE4(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_2356514D84A0DDE4_OFFSET))(this, a1);
		}

		::System::Void Method_5_958E77D3D32E4233(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_958E77D3D32E4233_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_5_C21A7AC6282FB0D0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_C21A7AC6282FB0D0_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_5_65D3D663660E88F2(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_65D3D663660E88F2_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_5_E49226E55BF3741F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_E49226E55BF3741F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_A2270461D39D4BF9(::Enum_3_6D746669983E39EA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_6D746669983E39EA))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_A2270461D39D4BF9_OFFSET))(this, a1);
		}

		::System::Void Method_5_5213E75FA17D9E65(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_5213E75FA17D9E65_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_459C79521BFE514E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_459C79521BFE514E_OFFSET))(this, a1);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Single Method_5_04EDF435A0D753A9(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::UnityEngine::AnimationCurve* a6, ::System::Int32 a7)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_04EDF435A0D753A9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::String* Method_5_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2KEYFRAMECURVE_METHOD_5_35EA095E1AFDD9C8_OFFSET))(this);
		}
	};
}
