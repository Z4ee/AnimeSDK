#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D746669983E39EA.h"
#include "unitysdk/Enum_3_7C181D7C1FDFA7A2.h"
#include "unitysdk/MoleMole/EffectSimulate/IEvaluateCurve.h"
#include "unitysdk/MoleMole/EffectSimulate/IEvaluateCurve_Enum_3_BFB35EE97486F14C.h"

namespace MoleMole::EffectSimulate { class ESLoopable; }
namespace MoleMole::EffectSimulate { class IEvaluateCurve_Class_1_3ABCC41A05D06339; }
namespace MoleMole::EffectSimulate { template <typename T> class IEvaluateCurve_1; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int IEvaluateCurve_1_TypeDefinitionIndex = 59968;

	template <typename T>
	class IEvaluateCurve_1 : public ::MoleMole::EffectSimulate::IEvaluateCurve
	{
	public:
		static T* StaticGet_INVALID_VAL()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(IEvaluateCurve_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Enum_3_7C181D7C1FDFA7A2 blendMode; // 0x0
		::MoleMole::EffectSimulate::IEvaluateCurve_Enum_3_BFB35EE97486F14C fadeOutCurveStrategy; // 0x0
		::System::Boolean forceNoLerpWhenEnterFadeOut; // 0x0
		::MoleMole::EffectSimulate::IEvaluateCurve_1<T>* m_stPre; // 0x0
		::MoleMole::EffectSimulate::IEvaluateCurve_1<T>* m_stNext; // 0x0
		::System::Single m_fThisDuration; // 0x0
		::System::Single m_fPreDuration; // 0x0
		::System::Single m_fNextDuration; // 0x0
		::System::Boolean m_bIsCompleteCurve; // 0x0
		::System::Boolean m_bIsLooping; // 0x0
		::MoleMole::EffectSimulate::IEvaluateCurve_1<T>* m_stFadeIn; // 0x0
		::MoleMole::EffectSimulate::IEvaluateCurve_1<T>* m_stNormal; // 0x0
		::MoleMole::EffectSimulate::IEvaluateCurve_1<T>* m_stFadeOut; // 0x0
		::MoleMole::EffectSimulate::IEvaluateCurve_1<T>* m_stCompleteCurve; // 0x0
		::MoleMole::EffectSimulate::ESLoopable* m_stParent; // 0x0
	};
}
