#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define FLOWCANVAS_FLOWNODE_HASREFRESHBUTTONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E533A30)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode_HasRefreshButtonAttribute_TypeDefinitionIndex = 31240;

	class FlowNode_HasRefreshButtonAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_HASREFRESHBUTTONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
