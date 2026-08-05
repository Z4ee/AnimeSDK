#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D06CB60)
#define NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D06CC10)
#define NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06CE30)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindChildByName_TypeDefinitionIndex = 31030;

	class FindChildByName : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Transform*>* saveAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* childName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME_ONEXECUTE_OFFSET))(this);
		}
	};
}
