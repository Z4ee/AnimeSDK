#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_65390B67EF8301C5.h"
#include "unitysdk/Enum_3_6D746669983E39EA.h"
#include "unitysdk/MoleMole/EffectSimulate/IEvaluateCurve_1.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Keyframeable01Curve_1_TypeDefinitionIndex = 88557;

	template <typename T>
	class Keyframeable01Curve_1 : public ::MoleMole::EffectSimulate::IEvaluateCurve_1<T>
	{
	public:
		// static const ::System::String* HOR_GROUP_NAME; // 0x0
		::MoleMole::EffectSimulate::ESAvatarMatChange* m_stAMCParent; // 0x0
		::System::Boolean m_bShowRuntimeDefaultVal; // 0x0
		T runtimeDefaultVal; // 0x0
		::System::String* propName; // 0x0
	};
}
