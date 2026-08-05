#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETINTRANDOM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB78840)
#define NODECANVAS_TASKS_ACTIONS_SETINTRANDOM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB78C00)
#define NODECANVAS_TASKS_ACTIONS_SETINTRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB78CA0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetIntRandom_TypeDefinitionIndex = 30298;

	class SetIntRandom : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* minValue; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* maxValue; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* intVariable; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETINTRANDOM__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETINTRANDOM_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETINTRANDOM_ONEXECUTE_OFFSET))(this);
		}
	};
}
