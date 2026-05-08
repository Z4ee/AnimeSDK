#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"
#include "unitysdk/MoleMole/BabelTowerTemplateOverrideData.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOOROVERRIDEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BB7A00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOOROVERRIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB7BD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BabelTower_GetCurFloorOverrideData_TypeDefinitionIndex = 61896;

	class LD_BabelTower_GetCurFloorOverrideData : public ::FlowCanvas::Nodes::PureFunctionNode_1<::MoleMole::BabelTowerTemplateOverrideData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOOROVERRIDEDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::BabelTowerTemplateOverrideData Invoke()
		{
			return ((::MoleMole::BabelTowerTemplateOverrideData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOOROVERRIDEDATA_INVOKE_OFFSET))(this);
		}
	};
}
