#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_SORTGAMEOBJECTLISTBYDISTANCE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB78CB0)
#define NODECANVAS_TASKS_ACTIONS_SORTGAMEOBJECTLISTBYDISTANCE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB78F00)
#define NODECANVAS_TASKS_ACTIONS_SORTGAMEOBJECTLISTBYDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB79040)
#define NODECANVAS_TASKS_ACTIONS_SORTGAMEOBJECTLISTBYDISTANCE__ONEXECUTE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1EB79060)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SortGameObjectListByDistance_TypeDefinitionIndex = 30462;

	class SortGameObjectListByDistance : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* targetList; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* saveAs; // 0x68
		::System::Boolean reverse; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SORTGAMEOBJECTLISTBYDISTANCE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SORTGAMEOBJECTLISTBYDISTANCE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SORTGAMEOBJECTLISTBYDISTANCE_ONEXECUTE_OFFSET))(this);
		}

		::System::Single _OnExecute_b__5_0(::UnityEngine::GameObject* go)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SORTGAMEOBJECTLISTBYDISTANCE__ONEXECUTE_B__5_0_OFFSET))(this, go);
		}
	};
}
