#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

class LineLighting;
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_GET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x1B505FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1B506190)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1B506250)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_41A65CD6A0F4418F_OFFSET UNITYSDK_OFFSET(0x1B5057A0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x1B5062E0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_7B12DCDC7C0C0CFC_OFFSET UNITYSDK_OFFSET(0x1B505A50)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_E1FD4DD6CA52AE1F_OFFSET UNITYSDK_OFFSET(0x1B5051F0)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_SET_WRAPPERCOMSHOWER_OFFSET UNITYSDK_OFFSET(0x1B506090)
#define MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5060A0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLineLighting_TypeDefinitionIndex = 43551;

	class ESLineLighting : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::LineLighting* m_stLightingCom; // 0x58
		::UnityEngine::LineRenderer* m_stLineRenderer; // 0x60
		::MoleMole::EffectSimulate::FloatKeyframeCurve* lineWidth; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_E1FD4DD6CA52AE1F(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_E1FD4DD6CA52AE1F_OFFSET))(this, a1);
		}

		::System::Void Method_3_41A65CD6A0F4418F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_41A65CD6A0F4418F_OFFSET))(this, a1);
		}

		::System::Void Method_3_7B12DCDC7C0C0CFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_7B12DCDC7C0C0CFC_OFFSET))(this, a1);
		}

		::LineLighting* get_wrapperComShower()
		{
			return ((::LineLighting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_GET_WRAPPERCOMSHOWER_OFFSET))(this);
		}

		::System::Void set_wrapperComShower(::LineLighting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LineLighting*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_SET_WRAPPERCOMSHOWER_OFFSET))(this, a1);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLINELIGHTING_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}
	};
}
