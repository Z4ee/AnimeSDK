#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1A082D10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1A082D90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A082B70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_5C90471BE03E101A_OFFSET UNITYSDK_OFFSET(0x1A082BF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x1A0828C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_83A2D2FF4410F4BE_OFFSET UNITYSDK_OFFSET(0x1A082A90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x1A082D50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_A3CF806971F50D26_OFFSET UNITYSDK_OFFSET(0x1A082BB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_BB26D4750A632557_OFFSET UNITYSDK_OFFSET(0x1A082DD0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1A082C20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A082B60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A082C30)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarOther_TypeDefinitionIndex = 56608;

	class ESAvatarOther : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean AMC_MarkAsVfxMask; // 0xB8
		::System::Boolean use_CurrentColorStagment; // 0xB9
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_CurrentColorStagment; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_83A2D2FF4410F4BE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_83A2D2FF4410F4BE_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_A3CF806971F50D26()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_A3CF806971F50D26_OFFSET))(this);
		}

		::System::Type* Method_4_5C90471BE03E101A()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_5C90471BE03E101A_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::Void Method_4_9B92C44D5842AA8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_9B92C44D5842AA8A_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::Void Method_4_BB26D4750A632557(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATAROTHER_METHOD_4_BB26D4750A632557_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
