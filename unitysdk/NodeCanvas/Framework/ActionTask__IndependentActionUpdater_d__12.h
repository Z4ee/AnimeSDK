#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class ActionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D06C4A0)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D06C530)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D06C590)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D06C540)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D06C490)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06C480)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ActionTask__IndependentActionUpdater_d__12_TypeDefinitionIndex = 30897;

	class ActionTask__IndependentActionUpdater_d__12 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::ActionTask* __4__this; // 0x10
		::UnityEngine::Component* agent; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Action_1<::NodeCanvas::Framework::Status>* callback; // 0x28
		::NodeCanvas::Framework::IBlackboard* blackboard; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__INDEPENDENTACTIONUPDATER_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
