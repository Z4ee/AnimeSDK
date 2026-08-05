#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAF2F80)
#define NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF2FC0)
#define NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS___C__ONEXECUTE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1DAF2FD0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetOverlapSphereObjects___c_TypeDefinitionIndex = 30876;

	class GetOverlapSphereObjects___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Collider*, ::UnityEngine::GameObject*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::UnityEngine::Collider*, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(GetOverlapSphereObjects___c_TypeDefinitionIndex)->GetStaticField(0x253F0);
		}
		static ::NodeCanvas::Tasks::Actions::GetOverlapSphereObjects___c** StaticGet___9()
		{
			return (::NodeCanvas::Tasks::Actions::GetOverlapSphereObjects___c**)Il2CppClass::FromTypeDefinitionIndex(GetOverlapSphereObjects___c_TypeDefinitionIndex)->GetStaticField(0x253F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* _OnExecute_b__3_0(::UnityEngine::Collider* c)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS___C__ONEXECUTE_B__3_0_OFFSET))(this, c);
		}
	};
}
