#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DB38C90)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1DB38FA0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY2D_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1DB39530)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB396E0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY2D__ONCHECK_B__8_0_OFFSET UNITYSDK_OFFSET(0x1DB39770)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckDistanceToGameObjectAny2D_TypeDefinitionIndex = 30565;

	class CheckDistanceToGameObjectAny2D : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* distance; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* closerResult; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* allResults; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* targetObjects; // 0x78
		::System::Single floatingPoint; // 0x80
		::ParadoxNotion::CompareMethod checkType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY2D_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY2D_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY2D_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Single _OnCheck_b__8_0(::UnityEngine::GameObject* x)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY2D__ONCHECK_B__8_0_OFFSET))(this, x);
		}
	};
}
