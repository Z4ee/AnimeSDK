#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESShaderCustomBehavior.h"

namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_METHOD_4_1000D6400DA4668F_OFFSET UNITYSDK_OFFSET(0x149CAB80)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x149CAAF0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_METHOD_4_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x149CA3D0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_METHOD_4_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x149CAB30)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_METHOD_4_E80F0CA54EBF1847_OFFSET UNITYSDK_OFFSET(0x149CA8C0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x149CAB90)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESShaderCustomFog_TypeDefinitionIndex = 46122;

	class ESShaderCustomFog : public ::MoleMole::EffectSimulate::ESShaderCustomBehavior
	{
	public:
		::MoleMole::EffectSimulate::FloatKeyframeCurve* SC_FxCustomFogStart; // 0x68
		::MoleMole::EffectSimulate::ColorKeyframeCurve* SC_FxCustomFogColorNear; // 0x70
		::MoleMole::EffectSimulate::ColorKeyframeCurve* SC_FxCustomFogColorFar; // 0x78
		::MoleMole::EffectSimulate::FloatKeyframeCurve* SC_FxCustomFogInvDistance; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_AF36EBA0C8D1FBA2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_METHOD_4_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
		}

		::System::Void Method_4_E80F0CA54EBF1847(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_METHOD_4_E80F0CA54EBF1847_OFFSET))(this, a1);
		}

		::System::Void Method_4_C91E5170F9E36EED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_METHOD_4_C91E5170F9E36EED_OFFSET))(this, a1);
		}

		::MoleMole::Config::ShaderCustomType Method_4_1000D6400DA4668F()
		{
			return ((::MoleMole::Config::ShaderCustomType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_METHOD_4_1000D6400DA4668F_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMFOG_METHOD_4_128774387667156B_OFFSET))(this);
		}
	};
}
