#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NODECANVAS_FRAMEWORK_NODE_AUTOSORTWITHCHILDRENCONNECTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB98100)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Node_AutoSortWithChildrenConnections_TypeDefinitionIndex = 30206;

	class Node_AutoSortWithChildrenConnections : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_AUTOSORTWITHCHILDRENCONNECTIONS__CTOR_OFFSET))(this);
		}
	};
}
