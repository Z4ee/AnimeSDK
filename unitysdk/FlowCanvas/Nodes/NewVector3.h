#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_NEWVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADAE080)
#define FLOWCANVAS_NODES_NEWVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAE0A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewVector3_TypeDefinitionIndex = 27727;

	class NewVector3 : public ::FlowCanvas::Nodes::PureFunctionNode_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWVECTOR3_INVOKE_OFFSET))(this, x, y, z);
		}
	};
}
