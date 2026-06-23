#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_FINDCLOSESTWITHTAG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D3592A0)
#define NODECANVAS_TASKS_ACTIONS_FINDCLOSESTWITHTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D359720)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindClosestWithTag_TypeDefinitionIndex = 30893;

	class FindClosestWithTag : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* searchTag; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveDistanceAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* ignoreChildren; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveObjectAs; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCLOSESTWITHTAG__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCLOSESTWITHTAG_ONEXECUTE_OFFSET))(this);
		}
	};
}
