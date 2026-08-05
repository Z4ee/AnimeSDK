#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_65390B67EF8301C5.h"
#include "unitysdk/Enum_3_6D746669983E39EA.h"
#include "unitysdk/MoleMole/EffectSimulate/KeyframeableAnimationCurve_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A0383B0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A038450)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_GET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A0384F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_0173DC4321843C93_OFFSET UNITYSDK_OFFSET(0x1A038C20)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_04EDF435A0D753A9_OFFSET UNITYSDK_OFFSET(0x1A038B20)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_31BBB9AD8D2C3DC7_OFFSET UNITYSDK_OFFSET(0x1A038690)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1A039410)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_5213E75FA17D9E65_OFFSET UNITYSDK_OFFSET(0x1A038EE0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x1A039030)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A039400)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_8B6B6AE1C765104E_OFFSET UNITYSDK_OFFSET(0x1A038D20)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_8F089EFDA7DA3A98_OFFSET UNITYSDK_OFFSET(0x1A038700)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_B3EE965CE7963F95_OFFSET UNITYSDK_OFFSET(0x1A038810)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A038FA0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1A039200)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x1A038780)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A0383E0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A038480)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_SET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A038520)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A038590)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector3KeyframeCurve_TypeDefinitionIndex = 78167;

	class Vector3KeyframeCurve : public ::MoleMole::EffectSimulate::KeyframeableAnimationCurve_1<::UnityEngine::Vector3>
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

		::System::Void _ctor(::Enum_3_65390B67EF8301C5 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_65390B67EF8301C5, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_SET_YKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_zKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_GET_ZKEYFRAME_OFFSET))(this);
		}

		::System::Void set_zKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_SET_ZKEYFRAME_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_5_31BBB9AD8D2C3DC7(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_31BBB9AD8D2C3DC7_OFFSET))(this, a1);
		}

		::System::Void Method_5_8F089EFDA7DA3A98(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_8F089EFDA7DA3A98_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_F10A0D072D26C4BF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_F10A0D072D26C4BF_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_B3EE965CE7963F95(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_B3EE965CE7963F95_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_0173DC4321843C93(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_0173DC4321843C93_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_8B6B6AE1C765104E(::Enum_3_6D746669983E39EA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_6D746669983E39EA))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_8B6B6AE1C765104E_OFFSET))(this, a1);
		}

		::System::Void Method_5_5213E75FA17D9E65(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_5213E75FA17D9E65_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_5_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::Single Method_5_04EDF435A0D753A9(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::UnityEngine::AnimationCurve* a6, ::System::Int32 a7)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3KEYFRAMECURVE_METHOD_5_04EDF435A0D753A9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
