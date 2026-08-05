#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/AvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/OverrideRimGlowFresnelBlendMode.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class UV01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector401KeyframeCurve; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_10_OFFSET UNITYSDK_OFFSET(0x1B504A10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_11_OFFSET UNITYSDK_OFFSET(0x1B504E20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_12_OFFSET UNITYSDK_OFFSET(0x1B504E60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1B5047D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1B504810)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x1B504850)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_4_OFFSET UNITYSDK_OFFSET(0x1B504890)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_5_OFFSET UNITYSDK_OFFSET(0x1B5048D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_6_OFFSET UNITYSDK_OFFSET(0x1B504910)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_7_OFFSET UNITYSDK_OFFSET(0x1B504950)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_8_OFFSET UNITYSDK_OFFSET(0x1B504990)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_9_OFFSET UNITYSDK_OFFSET(0x1B5049D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1B504170)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_61862E7D2AE0F54F_OFFSET UNITYSDK_OFFSET(0x1B504A50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_65F7F584FDCE6774_OFFSET UNITYSDK_OFFSET(0x1B5041B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x1B503D20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1B504240)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_F922D767491C9C6A_OFFSET UNITYSDK_OFFSET(0x1B503EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1B504210)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B504250)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarOverrideRimGlow_TypeDefinitionIndex = 79125;

	class ESAvatarOverrideRimGlow : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::MoleMole::MaterialPropertyModifierEnumDefine::AvatarShaderBlendMode AMC_OverrideRimGlowMode; // 0xB8
		::System::Boolean use_OverrideRimGlowColor; // 0xB9
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_OverrideRimGlowColor; // 0xC0
		::System::Boolean use_OverrideRimGlowTexFX; // 0xC8
		::UnityEngine::Texture* AMC_OverrideRimGlowTexFX; // 0xD0
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_OverrideRimGlowTexFX_ST; // 0xD8
		::System::Boolean use_OverrideRimGlowUseUV2; // 0xE0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_OverrideRimGlowUseUV2; // 0xE8
		::System::Boolean use_OverrideRimGlowSpeed; // 0xF0
		::MoleMole::EffectSimulate::Vector401KeyframeCurve* AMC_OverrideRimGlowSpeed; // 0xF8
		::System::Boolean use_PropertyTexUseUV2; // 0x100
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_PropertyTexUseUV2; // 0x108
		::System::Boolean use_FresnelColor; // 0x110
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_FresnelColor; // 0x118
		::System::Boolean use_DetailColor; // 0x120
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_DetailColor; // 0x128
		::System::Boolean use_FresnelWidth; // 0x130
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_FresnelWidth; // 0x138
		::System::Boolean use_PropertyMaskUseUV2; // 0x140
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_PropertyMaskUseUV2; // 0x148
		::System::Boolean use_PropertyMask2UseUV2; // 0x150
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_PropertyMask2UseUV2; // 0x158
		::MoleMole::MaterialPropertyModifierEnumDefine::OverrideRimGlowFresnelBlendMode AMC_PropertyMaskChannel; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_F922D767491C9C6A(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_F922D767491C9C6A_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_65F7F584FDCE6774()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_65F7F584FDCE6774_OFFSET))(this);
		}

		::System::Type* Method_4_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_FB9A1387D38501D0_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_4_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_5_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_6_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_7_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_8_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_9()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_9_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_10()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_10_OFFSET))(this);
		}

		::System::Void Method_4_61862E7D2AE0F54F(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_61862E7D2AE0F54F_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Method_4_128774387667156B_11()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_11_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_12()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDERIMGLOW_METHOD_4_128774387667156B_12_OFFSET))(this);
		}
	};
}
