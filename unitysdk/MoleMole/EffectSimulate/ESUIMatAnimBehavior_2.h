#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable_2.h"

namespace MoleMole::EffectSimulate { class NESUIDataCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIMatAnimBehavior_2_TypeDefinitionIndex = 74673;

	template <typename EvaluateCurveType, typename ValType>
	class ESUIMatAnimBehavior_2 : public ::MoleMole::EffectSimulate::ESLoopable_2<EvaluateCurveType, ValType>
	{
	public:
		::UnityEngine::CanvasRenderer* m_stCanvasRenderer; // 0x0
		::UnityEngine::Material* m_stMat; // 0x0
		::MoleMole::EffectSimulate::NESUIDataCache* m_stUIDataCache; // 0x0
		::System::String* propertyName; // 0x0
		::System::Boolean overrideMatBase; // 0x0
	};
}
