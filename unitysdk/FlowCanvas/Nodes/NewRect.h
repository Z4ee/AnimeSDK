#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_5.h"
#include "unitysdk/UnityEngine/Rect.h"

#define FLOWCANVAS_NODES_NEWRECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7E2170)
#define FLOWCANVAS_NODES_NEWRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E21A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewRect_TypeDefinitionIndex = 27171;

	class NewRect : public ::FlowCanvas::Nodes::PureFunctionNode_5<::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWRECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rect Invoke(::System::Single left, ::System::Single top, ::System::Single width, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWRECT_INVOKE_OFFSET))(this, left, top, width, height);
		}
	};
}
