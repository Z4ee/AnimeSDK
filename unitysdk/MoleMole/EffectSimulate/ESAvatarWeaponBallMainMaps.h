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

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1A009FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1A009FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x1A00A020)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A009CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_65F7F584FDCE6774_OFFSET UNITYSDK_OFFSET(0x1A009CF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x1A009990)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_B8746CF4034D9E80_OFFSET UNITYSDK_OFFSET(0x1A009B60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1A009D70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_EB15466536C39910_OFFSET UNITYSDK_OFFSET(0x1A00A060)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A009CA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1A009D40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A009D80)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarWeaponBallMainMaps_TypeDefinitionIndex = 81520;

	class ESAvatarWeaponBallMainMaps : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean use_BaseColor; // 0xB8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_BaseColor; // 0xC0
		::System::Boolean use_Smoothness; // 0xC8
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_Smoothness; // 0xD0
		::System::Boolean use_Metallic; // 0xD8
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_Metallic; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_B8746CF4034D9E80(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_B8746CF4034D9E80_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_65F7F584FDCE6774()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_65F7F584FDCE6774_OFFSET))(this);
		}

		::System::Type* Method_4_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_FB9A1387D38501D0_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::Void Method_4_EB15466536C39910(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARWEAPONBALLMAINMAPS_METHOD_4_EB15466536C39910_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
