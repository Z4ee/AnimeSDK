#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas::Nodes { class TweenPosition; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D6DEF30)
#define FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D6DF250)
#define FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D6DF2B0)
#define FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D6DF260)
#define FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D6DEF20)
#define FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DEF10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenPosition__Invoke_d__0_TypeDefinitionIndex = 30687;

	class TweenPosition__Invoke_d__0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::FlowCanvas::Nodes::TweenPosition* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single _t_5__2; // 0x28
		::UnityEngine::Vector3 position; // 0x2C
		::UnityEngine::Vector3 _from_5__3; // 0x38
		::System::Boolean relative; // 0x44
		::ParadoxNotion::Animation::EaseType interpolation; // 0x48
		::System::Int32 __1__state; // 0x4C
		::System::Single duration; // 0x50

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENPOSITION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
