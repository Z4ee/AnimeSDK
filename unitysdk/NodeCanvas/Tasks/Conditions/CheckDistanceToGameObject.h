#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D35A6E0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D35A9F0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1D35ABB0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D35AD70)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckDistanceToGameObject_TypeDefinitionIndex = 29654;

	class CheckDistanceToGameObject : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* distance; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* checkTarget; // 0x68
		::System::Single floatingPoint; // 0x70
		::ParadoxNotion::CompareMethod checkType; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
