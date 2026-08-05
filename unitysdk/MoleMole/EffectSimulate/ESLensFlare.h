#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::NAPRenderPipeline0 { class LensFlareComponentSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class LensFlareDataSRP_NativeSRP; }

#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_GET_LENSFLAREDATASHOWER_OFFSET UNITYSDK_OFFSET(0x1B8269A0)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1B826D10)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_METHOD_3_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x1B8267D0)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x1B826DB0)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_METHOD_3_AFA9D88E62D257E4_OFFSET UNITYSDK_OFFSET(0x1B826400)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_SET_LENSFLAREDATASHOWER_OFFSET UNITYSDK_OFFSET(0x1B826A00)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B826B80)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLensFlare_TypeDefinitionIndex = 83826;

	class ESLensFlare : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP* m_stCom; // 0x58
		::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP* comCache; // 0x60
		::MoleMole::EffectSimulate::FloatKeyframeCurve* intensity; // 0x68
		::MoleMole::EffectSimulate::FloatKeyframeCurve* scale; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_AFA9D88E62D257E4(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_METHOD_3_AFA9D88E62D257E4_OFFSET))(this, a1);
		}

		::System::Void Method_3_2898E3EC91BCF259(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_METHOD_3_2898E3EC91BCF259_OFFSET))(this, a1);
		}

		::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP* get_lensFlareDataShower()
		{
			return ((::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_GET_LENSFLAREDATASHOWER_OFFSET))(this);
		}

		::System::Void set_lensFlareDataShower(::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_SET_LENSFLAREDATASHOWER_OFFSET))(this, a1);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}
	};
}
