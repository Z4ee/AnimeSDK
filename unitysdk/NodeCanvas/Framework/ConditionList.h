#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionList_ConditionsCheckMode.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { class ITaskSystem; }
namespace NodeCanvas::Framework { class Task; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_FRAMEWORK_CONDITIONLIST_ADDCONDITION_OFFSET UNITYSDK_OFFSET(0x1D8231C0)
#define NODECANVAS_FRAMEWORK_CONDITIONLIST_DUPLICATE_OFFSET UNITYSDK_OFFSET(0x1D822FD0)
#define NODECANVAS_FRAMEWORK_CONDITIONLIST_GETWARNINGORERROR_OFFSET UNITYSDK_OFFSET(0x1D8238D0)
#define NODECANVAS_FRAMEWORK_CONDITIONLIST_GET_ALLTRUEREQUIRED_OFFSET UNITYSDK_OFFSET(0x1D822E70)
#define NODECANVAS_FRAMEWORK_CONDITIONLIST_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D822E80)
#define NODECANVAS_FRAMEWORK_CONDITIONLIST_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D8235E0)
#define NODECANVAS_FRAMEWORK_CONDITIONLIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D823530)
#define NODECANVAS_FRAMEWORK_CONDITIONLIST_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1D823840)
#define NODECANVAS_FRAMEWORK_CONDITIONLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D823340)
#define NODECANVAS_FRAMEWORK_CONDITIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D823970)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ConditionList_TypeDefinitionIndex = 29203;

	class ConditionList : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::ConditionTask*>* conditions; // 0x60
		::NodeCanvas::Framework::ConditionList_ConditionsCheckMode checkMode; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONLIST__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allTrueRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONLIST_GET_ALLTRUEREQUIRED_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONLIST_GET_INFO_OFFSET))(this);
		}

		::NodeCanvas::Framework::Task* Duplicate(::NodeCanvas::Framework::ITaskSystem* newOwnerSystem)
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID, ::NodeCanvas::Framework::ITaskSystem*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONLIST_DUPLICATE_OFFSET))(this, newOwnerSystem);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONLIST_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONLIST_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONLIST_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONLIST_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void AddCondition(::NodeCanvas::Framework::ConditionTask* condition)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ConditionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONLIST_ADDCONDITION_OFFSET))(this, condition);
		}

		::System::String* GetWarningOrError()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONDITIONLIST_GETWARNINGORERROR_OFFSET))(this);
		}
	};
}
