#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_Task; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8CBEA90)
#define HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8CBEAC0)
#define HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8CBE540)
#define HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8CBE520)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Task_TaskCallback_TypeDefinitionIndex = 43662;

	class HEU_Task_TaskCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::HoudiniEngineUnity::HEU_Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_Task*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_INVOKE_OFFSET))(this, task);
		}

		::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_Task* task, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HoudiniEngineUnity::HEU_Task*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_BEGININVOKE_OFFSET))(this, task, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
