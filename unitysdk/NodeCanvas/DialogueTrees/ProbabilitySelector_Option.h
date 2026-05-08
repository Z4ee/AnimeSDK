#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }

#define NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_OPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B45A870)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int ProbabilitySelector_Option_TypeDefinitionIndex = 28111;

	class ProbabilitySelector_Option : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* weight; // 0x10
		::NodeCanvas::Framework::ConditionTask* condition; // 0x18

		::System::Void _ctor(::System::Single weightValue, ::NodeCanvas::Framework::IBlackboard* bbValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROBABILITYSELECTOR_OPTION__CTOR_OFFSET))(this, weightValue, bbValue);
		}
	};
}
