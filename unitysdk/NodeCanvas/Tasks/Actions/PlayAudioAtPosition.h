#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_PLAYAUDIOATPOSITION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1C63B9C0)
#define NODECANVAS_TASKS_ACTIONS_PLAYAUDIOATPOSITION_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C63BA20)
#define NODECANVAS_TASKS_ACTIONS_PLAYAUDIOATPOSITION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C63BB10)
#define NODECANVAS_TASKS_ACTIONS_PLAYAUDIOATPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C63BBC0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int PlayAudioAtPosition_TypeDefinitionIndex = 30566;

	class PlayAudioAtPosition : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::AudioClip*>* audioClip; // 0x60
		::System::Single volume; // 0x68
		::System::Boolean waitActionFinish; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYAUDIOATPOSITION__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYAUDIOATPOSITION_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYAUDIOATPOSITION_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYAUDIOATPOSITION_ONUPDATE_OFFSET))(this);
		}
	};
}
