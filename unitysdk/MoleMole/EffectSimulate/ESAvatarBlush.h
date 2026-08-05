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

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1A007910)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1A007950)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A007740)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_61862E7D2AE0F54F_OFFSET UNITYSDK_OFFSET(0x1A007990)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_65F7F584FDCE6774_OFFSET UNITYSDK_OFFSET(0x1A007780)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x1A007460)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_ADF45F4E823CC047_OFFSET UNITYSDK_OFFSET(0x1A007630)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1A0077F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1A0077C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A007800)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarBlush_TypeDefinitionIndex = 50708;

	class ESAvatarBlush : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean use_BlushTexture; // 0xB8
		::UnityEngine::Texture* AMC_BlushTexture; // 0xC0
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_BlushTexture_ST; // 0xC8
		::System::Boolean use_BlushColor; // 0xD0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_BlushColor; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_ADF45F4E823CC047(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_ADF45F4E823CC047_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_65F7F584FDCE6774()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_65F7F584FDCE6774_OFFSET))(this);
		}

		::System::Type* Method_4_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_FB9A1387D38501D0_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::Void Method_4_61862E7D2AE0F54F(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_61862E7D2AE0F54F_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
