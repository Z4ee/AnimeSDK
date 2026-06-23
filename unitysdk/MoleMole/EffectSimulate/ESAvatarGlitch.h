#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class UV01KeyframeCurve; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x18AEA940)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x18AEA980)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x18AEA9C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_4_OFFSET UNITYSDK_OFFSET(0x18AEAA00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_5_OFFSET UNITYSDK_OFFSET(0x18AEABF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_6_OFFSET UNITYSDK_OFFSET(0x18AEAC70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x18AEA5F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_5C90471BE03E101A_OFFSET UNITYSDK_OFFSET(0x18AEA670)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x18AEA280)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x18AEAC30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_A3CF806971F50D26_OFFSET UNITYSDK_OFFSET(0x18AEA630)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_BB26D4750A632557_OFFSET UNITYSDK_OFFSET(0x18AEAA40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x18AEA6A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_E907F5C75FFBA4EA_OFFSET UNITYSDK_OFFSET(0x18AEA450)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEA6B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarGlitch_TypeDefinitionIndex = 81032;

	class ESAvatarGlitch : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean use_BlockMaskTex; // 0xB8
		::UnityEngine::Texture* AMC_BlockMaskTex; // 0xC0
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_BlockMaskTex_ST; // 0xC8
		::System::Boolean AMC_ScreenScale; // 0xD0
		::System::Boolean use_BlockColorA; // 0xD1
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_BlockColorA; // 0xD8
		::System::Boolean use_BlockColorB; // 0xE0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_BlockColorB; // 0xE8
		::System::Boolean use_BlockColorC; // 0xF0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_BlockColorC; // 0xF8
		::System::Boolean use_BlockColorD; // 0x100
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_BlockColorD; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_E907F5C75FFBA4EA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_E907F5C75FFBA4EA_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_A3CF806971F50D26()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_A3CF806971F50D26_OFFSET))(this);
		}

		::System::Type* Method_4_5C90471BE03E101A()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_5C90471BE03E101A_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_4_OFFSET))(this);
		}

		::System::Void Method_4_BB26D4750A632557(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_BB26D4750A632557_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Method_4_128774387667156B_5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_5_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_9B92C44D5842AA8A_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARGLITCH_METHOD_4_128774387667156B_6_OFFSET))(this);
		}
	};
}
