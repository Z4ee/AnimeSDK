#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D80A360)
#define NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D80A5D0)
#define NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80A6B0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetGameObjectPosition_TypeDefinitionIndex = 29833;

	class GetGameObjectPosition : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveAs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION_ONEXECUTE_OFFSET))(this);
		}
	};
}
