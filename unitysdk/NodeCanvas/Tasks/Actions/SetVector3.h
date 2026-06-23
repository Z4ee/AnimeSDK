#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/ParadoxNotion/OperationMethod.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETVECTOR3_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D82A010)
#define NODECANVAS_TASKS_ACTIONS_SETVECTOR3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D82A330)
#define NODECANVAS_TASKS_ACTIONS_SETVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1D82A580)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetVector3_TypeDefinitionIndex = 29797;

	class SetVector3 : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* valueB; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* valueA; // 0x68
		::ParadoxNotion::OperationMethod operation; // 0x70
		::System::Boolean perSecond; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETVECTOR3__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETVECTOR3_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETVECTOR3_ONEXECUTE_OFFSET))(this);
		}
	};
}
