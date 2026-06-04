#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_Task; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17F5CDD0)
#define HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17F5CE00)
#define HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x17F5CDC0)
#define HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5CCD0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Task_TaskCallback_TypeDefinitionIndex = 37638;

	class HEU_Task_TaskCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::HoudiniEngineUnity::HEU_Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_Task*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_Task* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HoudiniEngineUnity::HEU_Task*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK_TASKCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
