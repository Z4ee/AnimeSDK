#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_2_DE63F91C3C802C47;

#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18B247D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B24B20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadBlockConfig_TypeDefinitionIndex = 41967;

	class LDReadBlockConfig : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Class_2_DE63F91C3C802C47* template_; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG_REGISTERPORTS_OFFSET))(this);
		}
	};
}
