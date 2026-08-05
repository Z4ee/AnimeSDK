#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_3.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_EXTRACTRAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF891D0)
#define FLOWCANVAS_NODES_EXTRACTRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF891F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractRay_TypeDefinitionIndex = 30198;

	class ExtractRay : public ::FlowCanvas::Nodes::ExtractorNode_3<::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTRAY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Ray ray, ::UnityEngine::Vector3& origin, ::UnityEngine::Vector3& direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTRAY_INVOKE_OFFSET))(this, ray, origin, direction);
		}
	};
}
