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

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1A0082B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1A0085D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x1A0086A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_4_OFFSET UNITYSDK_OFFSET(0x1A0086E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_5_OFFSET UNITYSDK_OFFSET(0x1A008720)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_6_OFFSET UNITYSDK_OFFSET(0x1A008770)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_7_OFFSET UNITYSDK_OFFSET(0x1A0087B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A007F00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_561A93472A44E7CC_OFFSET UNITYSDK_OFFSET(0x1A0082F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x1A007B90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_9B92C44D5842AA8A_1_OFFSET UNITYSDK_OFFSET(0x1A008660)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x1A008620)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_A3CF806971F50D26_OFFSET UNITYSDK_OFFSET(0x1A007F40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1A007FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_E907F5C75FFBA4EA_OFFSET UNITYSDK_OFFSET(0x1A007D60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A008760)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A008610)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1A007F80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A007FC0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarNoiseLerp_TypeDefinitionIndex = 82125;

	class ESAvatarNoiseLerp : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean use_NoiseLerpMask; // 0xB8
		::UnityEngine::Texture* AMC_NoiseLerpMask; // 0xC0
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_NoiseLerpMask_ST; // 0xC8
		::System::Boolean use_NoiseLerpColor; // 0xD0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_NoiseLerpColor; // 0xD8
		::System::Boolean AMC_NoiseUseUV2; // 0xE0
		::System::Boolean use_NoiseLerpEdgeRange; // 0xE1
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_NoiseLerpEdgeRange; // 0xE8
		::System::Boolean use_NoiseLerpValue; // 0xF0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_NoiseLerpValue; // 0xF8
		::System::Boolean AMC_UseLerpEdgeColor; // 0x100
		::System::Boolean use_NoiseLerpEdgeColor; // 0x101
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_NoiseLerpEdgeColor; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_E907F5C75FFBA4EA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_E907F5C75FFBA4EA_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_A3CF806971F50D26()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_A3CF806971F50D26_OFFSET))(this);
		}

		::System::Type* Method_4_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_FB9A1387D38501D0_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::Void Method_4_561A93472A44E7CC(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_561A93472A44E7CC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_9B92C44D5842AA8A_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_9B92C44D5842AA8A_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_4_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_5_OFFSET))(this);
		}

		::System::Boolean Method_4_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_6_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARNOISELERP_METHOD_4_128774387667156B_7_OFFSET))(this);
		}
	};
}
