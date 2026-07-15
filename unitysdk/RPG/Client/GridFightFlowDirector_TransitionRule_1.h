#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_TransitionRule_1_TypeDefinitionIndex = 61683;

	template <typename T>
	class GridFightFlowDirector_TransitionRule_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightFlowDirector_IFlowState* _TargetState_k__BackingField; // 0x0
		::System::Object* _Param_k__BackingField; // 0x0
		::System::Predicate_1<T>* _Predicate; // 0x0
	};
}
