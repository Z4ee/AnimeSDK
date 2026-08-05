#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::Project::Config { class AbyssS2SuddenEventTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYSUDDENEVENTCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A041B70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYSUDDENEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A041BE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbyssS2QuerySuddenEventConfig_TypeDefinitionIndex = 71247;

	class LDAbyssS2QuerySuddenEventConfig : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::Project::Config::AbyssS2SuddenEventTemplateExt*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYSUDDENEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Project::Config::AbyssS2SuddenEventTemplateExt* Invoke(::System::Int32 suddenEventID)
		{
			return ((::MoleMole::Project::Config::AbyssS2SuddenEventTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYSUDDENEVENTCONFIG_INVOKE_OFFSET))(this, suddenEventID);
		}
	};
}
