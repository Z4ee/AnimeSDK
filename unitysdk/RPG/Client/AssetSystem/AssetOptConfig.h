#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1A4D10A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D1070)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetOptConfig_TypeDefinitionIndex = 40291;

	class AssetOptConfig : public ::System::Object
	{
	public:
		::System::Boolean EnablePrecache; // 0x10
		::System::Boolean EnableHighAssetOptThreadPriority; // 0x11
		::System::Boolean EnableLimitFrameUnload; // 0x12
		::System::Boolean AllowEnableAssetInEachBatch; // 0x13
		::System::Int32 CustomUpdatePreloadTimeMs; // 0x14
		::System::Boolean IsEnableLimitMaxAsyncLoadCount; // 0x18
		::System::Boolean ChangeBgJobQueueMaximumActiveThreadCount; // 0x19
		::System::Boolean EnableHighBundleOptThreadPriority; // 0x1A
		::System::Boolean EnableLoadAssetOneTime; // 0x1B
		::System::Boolean EnableAssetRef; // 0x1C
		::System::Boolean EnableHighBackgroundThreadPriority; // 0x1D
		::System::Int32 BgJobQueueMaximumActiveThreadCount; // 0x20

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
