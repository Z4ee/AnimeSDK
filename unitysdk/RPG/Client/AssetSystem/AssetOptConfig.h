#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1C4CD270)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CD250)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetOptConfig_TypeDefinitionIndex = 41589;

	class AssetOptConfig : public ::System::Object
	{
	public:
		::System::Boolean EnablePrecache; // 0x10
		::System::Boolean EnableAssetRef; // 0x11
		::System::Boolean EnableHighBackgroundThreadPriority; // 0x12
		::System::Boolean IsEnableLimitMaxAsyncLoadCount; // 0x13
		::System::Boolean EnableHighAssetOptThreadPriority; // 0x14
		::System::Boolean ChangeBgJobQueueMaximumActiveThreadCount; // 0x15
		::System::Boolean EnableLoadAssetOneTime; // 0x16
		::System::Boolean EnableLimitFrameUnload; // 0x17
		::System::Boolean AllowEnableAssetInEachBatch; // 0x18
		::System::Boolean EnableHighBundleOptThreadPriority; // 0x19
		::System::Int32 BgJobQueueMaximumActiveThreadCount; // 0x1C
		::System::Int32 CustomUpdatePreloadTimeMs; // 0x20

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
