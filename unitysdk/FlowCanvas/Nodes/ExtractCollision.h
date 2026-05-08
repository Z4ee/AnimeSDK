#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_5.h"
#include "unitysdk/UnityEngine/ContactPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_EXTRACTCOLLISION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADADC20)
#define FLOWCANVAS_NODES_EXTRACTCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADADD70)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractCollision_TypeDefinitionIndex = 27598;

	class ExtractCollision : public ::FlowCanvas::Nodes::ExtractorNode_5<::UnityEngine::Collision*, ::Il2CppArray<::UnityEngine::ContactPoint>*, ::UnityEngine::ContactPoint, ::UnityEngine::GameObject*, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCOLLISION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Collision* collision, ::Il2CppArray<::UnityEngine::ContactPoint>*& contacts, ::UnityEngine::ContactPoint& firstContact, ::UnityEngine::GameObject*& gameObject, ::UnityEngine::Vector3& velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*, ::Il2CppArray<::UnityEngine::ContactPoint>*&, ::UnityEngine::ContactPoint&, ::UnityEngine::GameObject*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCOLLISION_INVOKE_OFFSET))(this, collision, contacts, firstContact, gameObject, velocity);
		}
	};
}
