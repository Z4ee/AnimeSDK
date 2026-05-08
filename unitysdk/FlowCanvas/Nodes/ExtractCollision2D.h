#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_5.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_EXTRACTCOLLISION2D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B3242A0)
#define FLOWCANVAS_NODES_EXTRACTCOLLISION2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3243F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractCollision2D_TypeDefinitionIndex = 28100;

	class ExtractCollision2D : public ::FlowCanvas::Nodes::ExtractorNode_5<::UnityEngine::Collision2D*, ::Il2CppArray<::UnityEngine::ContactPoint2D>*, ::UnityEngine::ContactPoint2D, ::UnityEngine::GameObject*, ::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCOLLISION2D__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Collision2D* collision, ::Il2CppArray<::UnityEngine::ContactPoint2D>*& contacts, ::UnityEngine::ContactPoint2D& firstContact, ::UnityEngine::GameObject*& gameObject, ::UnityEngine::Vector2& velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*, ::Il2CppArray<::UnityEngine::ContactPoint2D>*&, ::UnityEngine::ContactPoint2D&, ::UnityEngine::GameObject*&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCOLLISION2D_INVOKE_OFFSET))(this, collision, contacts, firstContact, gameObject, velocity);
		}
	};
}
