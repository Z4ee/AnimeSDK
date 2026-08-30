#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_AssetSync; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x167BFE00)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x167BFE30)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x167BF6D0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x167BFD10)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetSync_AssetSyncCallback_TypeDefinitionIndex = 39296;

	class HEU_AssetSync_AssetSyncCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::HoudiniEngineUnity::HEU_AssetSync* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AssetSync*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AssetSync* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HoudiniEngineUnity::HEU_AssetSync*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ASSETSYNCCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
