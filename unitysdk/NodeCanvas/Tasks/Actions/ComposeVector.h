#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_COMPOSEVECTOR_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D826690)
#define NODECANVAS_TASKS_ACTIONS_COMPOSEVECTOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D8266D0)
#define NODECANVAS_TASKS_ACTIONS_COMPOSEVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8267B0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ComposeVector_TypeDefinitionIndex = 30331;

	class ComposeVector : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* x; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* z; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* y; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_COMPOSEVECTOR__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_COMPOSEVECTOR_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_COMPOSEVECTOR_ONEXECUTE_OFFSET))(this);
		}
	};
}
