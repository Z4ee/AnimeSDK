#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_5.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define FLOWCANVAS_NODES_NEWQUATERNION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C61FB80)
#define FLOWCANVAS_NODES_NEWQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C61FBB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewQuaternion_TypeDefinitionIndex = 29682;

	class NewQuaternion : public ::FlowCanvas::Nodes::PureFunctionNode_5<::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWQUATERNION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion Invoke(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWQUATERNION_INVOKE_OFFSET))(this, x, y, z, w);
		}
	};
}
