#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_FINDWITHTAG_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D529EF0)
#define NODECANVAS_TASKS_ACTIONS_FINDWITHTAG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D52A140)
#define NODECANVAS_TASKS_ACTIONS_FINDWITHTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52A1D0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindWithTag_TypeDefinitionIndex = 30845;

	class FindWithTag : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::System::String* searchTag; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveAs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDWITHTAG__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDWITHTAG_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDWITHTAG_ONEXECUTE_OFFSET))(this);
		}
	};
}
