#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas::Nodes { class TweenRotation; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E5380C0)
#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E538620)
#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E538680)
#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E538630)
#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5380B0)
#define FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5380A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenRotation__Invoke_d__0_TypeDefinitionIndex = 30059;

	class TweenRotation__Invoke_d__0 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::FlowCanvas::Nodes::TweenRotation* __4__this; // 0x18
		::UnityEngine::Transform* transform; // 0x20
		::System::Int32 __1__state; // 0x28
		::ParadoxNotion::Animation::EaseType interpolation; // 0x2C
		::System::Single _t_5__2; // 0x30
		::UnityEngine::Vector3 _from_5__3; // 0x34
		::System::Boolean relative; // 0x40
		::UnityEngine::Vector3 rotation; // 0x44
		::System::Single duration; // 0x50

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENROTATION__INVOKE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
