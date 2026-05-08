#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15416C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x15416D00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShootGameGetScore_TypeDefinitionIndex = 75229;

	class LDShootGameGetScore : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
