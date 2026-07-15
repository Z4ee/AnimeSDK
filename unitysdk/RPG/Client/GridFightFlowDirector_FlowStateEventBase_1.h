#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_FlowStateEventBase_1_TypeDefinitionIndex = 61653;

	template <typename T>
	class GridFightFlowDirector_FlowStateEventBase_1 : public ::System::Object
	{
	public:
		static T* StaticGet__Instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_FlowStateEventBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
