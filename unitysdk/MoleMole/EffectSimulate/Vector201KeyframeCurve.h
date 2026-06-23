#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D746669983E39EA.h"
#include "unitysdk/MoleMole/EffectSimulate/Keyframeable01Curve_1.h"
#include "unitysdk/MoleMole/EffectSimulate/Vector201KeyframeCurve_Struct_2_DE6DEDC086AE237B.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_GET_EDITORDEFAULTVAL_OFFSET UNITYSDK_OFFSET(0x182C7690)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x182C7320)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x182C74B0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_01F677A8852683A3_OFFSET UNITYSDK_OFFSET(0x182C7430)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_037E3F5BEC1EEC81_OFFSET UNITYSDK_OFFSET(0x182C7E10)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_2356514D84A0DDE4_OFFSET UNITYSDK_OFFSET(0x182C79B0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x182C8150)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_4552C310294DCA81_OFFSET UNITYSDK_OFFSET(0x182C7B00)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_456E9019CE0C69CF_OFFSET UNITYSDK_OFFSET(0x182C7870)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_5C660F51F7E7B3D8_OFFSET UNITYSDK_OFFSET(0x182C7A90)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x182C8140)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_958E77D3D32E4233_OFFSET UNITYSDK_OFFSET(0x182C7A20)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x182C7FD0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_A596B48F7BD9EDA6_OFFSET UNITYSDK_OFFSET(0x182C76A0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x182C7DC0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_E49226E55BF3741F_OFFSET UNITYSDK_OFFSET(0x182C78F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x182C7380)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x182C7510)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x182C75C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector201KeyframeCurve_TypeDefinitionIndex = 49232;

	class Vector201KeyframeCurve : public ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>
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

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE__CTOR_OFFSET))(this, a1);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_SET_YKEYFRAME_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_editorDefaultVal()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_GET_EDITORDEFAULTVAL_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_4_A596B48F7BD9EDA6(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_A596B48F7BD9EDA6_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_4_E49226E55BF3741F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_E49226E55BF3741F_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationCurve* Method_4_2356514D84A0DDE4(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_2356514D84A0DDE4_OFFSET))(this, a1);
		}

		::System::Void Method_4_958E77D3D32E4233(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_958E77D3D32E4233_OFFSET))(this, a1, a2);
		}

		::System::Single Method_4_5C660F51F7E7B3D8(::UnityEngine::Vector2 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_5C660F51F7E7B3D8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_4552C310294DCA81(::Enum_3_6D746669983E39EA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_6D746669983E39EA))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_4552C310294DCA81_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_4_C21A7AC6282FB0D0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_C21A7AC6282FB0D0_OFFSET))(this);
		}

		::System::String* Method_4_037E3F5BEC1EEC81(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_037E3F5BEC1EEC81_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Single Method_4_456E9019CE0C69CF(::System::Single a1, ::System::Boolean a2, ::UnityEngine::AnimationCurve* a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::System::Int32 a6, ::MoleMole::EffectSimulate::Vector201KeyframeCurve_Struct_2_DE6DEDC086AE237B& a7)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Int32, ::MoleMole::EffectSimulate::Vector201KeyframeCurve_Struct_2_DE6DEDC086AE237B&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_456E9019CE0C69CF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::String* Method_4_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::Void Method_4_01F677A8852683A3(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR201KEYFRAMECURVE_METHOD_4_01F677A8852683A3_OFFSET))(this, a1, a2);
		}
	};
}
