#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BB7BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB7D90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BabelTower_GetFloorDataByIndex_TypeDefinitionIndex = 71942;

	class LD_BabelTower_GetFloorDataByIndex : public ::FlowCanvas::Nodes::PureFunctionNode_2<::MoleMole::Project::Config::BabelFloorInfoTemplateExt*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX__CTOR_OFFSET))(this);
		}

		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* Invoke(::System::Int32 floorIndex)
		{
			return ((::MoleMole::Project::Config::BabelFloorInfoTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_INVOKE_OFFSET))(this, floorIndex);
		}
	};
}
