#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas::Nodes { class TweenVector3; }

#define FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D534930)
#define FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D534AD0)
#define FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D534B30)
#define FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D534AE0)
#define FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D534920)
#define FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D534910)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenVector3__Invoke_d__4_TypeDefinitionIndex = 30648;

	class TweenVector3__Invoke_d__4 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::FlowCanvas::Nodes::TweenVector3* __4__this; // 0x18
		::ParadoxNotion::Animation::EaseType interpolation; // 0x20
		::UnityEngine::Vector3 from; // 0x24
		::System::Single _t_5__2; // 0x30
		::UnityEngine::Vector3 to; // 0x34
		::System::Int32 __1__state; // 0x40
		::System::Single duration; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENVECTOR3__INVOKE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
