#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System::Collections { class IList; }

#define NODECANVAS_TASKS_ACTIONS_SHUFFLELIST_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DAF3200)
#define NODECANVAS_TASKS_ACTIONS_SHUFFLELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF35E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ShuffleList_TypeDefinitionIndex = 30108;

	class ShuffleList : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::IList*>* targetList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SHUFFLELIST__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SHUFFLELIST_ONEXECUTE_OFFSET))(this);
		}
	};
}
