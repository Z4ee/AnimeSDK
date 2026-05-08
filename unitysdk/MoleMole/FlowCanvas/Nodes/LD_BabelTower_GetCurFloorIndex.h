#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1174E290)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1174E3C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BabelTower_GetCurFloorIndex_TypeDefinitionIndex = 80740;

	class LD_BabelTower_GetCurFloorIndex : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORINDEX_INVOKE_OFFSET))(this);
		}
	};
}
