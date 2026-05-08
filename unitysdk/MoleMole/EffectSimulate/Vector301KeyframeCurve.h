#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D746669983E39EA.h"
#include "unitysdk/MoleMole/EffectSimulate/Keyframeable01Curve_1.h"
#include "unitysdk/MoleMole/EffectSimulate/Vector301KeyframeCurve_Struct_2_E0D85B40A6004208.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_GET_EDITORDEFAULTVAL_OFFSET UNITYSDK_OFFSET(0x10DFDDA0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x10DFD890)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x10DFDA30)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_GET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x10DFDB60)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_0173DC4321843C93_OFFSET UNITYSDK_OFFSET(0x10DFE160)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_043B534750B9E7A6_OFFSET UNITYSDK_OFFSET(0x10DFD9B0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_05A2DFD507593DE5_OFFSET UNITYSDK_OFFSET(0x10DFE9B0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_31BBB9AD8D2C3DC7_OFFSET UNITYSDK_OFFSET(0x10DFE260)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x10DFEE00)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_459E632F046395C5_OFFSET UNITYSDK_OFFSET(0x10DFDDC0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_4D3533BDA0DDCF1E_OFFSET UNITYSDK_OFFSET(0x10DFE350)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10DFEE80)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_8F089EFDA7DA3A98_OFFSET UNITYSDK_OFFSET(0x10DFE2D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_C813ED51B36FFD80_OFFSET UNITYSDK_OFFSET(0x10DFE3D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_D2A1DD761855A1B6_OFFSET UNITYSDK_OFFSET(0x10DFE0E0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x10DFEC00)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x10DFE920)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x10DFD8F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x10DFDAA0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_SET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x10DFDBD0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x10DFDC90)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector301KeyframeCurve_TypeDefinitionIndex = 64922;

	class Vector301KeyframeCurve : public ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector3>
	{
	public:
		// static const ::System::Single FIRST_LABEL_ITEM_WIDTH; // 0x0
		// static const ::System::Single SECOND_LABEL_ITEM_WIDTH; // 0x0
		// static const ::System::Single FIRST_AND_SECOND_MARGIN_VAL; // 0x0
		// static const ::System::Single CURVE_ITEM_WIDTH; // 0x0
		// static const ::System::Single K_FRAME_LABEL_WIDTH; // 0x0
		// static const ::System::Single LINE_SPACE_HEIGHT; // 0x0
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

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE__CTOR_OFFSET))(this, a1);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_SET_YKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_zKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_GET_ZKEYFRAME_OFFSET))(this);
		}

		::System::Void set_zKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_SET_ZKEYFRAME_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_editorDefaultVal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_GET_EDITORDEFAULTVAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_4_459E632F046395C5(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_459E632F046395C5_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_4_0173DC4321843C93(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_0173DC4321843C93_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationCurve* Method_4_31BBB9AD8D2C3DC7(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_31BBB9AD8D2C3DC7_OFFSET))(this, a1);
		}

		::System::Void Method_4_8F089EFDA7DA3A98(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_8F089EFDA7DA3A98_OFFSET))(this, a1, a2);
		}

		::System::Single Method_4_4D3533BDA0DDCF1E(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_4D3533BDA0DDCF1E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_C813ED51B36FFD80(::Enum_3_6D746669983E39EA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_6D746669983E39EA))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_C813ED51B36FFD80_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_4_F10A0D072D26C4BF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_F10A0D072D26C4BF_OFFSET))(this);
		}

		::System::String* Method_4_05A2DFD507593DE5(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_05A2DFD507593DE5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::String* Method_4_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::Void Method_4_043B534750B9E7A6(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_043B534750B9E7A6_OFFSET))(this, a1, a2);
		}

		::System::Single Method_4_D2A1DD761855A1B6(::System::Single a1, ::System::Boolean a2, ::UnityEngine::AnimationCurve* a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::System::Int32 a6, ::MoleMole::EffectSimulate::Vector301KeyframeCurve_Struct_2_E0D85B40A6004208& a7)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Int32, ::MoleMole::EffectSimulate::Vector301KeyframeCurve_Struct_2_E0D85B40A6004208&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_D2A1DD761855A1B6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR301KEYFRAMECURVE_METHOD_4_832295EC279E5994_OFFSET))(this);
		}
	};
}
