#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D06E2B0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D06E610)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1D06EC10)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06EDD0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY__ONCHECK_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D06EE60)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckDistanceToGameObjectAny_TypeDefinitionIndex = 29755;

	class CheckDistanceToGameObjectAny : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* targetObjects; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* allResults; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* closerResult; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* distance; // 0x78
		::ParadoxNotion::CompareMethod checkType; // 0x80
		::System::Single floatingPoint; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Single _OnCheck_b__8_0(::UnityEngine::GameObject* x)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY__ONCHECK_B__8_0_OFFSET))(this, x);
		}
	};
}
