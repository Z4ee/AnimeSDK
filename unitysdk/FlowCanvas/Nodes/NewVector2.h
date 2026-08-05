#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FLOWCANVAS_NODES_NEWVECTOR2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EA933B0)
#define FLOWCANVAS_NODES_NEWVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA933C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewVector2_TypeDefinitionIndex = 30162;

	class NewVector2 : public ::FlowCanvas::Nodes::PureFunctionNode_3<::UnityEngine::Vector2, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWVECTOR2__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 Invoke(::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWVECTOR2_INVOKE_OFFSET))(this, x, y);
		}
	};
}
