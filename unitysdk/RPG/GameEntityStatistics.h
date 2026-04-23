#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYREFASSETDATAJSON_OFFSET UNITYSDK_OFFSET(0xB868660)
#define RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYSTATISTICSDATAJSON_OFFSET UNITYSDK_OFFSET(0xB868620)
#define RPG_GAMEENTITYSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0xB8686A0)

namespace RPG
{
	inline static constexpr unsigned int GameEntityStatistics_TypeDefinitionIndex = 47774;

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
