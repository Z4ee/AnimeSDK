#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/CallbackAttribute.h"

#define FLOWCANVAS_FLOWNODE_GATHERPORTSCALLBACKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E720D80)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode_GatherPortsCallbackAttribute_TypeDefinitionIndex = 31242;

	class FlowNode_GatherPortsCallbackAttribute : public ::ParadoxNotion::Design::CallbackAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GATHERPORTSCALLBACKATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
