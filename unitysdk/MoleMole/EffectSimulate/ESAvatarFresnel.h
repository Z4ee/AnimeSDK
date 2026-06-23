#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x161B2AB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x161B2AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x161B2B30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_128774387667156B_4_OFFSET UNITYSDK_OFFSET(0x161B2B70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x161B2740)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_5C90471BE03E101A_OFFSET UNITYSDK_OFFSET(0x161B27C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x161B2400)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_A3CF806971F50D26_OFFSET UNITYSDK_OFFSET(0x161B2780)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x161B27F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_E607519FCB80C849_OFFSET UNITYSDK_OFFSET(0x161B25D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_EB15466536C39910_OFFSET UNITYSDK_OFFSET(0x161B2BB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x161B2800)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarFresnel_TypeDefinitionIndex = 59284;

	class ESAvatarFresnel : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean use_FresnelColor; // 0xB8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_FresnelColor; // 0xC0
		::System::Boolean use_FresnelPower; // 0xC8
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_FresnelPower; // 0xD0
		::System::Boolean use_FresnelScale; // 0xD8
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_FresnelScale; // 0xE0
		::System::Boolean use_FresnelOffset; // 0xE8
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_FresnelOffset; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_E607519FCB80C849(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_E607519FCB80C849_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_A3CF806971F50D26()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_A3CF806971F50D26_OFFSET))(this);
		}

		::System::Type* Method_4_5C90471BE03E101A()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_5C90471BE03E101A_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_128774387667156B_4_OFFSET))(this);
		}

		::System::Void Method_4_EB15466536C39910(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARFRESNEL_METHOD_4_EB15466536C39910_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
