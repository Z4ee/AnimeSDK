#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_LOADSCENE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B4B9730)
#define NODECANVAS_TASKS_ACTIONS_LOADSCENE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4B97A0)
#define NODECANVAS_TASKS_ACTIONS_LOADSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B98D0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int LoadScene_TypeDefinitionIndex = 26828;

	class LoadScene : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* sceneName; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::SceneManagement::LoadSceneMode>* mode; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOADSCENE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOADSCENE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOADSCENE_ONEXECUTE_OFFSET))(this);
		}
	};
}
