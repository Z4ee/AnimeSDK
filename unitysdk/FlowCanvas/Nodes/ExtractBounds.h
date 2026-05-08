#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_6.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_EXTRACTBOUNDS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F5030)
#define FLOWCANVAS_NODES_EXTRACTBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F50C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractBounds_TypeDefinitionIndex = 27822;

	class ExtractBounds : public ::FlowCanvas::Nodes::ExtractorNode_6<::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTBOUNDS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Bounds bounds, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& extents, ::UnityEngine::Vector3& max, ::UnityEngine::Vector3& min, ::UnityEngine::Vector3& size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTBOUNDS_INVOKE_OFFSET))(this, bounds, center, extents, max, min, size);
		}
	};
}
