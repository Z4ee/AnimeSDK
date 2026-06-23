#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_5.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define FLOWCANVAS_NODES_NEWVECTOR4_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7B8CA0)
#define FLOWCANVAS_NODES_NEWVECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8CD0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewVector4_TypeDefinitionIndex = 29381;

	class NewVector4 : public ::FlowCanvas::Nodes::PureFunctionNode_5<::UnityEngine::Vector4, ::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWVECTOR4__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 Invoke(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWVECTOR4_INVOKE_OFFSET))(this, x, y, z, w);
		}
	};
}
