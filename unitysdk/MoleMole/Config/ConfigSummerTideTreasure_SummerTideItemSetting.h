#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_SUMMERTIDEITEMSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x16C53870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSummerTideTreasure_SummerTideItemSetting_TypeDefinitionIndex = 45389;

	class ConfigSummerTideTreasure_SummerTideItemSetting : public ::System::Object
	{
	public:
		::System::Int32 preloadItemNum; // 0x10
		::System::Int32 maxItemNum; // 0x14
		::System::Single endEffectDuration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_SUMMERTIDEITEMSETTING__CTOR_OFFSET))(this);
		}
	};
}
