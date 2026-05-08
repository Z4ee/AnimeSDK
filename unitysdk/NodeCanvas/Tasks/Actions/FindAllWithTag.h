#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_FINDALLWITHTAG_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B0B89E0)
#define NODECANVAS_TASKS_ACTIONS_FINDALLWITHTAG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B0B8C30)
#define NODECANVAS_TASKS_ACTIONS_FINDALLWITHTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B8D20)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindAllWithTag_TypeDefinitionIndex = 26738;

	class FindAllWithTag : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* searchTag; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* saveAs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDALLWITHTAG__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDALLWITHTAG_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDALLWITHTAG_ONEXECUTE_OFFSET))(this);
		}
	};
}
