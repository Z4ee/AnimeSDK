#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG_LOGINFO_OFFSET UNITYSDK_OFFSET(0x17B52210)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17B521F0)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetOptConfig_TypeDefinitionIndex = 37873;

	class AssetOptConfig : public ::System::Object
	{
	public:
		::System::Int32 BgJobQueueMaximumActiveThreadCount; // 0x10
		::System::Int32 CustomUpdatePreloadTimeMs; // 0x14
		::System::Boolean EnableHighBundleOptThreadPriority; // 0x18
		::System::Boolean IsEnableLimitMaxAsyncLoadCount; // 0x19
		::System::Boolean EnableLoadAssetOneTime; // 0x1A
		::System::Boolean EnableHighAssetOptThreadPriority; // 0x1B
		::System::Boolean EnableLimitFrameUnload; // 0x1C
		::System::Boolean EnablePrecache; // 0x1D
		::System::Boolean EnableAssetRef; // 0x1E
		::System::Boolean EnableHighBackgroundThreadPriority; // 0x1F
		::System::Boolean AllowEnableAssetInEachBatch; // 0x20
		::System::Boolean ChangeBgJobQueueMaximumActiveThreadCount; // 0x21

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
