#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG_LOGINFO_OFFSET UNITYSDK_OFFSET(0x18C1F0C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1F090)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetOptConfig_TypeDefinitionIndex = 39418;

	class AssetOptConfig : public ::System::Object
	{
	public:
		::System::Int32 BgJobQueueMaximumActiveThreadCount; // 0x10
		::System::Boolean ChangeBgJobQueueMaximumActiveThreadCount; // 0x14
		::System::Boolean IsEnableLimitMaxAsyncLoadCount; // 0x15
		::System::Boolean EnableAssetRef; // 0x16
		::System::Boolean EnableLimitFrameUnload; // 0x17
		::System::Int32 CustomUpdatePreloadTimeMs; // 0x18
		::System::Boolean EnablePrecache; // 0x1C
		::System::Boolean EnableHighBundleOptThreadPriority; // 0x1D
		::System::Boolean AllowEnableAssetInEachBatch; // 0x1E
		::System::Boolean EnableHighAssetOptThreadPriority; // 0x1F
		::System::Boolean EnableLoadAssetOneTime; // 0x20
		::System::Boolean EnableHighBackgroundThreadPriority; // 0x21

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
