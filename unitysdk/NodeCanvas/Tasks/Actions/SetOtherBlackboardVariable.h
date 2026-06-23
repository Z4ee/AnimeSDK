#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { class Blackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETOTHERBLACKBOARDVARIABLE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D52B920)
#define NODECANVAS_TASKS_ACTIONS_SETOTHERBLACKBOARDVARIABLE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D52B9C0)
#define NODECANVAS_TASKS_ACTIONS_SETOTHERBLACKBOARDVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52BA90)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetOtherBlackboardVariable_TypeDefinitionIndex = 29764;

	class SetOtherBlackboardVariable : public ::NodeCanvas::Framework::ActionTask_1<::NodeCanvas::Framework::Blackboard*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* targetVariableName; // 0x60
		::NodeCanvas::Framework::Internal::BBObjectParameter* newValue; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOTHERBLACKBOARDVARIABLE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOTHERBLACKBOARDVARIABLE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOTHERBLACKBOARDVARIABLE_ONEXECUTE_OFFSET))(this);
		}
	};
}
