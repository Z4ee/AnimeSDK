#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BB78B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB79E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BabelTower_GetCurFloorData_TypeDefinitionIndex = 44600;

	class LD_BabelTower_GetCurFloorData : public ::FlowCanvas::Nodes::PureFunctionNode_1<::MoleMole::Project::Config::BabelFloorInfoTemplateExt*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* Invoke()
		{
			return ((::MoleMole::Project::Config::BabelFloorInfoTemplateExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORDATA_INVOKE_OFFSET))(this);
		}
	};
}
