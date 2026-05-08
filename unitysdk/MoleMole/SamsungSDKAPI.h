#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_SAMSUNGSDKAPI_BEGINBATTLE_OFFSET UNITYSDK_OFFSET(0x1C5613C0)
#define MOLEMOLE_SAMSUNGSDKAPI_BEGINDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1C561400)
#define MOLEMOLE_SAMSUNGSDKAPI_CHANGEFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1C561440)
#define MOLEMOLE_SAMSUNGSDKAPI_ENDBATTLE_OFFSET UNITYSDK_OFFSET(0x1C5613E0)
#define MOLEMOLE_SAMSUNGSDKAPI_ENDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1C561420)
#define MOLEMOLE_SAMSUNGSDKAPI_INIT_OFFSET UNITYSDK_OFFSET(0x1C5613A0)
#define MOLEMOLE_SAMSUNGSDKAPI_UPDATEGAMEINFO_OFFSET UNITYSDK_OFFSET(0x1C5613B0)
#define MOLEMOLE_SAMSUNGSDKAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C561460)

namespace MoleMole
{
	inline static constexpr unsigned int SamsungSDKAPI_TypeDefinitionIndex = 36885;

	class SamsungSDKAPI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SAMSUNGSDKAPI__CTOR_OFFSET))(this);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAMSUNGSDKAPI_INIT_OFFSET))();
		}

		static ::System::Void UpdateGameInfo(::System::Int32 sceneId, ::System::Int32 curFps, ::System::Int32 targetFps, ::System::Int32 sceneLevel)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SAMSUNGSDKAPI_UPDATEGAMEINFO_OFFSET))(sceneId, curFps, targetFps, sceneLevel);
		}

		static ::System::Void BeginBattle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAMSUNGSDKAPI_BEGINBATTLE_OFFSET))();
		}

		static ::System::Void EndBattle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAMSUNGSDKAPI_ENDBATTLE_OFFSET))();
		}

		static ::System::Void BeginDownload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAMSUNGSDKAPI_BEGINDOWNLOAD_OFFSET))();
		}

		static ::System::Void EndDownload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAMSUNGSDKAPI_ENDDOWNLOAD_OFFSET))();
		}

		static ::System::Void ChangeFrameRate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAMSUNGSDKAPI_CHANGEFRAMERATE_OFFSET))();
		}
	};
}
