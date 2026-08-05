#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class TweenFloat; }

#define FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E7A82B0)
#define FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7A84B0)
#define FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7A8510)
#define FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E7A84C0)
#define FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7A82A0)
#define FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A8290)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenFloat__Invoke_d__4_TypeDefinitionIndex = 31211;

	class TweenFloat__Invoke_d__4 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::FlowCanvas::Nodes::TweenFloat* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single duration; // 0x24
		::System::Single to; // 0x28
		::System::Single _t_5__2; // 0x2C
		::System::Single from; // 0x30
		::ParadoxNotion::Animation::EaseType interpolation; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENFLOAT__INVOKE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
