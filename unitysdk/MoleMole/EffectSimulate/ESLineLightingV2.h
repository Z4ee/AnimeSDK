#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

class LineLightingV2;
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_GET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x18AF0250)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18AF0480)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18AF03F0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_41A65CD6A0F4418F_OFFSET UNITYSDK_OFFSET(0x18AEFA00)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x18AF0540)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_7B12DCDC7C0C0CFC_OFFSET UNITYSDK_OFFSET(0x18AEFCB0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_E1FD4DD6CA52AE1F_OFFSET UNITYSDK_OFFSET(0x18AEF450)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_SET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x18AF02F0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF0300)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLineLightingV2_TypeDefinitionIndex = 85298;

	class ESLineLightingV2 : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::LineLightingV2* m_stLightingCom; // 0x58
		::UnityEngine::LineRenderer* m_stLineRenderer; // 0x60
		::MoleMole::EffectSimulate::FloatKeyframeCurve* lineWidth; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_E1FD4DD6CA52AE1F(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_E1FD4DD6CA52AE1F_OFFSET))(this, a1);
		}

		::System::Void Method_3_41A65CD6A0F4418F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_41A65CD6A0F4418F_OFFSET))(this, a1);
		}

		::System::Void Method_3_7B12DCDC7C0C0CFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_7B12DCDC7C0C0CFC_OFFSET))(this, a1);
		}

		::LineLightingV2* get_wrapperComShower()
		{
			return ((::LineLightingV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_GET_WRAPPERCOMSHOWER_OFFSET))(this);
		}

		::System::Void set_wrapperComShower(::LineLightingV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LineLightingV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_SET_WRAPPERCOMSHOWER_OFFSET))(this, a1);
		}

		::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTINGV2_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}
	};
}
