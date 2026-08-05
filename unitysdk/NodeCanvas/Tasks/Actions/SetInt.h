#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/ParadoxNotion/OperationMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETINT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D06DED0)
#define NODECANVAS_TASKS_ACTIONS_SETINT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D06DF80)
#define NODECANVAS_TASKS_ACTIONS_SETINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06E080)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetInt_TypeDefinitionIndex = 30289;

	class SetInt : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* valueA; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* valueB; // 0x68
		::ParadoxNotion::OperationMethod Operation; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETINT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETINT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETINT_ONEXECUTE_OFFSET))(this);
		}
	};
}
