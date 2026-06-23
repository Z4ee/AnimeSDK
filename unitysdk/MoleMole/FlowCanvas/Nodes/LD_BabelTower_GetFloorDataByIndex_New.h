#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_NEW_INVOKE_OFFSET UNITYSDK_OFFSET(0x116120B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_NEW__CTOR_OFFSET UNITYSDK_OFFSET(0x11612250)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BabelTower_GetFloorDataByIndex_New_TypeDefinitionIndex = 40749;

	class LD_BabelTower_GetFloorDataByIndex_New : public ::FlowCanvas::Nodes::PureFunctionNode_2<::MoleMole::Project::Config::BabelFloorInfoTemplateExt*, ::System::UInt32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_NEW__CTOR_OFFSET))(this);
		}

		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* Invoke(::System::UInt32 floorIndex)
		{
			return ((::MoleMole::Project::Config::BabelFloorInfoTemplateExt*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_NEW_INVOKE_OFFSET))(this, floorIndex);
		}
	};
}
