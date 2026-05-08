#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class Object; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_GETTOSTRING_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B7EA6D0)
#define NODECANVAS_TASKS_ACTIONS_GETTOSTRING_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B7EA740)
#define NODECANVAS_TASKS_ACTIONS_GETTOSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EA860)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetToString_TypeDefinitionIndex = 26779;

	class GetToString : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Object*>* variable; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* toString; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETTOSTRING__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETTOSTRING_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETTOSTRING_ONEXECUTE_OFFSET))(this);
		}
	};
}
