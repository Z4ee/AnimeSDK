#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_3.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable_2.h"
#include "unitysdk/UnityEngine/NAPBatch/BatchItemValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMatAnimBehavior_2_TypeDefinitionIndex = 82346;

	template <typename EvaluateCurveType, typename ValType>
	class ESMatAnimBehavior_2 : public ::MoleMole::EffectSimulate::ESLoopable_2<EvaluateCurveType, ValType>
	{
	public:
		ValType m_JobValCache; // 0x0
		::System::Boolean m_bValChanged; // 0x0
		::System::Boolean m_bHasSetVal; // 0x0
		::System::Int32 m_iMatPropID; // 0x0
		::System::Boolean m_bHasCachedBaseVal; // 0x0
		ValType m_BaseValCache; // 0x0
		::System::Boolean driveChildren; // 0x0
		::System::String* propertyName; // 0x0
		::System::Boolean overrideMatBase; // 0x0
		::System::Boolean _needSetMatVal_k__BackingField; // 0x0
	};
}
