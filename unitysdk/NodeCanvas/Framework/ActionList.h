#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionList_ActionsExecutionMode.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework { class Task; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_FRAMEWORK_ACTIONLIST_ADDACTION_OFFSET UNITYSDK_OFFSET(0x1EBBB3F0)
#define NODECANVAS_FRAMEWORK_ACTIONLIST_DUPLICATE_OFFSET UNITYSDK_OFFSET(0x1EBBB200)
#define NODECANVAS_FRAMEWORK_ACTIONLIST_GETWARNINGORERROR_OFFSET UNITYSDK_OFFSET(0x1EBBBD90)
#define NODECANVAS_FRAMEWORK_ACTIONLIST_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EBBB060)
#define NODECANVAS_FRAMEWORK_ACTIONLIST_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1EBBBD00)
#define NODECANVAS_FRAMEWORK_ACTIONLIST_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EBBB5D0)
#define NODECANVAS_FRAMEWORK_ACTIONLIST_ONINIT_OFFSET UNITYSDK_OFFSET(0x1EBBB570)
#define NODECANVAS_FRAMEWORK_ACTIONLIST_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EBBBC60)
#define NODECANVAS_FRAMEWORK_ACTIONLIST_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1EBBBBB0)
#define NODECANVAS_FRAMEWORK_ACTIONLIST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EBBB680)
#define NODECANVAS_FRAMEWORK_ACTIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBBE30)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ActionList_TypeDefinitionIndex = 30768;

	class ActionList : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::ActionTask*>* actions; // 0x60
		::Il2CppArray<::System::Boolean>* finishedIndeces; // 0x68
		::NodeCanvas::Framework::ActionList_ActionsExecutionMode executionMode; // 0x70
		::System::Int32 currentActionIndex; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST_GET_INFO_OFFSET))(this);
		}

		::NodeCanvas::Framework::Task* Duplicate(::NodeCanvas::Framework::ITaskSystem* newOwnerSystem)
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST_DUPLICATE_OFFSET))(this, newOwnerSystem);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST_ONSTOP_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void AddAction(::NodeCanvas::Framework::ActionTask* action)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ActionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST_ADDACTION_OFFSET))(this, action);
		}

		::System::String* GetWarningOrError()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONLIST_GETWARNINGORERROR_OFFSET))(this);
		}
	};
}
