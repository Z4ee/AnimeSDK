#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB88040)
#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB88080)
#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL___C__ONEXECUTE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EB88090)
#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL___C__ONEXECUTE_B__7_1_OFFSET UNITYSDK_OFFSET(0x1EB88140)
#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL___C__ONEXECUTE_B__7_3_OFFSET UNITYSDK_OFFSET(0x1EB88150)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetLinecastInfo2DAll___c_TypeDefinitionIndex = 30308;

	class GetLinecastInfo2DAll___c : public ::System::Object
	{
	public:
		static ::NodeCanvas::Tasks::Actions::GetLinecastInfo2DAll___c** StaticGet___9()
		{
			return (::NodeCanvas::Tasks::Actions::GetLinecastInfo2DAll___c**)Il2CppClass::FromTypeDefinitionIndex(GetLinecastInfo2DAll___c_TypeDefinitionIndex)->GetStaticField(0x25790);
		}
		static ::System::Func_2<::UnityEngine::RaycastHit2D, ::UnityEngine::GameObject*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::UnityEngine::RaycastHit2D, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(GetLinecastInfo2DAll___c_TypeDefinitionIndex)->GetStaticField(0x25798);
		}
		static ::System::Func_2<::UnityEngine::RaycastHit2D, ::UnityEngine::Vector3>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::UnityEngine::RaycastHit2D, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(GetLinecastInfo2DAll___c_TypeDefinitionIndex)->GetStaticField(0x257A0);
		}
		static ::System::Func_2<::UnityEngine::RaycastHit2D, ::System::Single>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::UnityEngine::RaycastHit2D, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GetLinecastInfo2DAll___c_TypeDefinitionIndex)->GetStaticField(0x257A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* _OnExecute_b__7_0(::UnityEngine::RaycastHit2D h)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::RaycastHit2D))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL___C__ONEXECUTE_B__7_0_OFFSET))(this, h);
		}

		::System::Single _OnExecute_b__7_1(::UnityEngine::RaycastHit2D h)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RaycastHit2D))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL___C__ONEXECUTE_B__7_1_OFFSET))(this, h);
		}

		::UnityEngine::Vector3 _OnExecute_b__7_3(::UnityEngine::RaycastHit2D h)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::RaycastHit2D))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL___C__ONEXECUTE_B__7_3_OFFSET))(this, h);
		}
	};
}
