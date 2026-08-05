#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

namespace MoleMole::Project::Config { class MechaConfigTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETCURSCRIPTCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DB3BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETCURSCRIPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB3C10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMechBooGetCurScriptConfig_TypeDefinitionIndex = 83281;

	class LDMechBooGetCurScriptConfig : public ::FlowCanvas::Nodes::PureFunctionNode_1<::MoleMole::Project::Config::MechaConfigTemplateExt*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETCURSCRIPTCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Project::Config::MechaConfigTemplateExt* Invoke()
		{
			return ((::MoleMole::Project::Config::MechaConfigTemplateExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETCURSCRIPTCONFIG_INVOKE_OFFSET))(this);
		}
	};
}
