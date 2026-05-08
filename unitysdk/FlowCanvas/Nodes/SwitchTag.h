#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_SWITCHTAG_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B325630)
#define FLOWCANVAS_NODES_SWITCHTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B325840)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchTag_TypeDefinitionIndex = 26650;

	class SwitchTag : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::System::String*>* _tagNames; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHTAG__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHTAG_REGISTERPORTS_OFFSET))(this);
		}
	};
}
