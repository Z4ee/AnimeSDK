#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ChoiceListType_TypeDefinitionIndex = 38302;

	enum class HAPI_ChoiceListType : ::System::Int32
	{
		HAPI_CHOICELISTTYPE_NONE = 0,
		HAPI_CHOICELISTTYPE_NORMAL = 1,
		HAPI_CHOICELISTTYPE_MINI = 2,
		HAPI_CHOICELISTTYPE_REPLACE = 3,
		HAPI_CHOICELISTTYPE_TOGGLE = 4,
	};
}
