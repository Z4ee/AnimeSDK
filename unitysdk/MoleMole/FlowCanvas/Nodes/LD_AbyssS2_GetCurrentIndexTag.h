#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTINDEXTAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BB6620)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTINDEXTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB6750)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetCurrentIndexTag_TypeDefinitionIndex = 71924;

	class LD_AbyssS2_GetCurrentIndexTag : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTINDEXTAG__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::AreaIDTag Invoke()
		{
			return ((::MoleMole::FlowCanvas::Nodes::AreaIDTag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTINDEXTAG_INVOKE_OFFSET))(this);
		}
	};
}
