#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_6.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_EXTRACTRAYCASTHIT2D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D81CED0)
#define FLOWCANVAS_NODES_EXTRACTRAYCASTHIT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81D1C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractRaycastHit2D_TypeDefinitionIndex = 29427;

	class ExtractRaycastHit2D : public ::FlowCanvas::Nodes::ExtractorNode_6<::UnityEngine::RaycastHit2D, ::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTRAYCASTHIT2D__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::RaycastHit2D hit, ::UnityEngine::GameObject*& gameObject, ::System::Single& distance, ::System::Single& fraction, ::UnityEngine::Vector3& normal, ::UnityEngine::Vector3& point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit2D, ::UnityEngine::GameObject*&, ::System::Single&, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTRAYCASTHIT2D_INVOKE_OFFSET))(this, hit, gameObject, distance, fraction, normal, point);
		}
	};
}
