#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_NEWGAMEOBJECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBB5350)
#define FLOWCANVAS_NODES_NEWGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB5470)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewGameObject_TypeDefinitionIndex = 31019;

	class NewGameObject : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* Invoke(::System::String* name, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWGAMEOBJECT_INVOKE_OFFSET))(this, name, position, rotation);
		}
	};
}
