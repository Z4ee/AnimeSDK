#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections { class IList; }

#define NODECANVAS_TASKS_CONDITIONS_LISTISEMPTY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E6DFCB0)
#define NODECANVAS_TASKS_CONDITIONS_LISTISEMPTY_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E6DFD20)
#define NODECANVAS_TASKS_CONDITIONS_LISTISEMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DFE20)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int ListIsEmpty_TypeDefinitionIndex = 30764;

	class ListIsEmpty : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::IList*>* targetList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_LISTISEMPTY__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_LISTISEMPTY_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_LISTISEMPTY_ONCHECK_OFFSET))(this);
		}
	};
}
