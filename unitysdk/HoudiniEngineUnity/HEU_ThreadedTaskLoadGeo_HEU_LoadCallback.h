#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x84A3FB0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x84A4040)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x849E0F0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x84A3F90)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadedTaskLoadGeo_HEU_LoadCallback_TypeDefinitionIndex = 37802;

	class HEU_ThreadedTaskLoadGeo_HEU_LoadCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* loadData, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType callbackType)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_INVOKE_OFFSET))(this, session, loadData, callbackType);
		}

		::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* loadData, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType callbackType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallbackType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_BEGININVOKE_OFFSET))(this, session, loadData, callbackType, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
