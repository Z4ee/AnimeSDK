#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }

#define NODECANVAS_TASKS_ACTIONS_DEBUGDRAWLINE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF920E0)
#define NODECANVAS_TASKS_ACTIONS_DEBUGDRAWLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF92220)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugDrawLine_TypeDefinitionIndex = 30960;

	class DebugDrawLine : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* to; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* from; // 0x68
		::System::Single timeToShow; // 0x70
		::UnityEngine::Color color; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGDRAWLINE__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGDRAWLINE_ONEXECUTE_OFFSET))(this);
		}
	};
}
