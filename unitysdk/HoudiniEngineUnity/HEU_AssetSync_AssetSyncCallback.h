#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_AssetSync; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8C30E30)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8C30E60)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8C303E0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8C30E10)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetSync_AssetSyncCallback_TypeDefinitionIndex = 43654;

	class HEU_AssetSync_AssetSyncCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::HoudiniEngineUnity::HEU_AssetSync* assetSync)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AssetSync*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_INVOKE_OFFSET))(this, assetSync);
		}

		::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AssetSync* assetSync, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HoudiniEngineUnity::HEU_AssetSync*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_BEGININVOKE_OFFSET))(this, assetSync, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
