#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E39C36FBA306E1C1_Enum_3_8767FBC4C6EBBF34.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABILITIESCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x16039A10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABILITIESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16039C40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbilitiesConfig_TypeDefinitionIndex = 77394;

	class LDAbilitiesConfig : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::MoleMole::Battle::Entity*, ::Class_2_E39C36FBA306E1C1_Enum_3_8767FBC4C6EBBF34, ::Il2CppArray<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABILITIESCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::Class_2_E39C36FBA306E1C1_Enum_3_8767FBC4C6EBBF34 type, ::Il2CppArray<::System::Int32>* abilityIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_E39C36FBA306E1C1_Enum_3_8767FBC4C6EBBF34, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABILITIESCONFIG_INVOKE_OFFSET))(this, entity, type, abilityIDs);
		}
	};
}
