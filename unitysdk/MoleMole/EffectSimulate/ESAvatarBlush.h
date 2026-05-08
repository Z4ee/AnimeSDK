#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
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

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x17D3D850)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17D3C990)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_3AD73BE4DC8A1A17_OFFSET UNITYSDK_OFFSET(0x17D3CE60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_3E4DAEC21EB746AE_OFFSET UNITYSDK_OFFSET(0x17D3CAB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17D3D110)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x17D3CB30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_681E224EC188A7D5_OFFSET UNITYSDK_OFFSET(0x17D3D4C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x17D3D060)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x17D3DA10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x17D3C9D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x17D3CA40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_88B60F3B95FAA4F1_3_OFFSET UNITYSDK_OFFSET(0x17D3D690)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_88B60F3B95FAA4F1_4_OFFSET UNITYSDK_OFFSET(0x17D3D8E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x17D3C920)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_9441529D4B4B549D_OFFSET UNITYSDK_OFFSET(0x17D3D270)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_9F8EF6EE79B16064_OFFSET UNITYSDK_OFFSET(0x17D3D950)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_B8746CF4034D9E80_OFFSET UNITYSDK_OFFSET(0x17D3C7E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_BB26D4750A632557_OFFSET UNITYSDK_OFFSET(0x17D3D3A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_BF47AC4D2115AADF_OFFSET UNITYSDK_OFFSET(0x17D3C5C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_C694CB4958A79AC7_OFFSET UNITYSDK_OFFSET(0x17D3CBE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17D3D600)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D3D570)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17D3D7C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_EEA73B6010018ADD_1_OFFSET UNITYSDK_OFFSET(0x17D3D310)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_EEA73B6010018ADD_OFFSET UNITYSDK_OFFSET(0x17D3CB90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_F91B8892FC7A8C48_OFFSET UNITYSDK_OFFSET(0x17D3D700)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_FCAE2431182375FA_OFFSET UNITYSDK_OFFSET(0x17D3D7B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3D170)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarBlush_TypeDefinitionIndex = 74409;

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

		::System::Void Method_4_BF47AC4D2115AADF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_BF47AC4D2115AADF_OFFSET))(this, a1);
		}

		::System::Void Method_4_B8746CF4034D9E80(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_B8746CF4034D9E80_OFFSET))(this, a1);
		}

		::System::String* Method_4_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_4_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_4_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::String* Method_4_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_3E4DAEC21EB746AE()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_3E4DAEC21EB746AE_OFFSET))(this);
		}

		::System::Type* Method_4_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_4FB5F56430673EA6_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_EEA73B6010018ADD()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_EEA73B6010018ADD_OFFSET))(this);
		}

		::System::Void Method_4_C694CB4958A79AC7(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_C694CB4958A79AC7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_3AD73BE4DC8A1A17(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_3AD73BE4DC8A1A17_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_755870B55A8B3AFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_755870B55A8B3AFF_OFFSET))(this);
		}

		::System::Void Method_4_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_4_9441529D4B4B549D(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_9441529D4B4B549D_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_EEA73B6010018ADD_1()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_EEA73B6010018ADD_1_OFFSET))(this);
		}

		::System::Void Method_4_BB26D4750A632557(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_BB26D4750A632557_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Type* Method_4_681E224EC188A7D5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_681E224EC188A7D5_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::String* Method_4_88B60F3B95FAA4F1_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_88B60F3B95FAA4F1_3_OFFSET))(this);
		}

		::System::Void Method_4_F91B8892FC7A8C48(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_F91B8892FC7A8C48_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_FCAE2431182375FA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_FCAE2431182375FA_OFFSET))(this, a1);
		}

		::System::String* Method_4_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Boolean Method_4_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::String* Method_4_88B60F3B95FAA4F1_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_88B60F3B95FAA4F1_4_OFFSET))(this);
		}

		::System::Void Method_4_9F8EF6EE79B16064(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_9F8EF6EE79B16064_OFFSET))(this, a1);
		}

		::System::String* Method_4_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARBLUSH_METHOD_4_7857B385C2B6C0EB_OFFSET))(this);
		}
	};
}
