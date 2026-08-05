#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_65390B67EF8301C5.h"
#include "unitysdk/Enum_3_6D746669983E39EA.h"
#include "unitysdk/MoleMole/EffectSimulate/Float01KeyframeCurve_Struct_2_2E7240E3118C5E76.h"
#include "unitysdk/MoleMole/EffectSimulate/Keyframeable01Curve_1.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_GET_EDITORDEFAULTVAL_OFFSET UNITYSDK_OFFSET(0x19AE8E90)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19AE8CE0)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x19AE93D0)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x19AE91E0)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_72D76C080E60069F_OFFSET UNITYSDK_OFFSET(0x19AE9280)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_7A37753F2CEC6D53_OFFSET UNITYSDK_OFFSET(0x19AE8F50)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19AE94A0)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_96996F4A2601EC2D_OFFSET UNITYSDK_OFFSET(0x19AE8FB0)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_9FBCB7EE3738DEA4_OFFSET UNITYSDK_OFFSET(0x19AE90C0)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x19AE9070)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x19AE8EF0)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_D5CE98C81E7D70E3_OFFSET UNITYSDK_OFFSET(0x19AE8EA0)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_FED21563FA953D2A_OFFSET UNITYSDK_OFFSET(0x19AE9170)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19AE8D40)
#define MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE8DB0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Float01KeyframeCurve_TypeDefinitionIndex = 74494;

	class Float01KeyframeCurve : public ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>
	{
	public:
		::System::Single baseVal; // 0x88
		::System::Boolean useCurve; // 0x8C
		::UnityEngine::AnimationCurve* curve; // 0x90

		::System::Void _ctor(::System::String* a1, ::System::Single a2, ::Enum_3_65390B67EF8301C5 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::Enum_3_65390B67EF8301C5, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_SET_XKEYFRAME_OFFSET))(this, a1);
		}

		::System::Single get_editorDefaultVal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_GET_EDITORDEFAULTVAL_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* Method_4_D5CE98C81E7D70E3(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_D5CE98C81E7D70E3_OFFSET))(this, a1);
		}

		::System::Void Method_4_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
		}

		::System::Single Method_4_7A37753F2CEC6D53(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_7A37753F2CEC6D53_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_96996F4A2601EC2D(::Enum_3_6D746669983E39EA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_6D746669983E39EA))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_96996F4A2601EC2D_OFFSET))(this, a1);
		}

		::System::Single Method_4_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Single Method_4_9FBCB7EE3738DEA4(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_9FBCB7EE3738DEA4_OFFSET))(this, a1, a2);
		}

		::System::Single Method_4_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_4_72D76C080E60069F(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_72D76C080E60069F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Single Method_4_FED21563FA953D2A(::System::Single a1, ::System::Boolean a2, ::UnityEngine::AnimationCurve* a3, ::MoleMole::EffectSimulate::Float01KeyframeCurve_Struct_2_2E7240E3118C5E76& a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::MoleMole::EffectSimulate::Float01KeyframeCurve_Struct_2_2E7240E3118C5E76&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_FED21563FA953D2A_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOAT01KEYFRAMECURVE_METHOD_4_832295EC279E5994_OFFSET))(this);
		}
	};
}
