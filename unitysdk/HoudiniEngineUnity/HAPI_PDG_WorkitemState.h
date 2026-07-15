#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PDG_WorkItemState_TypeDefinitionIndex = 38330;

	enum class HAPI_PDG_WorkItemState : ::System::Int32
	{
		HAPI_PDG_WORKITEM_UNDEFINED = 0,
		HAPI_PDG_WORKITEM_UNCOOKED = 1,
		HAPI_PDG_WORKITEM_WAITING = 2,
		HAPI_PDG_WORKITEM_SCHEDULED = 3,
		HAPI_PDG_WORKITEM_COOKING = 4,
		HAPI_PDG_WORKITEM_COOKED_SUCCESS = 5,
		HAPI_PDG_WORKITEM_COOKED_CACHE = 6,
		HAPI_PDG_WORKITEM_COOKED_FAIL = 7,
		HAPI_PDG_WORKITEM_COOKED_CANCEL = 8,
		HAPI_PDG_WORKITEM_DIRTY = 9,
	};
}
