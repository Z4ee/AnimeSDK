#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"

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

#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1B222590)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1B2225D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x1B222610)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_4_OFFSET UNITYSDK_OFFSET(0x1B222650)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_5_OFFSET UNITYSDK_OFFSET(0x1B222690)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1B222300)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_5C90471BE03E101A_OFFSET UNITYSDK_OFFSET(0x1B222390)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_65F7F584FDCE6774_OFFSET UNITYSDK_OFFSET(0x1B222340)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x1B221FC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x1B2226D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_BB26D4750A632557_OFFSET UNITYSDK_OFFSET(0x1B222710)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1B2223C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_E607519FCB80C849_OFFSET UNITYSDK_OFFSET(0x1B222190)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2223D0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarOverrideOutline_TypeDefinitionIndex = 71710;

	class ESAvatarOverrideOutline : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean use_OverrideOutlineColor; // 0xB8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_OverrideOutlineColor; // 0xC0
		::System::Boolean use_OverrideOutlineTex; // 0xC8
		::UnityEngine::Texture* AMC_OverrideOutlineTex; // 0xD0
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_OverrideOutlineTex_ST; // 0xD8
		::System::Boolean use_OverrideOutlineSpeed; // 0xE0
		::MoleMole::EffectSimulate::Vector401KeyframeCurve* AMC_OverrideOutlineSpeed; // 0xE8
		::System::Boolean AMC_OverrideOutlineUseUV2; // 0xF0
		::System::Boolean use_OutlineWidth; // 0xF1
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_OutlineWidth; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_E607519FCB80C849(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_E607519FCB80C849_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_65F7F584FDCE6774()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_65F7F584FDCE6774_OFFSET))(this);
		}

		::System::Type* Method_4_5C90471BE03E101A()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_5C90471BE03E101A_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_4_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_128774387667156B_5_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_9B92C44D5842AA8A_OFFSET))(this);
		}

		::System::Void Method_4_BB26D4750A632557(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROVERRIDEOUTLINE_METHOD_4_BB26D4750A632557_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
