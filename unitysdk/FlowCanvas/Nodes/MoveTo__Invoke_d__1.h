#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas::Nodes { class MoveTo; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define FLOWCANVAS_NODES_MOVETO__INVOKE_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D0577F0)
#define FLOWCANVAS_NODES_MOVETO__INVOKE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D057950)
#define FLOWCANVAS_NODES_MOVETO__INVOKE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D0579B0)
#define FLOWCANVAS_NODES_MOVETO__INVOKE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D057960)
#define FLOWCANVAS_NODES_MOVETO__INVOKE_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D0577E0)
#define FLOWCANVAS_NODES_MOVETO__INVOKE_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0577D0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MoveTo__Invoke_d__1_TypeDefinitionIndex = 30212;

	class MoveTo__Invoke_d__1 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::AI::NavMeshAgent* agent; // 0x18
		::FlowCanvas::Nodes::MoveTo* __4__this; // 0x20
		::UnityEngine::Vector3 destination; // 0x28
		::System::Int32 __1__state; // 0x34
		::System::Single stoppingDistance; // 0x38
		::System::Single speed; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOVETO__INVOKE_D__1__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOVETO__INVOKE_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOVETO__INVOKE_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOVETO__INVOKE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOVETO__INVOKE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOVETO__INVOKE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
