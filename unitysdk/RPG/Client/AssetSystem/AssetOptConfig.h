#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1BFC0050)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC0030)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetOptConfig_TypeDefinitionIndex = 40291;

	class AssetOptConfig : public ::System::Object
	{
	public:
		::System::Boolean IsEnableLimitMaxAsyncLoadCount; // 0x10
		::System::Boolean EnableHighBundleOptThreadPriority; // 0x11
		::System::Int32 BgJobQueueMaximumActiveThreadCount; // 0x14
		::System::Int32 CustomUpdatePreloadTimeMs; // 0x18
		::System::Boolean EnableAssetRef; // 0x1C
		::System::Boolean AllowEnableAssetInEachBatch; // 0x1D
		::System::Boolean EnableHighBackgroundThreadPriority; // 0x1E
		::System::Boolean EnablePrecache; // 0x1F
		::System::Boolean EnableHighAssetOptThreadPriority; // 0x20
		::System::Boolean ChangeBgJobQueueMaximumActiveThreadCount; // 0x21
		::System::Boolean EnableLimitFrameUnload; // 0x22
		::System::Boolean EnableLoadAssetOneTime; // 0x23

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void LogInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG_LOGINFO_OFFSET))(this);
		}
	};
}
