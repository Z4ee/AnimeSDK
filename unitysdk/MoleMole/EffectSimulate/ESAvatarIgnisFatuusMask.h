#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x161B36B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x161B34F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_5C90471BE03E101A_OFFSET UNITYSDK_OFFSET(0x161B3570)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x161B3260)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x161B3670)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_9F8EF6EE79B16064_OFFSET UNITYSDK_OFFSET(0x161B3430)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_A3CF806971F50D26_OFFSET UNITYSDK_OFFSET(0x161B3530)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_BB26D4750A632557_OFFSET UNITYSDK_OFFSET(0x161B35C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x161B35A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x161B35B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarIgnisFatuusMask_TypeDefinitionIndex = 68094;

	class ESAvatarIgnisFatuusMask : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean AMC_MarkAsIgnisFatuusMask; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_9F8EF6EE79B16064(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_9F8EF6EE79B16064_OFFSET))(this, a1);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_A3CF806971F50D26()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_A3CF806971F50D26_OFFSET))(this);
		}

		::System::Type* Method_4_5C90471BE03E101A()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_5C90471BE03E101A_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::Void Method_4_BB26D4750A632557(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_BB26D4750A632557_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_4_9B92C44D5842AA8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_9B92C44D5842AA8A_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARIGNISFATUUSMASK_METHOD_4_128774387667156B_1_OFFSET))(this);
		}
	};
}
