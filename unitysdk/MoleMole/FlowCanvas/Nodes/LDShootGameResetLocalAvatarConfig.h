#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG_PROCESS_OFFSET UNITYSDK_OFFSET(0x10BAA8A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10BAA7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10BAACF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShootGameResetLocalAvatarConfig_TypeDefinitionIndex = 38014;

	class LDShootGameResetLocalAvatarConfig : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMERESETLOCALAVATARCONFIG_PROCESS_OFFSET))(this, f);
		}
	};
}
