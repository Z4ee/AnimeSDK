#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections { class IList; }

#define NODECANVAS_TASKS_ACTIONS_CLEARLIST_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D1E6C10)
#define NODECANVAS_TASKS_ACTIONS_CLEARLIST_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D1E6C80)
#define NODECANVAS_TASKS_ACTIONS_CLEARLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E6DB0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ClearList_TypeDefinitionIndex = 29476;

	class ClearList : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::IList*>* targetList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CLEARLIST__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CLEARLIST_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CLEARLIST_ONEXECUTE_OFFSET))(this);
		}
	};
}
