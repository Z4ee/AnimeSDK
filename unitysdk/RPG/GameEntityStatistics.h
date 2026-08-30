#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYREFASSETDATAJSON_OFFSET UNITYSDK_OFFSET(0xE7DCDF0)
#define RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYSTATISTICSDATAJSON_OFFSET UNITYSDK_OFFSET(0xE7DCDA0)
#define RPG_GAMEENTITYSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0xE7DCE40)

namespace RPG
{
	inline static constexpr unsigned int GameEntityStatistics_TypeDefinitionIndex = 52006;

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
