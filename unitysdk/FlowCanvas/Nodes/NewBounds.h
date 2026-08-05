#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_NEWBOUNDS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E6CBB40)
#define FLOWCANVAS_NODES_NEWBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CBB80)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewBounds_TypeDefinitionIndex = 30479;

	class NewBounds : public ::FlowCanvas::Nodes::PureFunctionNode_3<::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWBOUNDS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds Invoke(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWBOUNDS_INVOKE_OFFSET))(this, center, size);
		}
	};
}
