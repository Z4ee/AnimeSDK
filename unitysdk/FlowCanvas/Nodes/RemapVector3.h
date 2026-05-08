#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_6.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_REMAPVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADAF360)
#define FLOWCANVAS_NODES_REMAPVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAF410)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RemapVector3_TypeDefinitionIndex = 27570;

	class RemapVector3 : public ::FlowCanvas::Nodes::PureFunctionNode_6<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REMAPVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::System::Single current, ::System::Single iMin, ::System::Single iMax, ::UnityEngine::Vector3 oMin, ::UnityEngine::Vector3 oMax)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REMAPVECTOR3_INVOKE_OFFSET))(this, current, iMin, iMax, oMin, oMax);
		}
	};
}
