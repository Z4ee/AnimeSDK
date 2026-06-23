#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas::Nodes { class TweenScale; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D534590)
#define FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D5348A0)
#define FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D534900)
#define FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D5348B0)
#define FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D534580)
#define FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D534570)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenScale__Invoke_d__0_TypeDefinitionIndex = 30781;

	class TweenScale__Invoke_d__0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Object* __2__current; // 0x18
		::FlowCanvas::Nodes::TweenScale* __4__this; // 0x20
		::UnityEngine::Vector3 scale; // 0x28
		::ParadoxNotion::Animation::EaseType interpolation; // 0x34
		::System::Int32 __1__state; // 0x38
		::System::Boolean relative; // 0x3C
		::UnityEngine::Vector3 _from_5__3; // 0x40
		::System::Single _t_5__2; // 0x4C
		::System::Single duration; // 0x50

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENSCALE__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
