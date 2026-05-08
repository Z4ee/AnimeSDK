#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0F7120)
#define NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F7160)
#define NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS___C__ONEXECUTE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B0F7170)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetAllChildGameObjects___c_TypeDefinitionIndex = 27723;

	class GetAllChildGameObjects___c : public ::System::Object
	{
	public:
		static ::NodeCanvas::Tasks::Actions::GetAllChildGameObjects___c** StaticGet___9()
		{
			return (::NodeCanvas::Tasks::Actions::GetAllChildGameObjects___c**)Il2CppClass::FromTypeDefinitionIndex(GetAllChildGameObjects___c_TypeDefinitionIndex)->GetStaticField(0x1FA70);
		}
		static ::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(GetAllChildGameObjects___c_TypeDefinitionIndex)->GetStaticField(0x1FA78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* _OnExecute_b__4_0(::UnityEngine::Transform* t)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS___C__ONEXECUTE_B__4_0_OFFSET))(this, t);
		}
	};
}
