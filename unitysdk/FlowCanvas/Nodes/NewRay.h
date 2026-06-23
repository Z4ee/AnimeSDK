#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_NEWRAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5330D0)
#define FLOWCANVAS_NODES_NEWRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D533170)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewRay_TypeDefinitionIndex = 29949;

	class NewRay : public ::FlowCanvas::Nodes::PureFunctionNode_3<::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWRAY__CTOR_OFFSET))(this);
		}

		::UnityEngine::Ray Invoke(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWRAY_INVOKE_OFFSET))(this, origin, direction);
		}
	};
}
