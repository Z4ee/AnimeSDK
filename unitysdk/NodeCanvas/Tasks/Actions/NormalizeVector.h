#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }

#define NODECANVAS_TASKS_ACTIONS_NORMALIZEVECTOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E543240)
#define NODECANVAS_TASKS_ACTIONS_NORMALIZEVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E543350)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int NormalizeVector_TypeDefinitionIndex = 29840;

	class NormalizeVector : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* targetVector; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* multiply; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_NORMALIZEVECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_NORMALIZEVECTOR_ONEXECUTE_OFFSET))(this);
		}
	};
}
