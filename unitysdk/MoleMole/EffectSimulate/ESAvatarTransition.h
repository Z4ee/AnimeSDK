#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class UV01KeyframeCurve; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1A009510)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1A009550)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x1A009890)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_4_OFFSET UNITYSDK_OFFSET(0x1A0098D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_5_OFFSET UNITYSDK_OFFSET(0x1A009910)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_6_OFFSET UNITYSDK_OFFSET(0x1A009950)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A0091A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_561A93472A44E7CC_OFFSET UNITYSDK_OFFSET(0x1A009590)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_65F7F584FDCE6774_OFFSET UNITYSDK_OFFSET(0x1A0091E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x1A008E30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x1A0094D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1A009250)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_E907F5C75FFBA4EA_OFFSET UNITYSDK_OFFSET(0x1A009000)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1A009220)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A009260)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarTransition_TypeDefinitionIndex = 79584;

	class ESAvatarTransition : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean use_TransitionCompletion; // 0xB8
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_TransitionCompletion; // 0xC0
		::System::Boolean use_TransitionTex; // 0xC8
		::UnityEngine::Texture* AMC_TransitionTex; // 0xD0
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_TransitionTex_ST; // 0xD8
		::System::Boolean AMC_OverrideOutlineUseUV2; // 0xE0
		::System::Boolean use_TransitionWidth; // 0xE1
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_TransitionWidth; // 0xE8
		::System::Boolean use_TransitionColor; // 0xF0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_TransitionColor; // 0xF8
		::System::Boolean use_OverrideOutlineTex; // 0x100
		::UnityEngine::Texture* AMC_OverrideOutlineTex; // 0x108
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_OverrideOutlineTex_ST; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_E907F5C75FFBA4EA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_E907F5C75FFBA4EA_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_65F7F584FDCE6774()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_65F7F584FDCE6774_OFFSET))(this);
		}

		::System::Type* Method_4_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_FB9A1387D38501D0_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_9B92C44D5842AA8A_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::Void Method_4_561A93472A44E7CC(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_561A93472A44E7CC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_4_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_5_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARTRANSITION_METHOD_4_128774387667156B_6_OFFSET))(this);
		}
	};
}
