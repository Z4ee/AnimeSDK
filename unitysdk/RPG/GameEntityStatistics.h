#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYREFASSETDATAJSON_OFFSET UNITYSDK_OFFSET(0xCFB15D0)
#define RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYSTATISTICSDATAJSON_OFFSET UNITYSDK_OFFSET(0xCFB1590)
#define RPG_GAMEENTITYSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0xCFB1610)

namespace RPG
{
	inline static constexpr unsigned int GameEntityStatistics_TypeDefinitionIndex = 48389;

	class GameEntityStatistics : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMEENTITYSTATISTICS__CTOR_OFFSET))(this);
		}

		static ::System::String* ExportFrameEntityStatisticsDataJson()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYSTATISTICSDATAJSON_OFFSET))();
		}

		static ::System::String* ExportFrameEntityRefAssetDataJson()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYREFASSETDATAJSON_OFFSET))();
		}
	};
}
