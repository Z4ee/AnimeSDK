#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1B57F5B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1B57F320)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_65F7F584FDCE6774_OFFSET UNITYSDK_OFFSET(0x1B57F360)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x1B57F080)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_83A2D2FF4410F4BE_OFFSET UNITYSDK_OFFSET(0x1B57F250)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1B57F3D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_EB15466536C39910_OFFSET UNITYSDK_OFFSET(0x1B57F4D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1B57F3A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B57F3E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarOverride_TypeDefinitionIndex = 82359;

	class ESAvatarOverride : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean use_OverrideColor; // 0xB8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_OverrideColor; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_83A2D2FF4410F4BE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_83A2D2FF4410F4BE_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_65F7F584FDCE6774()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_65F7F584FDCE6774_OFFSET))(this);
		}

		::System::Type* Method_4_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_FB9A1387D38501D0_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::Void Method_4_EB15466536C39910(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_EB15466536C39910_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDE_METHOD_4_128774387667156B_1_OFFSET))(this);
		}
	};
}
