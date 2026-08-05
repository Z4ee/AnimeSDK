#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class ActionNode; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EBBACA0)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBBAFF0)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBBB050)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EBBB000)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBBAC90)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBAC80)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int ActionNode__UpdateAction_d__10_TypeDefinitionIndex = 31113;

	class ActionNode__UpdateAction_d__10 : public ::System::Object
	{
	public:
		::UnityEngine::Component* actionAgent; // 0x10
		::NodeCanvas::DialogueTrees::ActionNode* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE__UPDATEACTION_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
