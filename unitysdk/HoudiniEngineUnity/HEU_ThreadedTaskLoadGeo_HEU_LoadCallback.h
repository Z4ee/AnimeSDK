#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B164B10)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B164BA0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B15E2C0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B164A20)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadedTaskLoadGeo_HEU_LoadCallback_TypeDefinitionIndex = 39322;

	class HEU_ThreadedTaskLoadGeo_HEU_LoadCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* a2, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* a2, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
