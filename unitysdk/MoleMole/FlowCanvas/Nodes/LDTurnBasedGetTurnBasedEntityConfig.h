#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::Project::Config { class TurnBasedEntityTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETTURNBASEDENTITYCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B1A4D00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETTURNBASEDENTITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A4D70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetTurnBasedEntityConfig_TypeDefinitionIndex = 64851;

	class LDTurnBasedGetTurnBasedEntityConfig : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::Project::Config::TurnBasedEntityTemplateExt*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETTURNBASEDENTITYCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Project::Config::TurnBasedEntityTemplateExt* Invoke(::System::Int32 id)
		{
			return ((::MoleMole::Project::Config::TurnBasedEntityTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETTURNBASEDENTITYCONFIG_INVOKE_OFFSET))(this, id);
		}
	};
}
