#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigGachaPerformMisc; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x186B9ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformance_TypeDefinitionIndex = 74066;

	class ConfigGachaPerformance : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigGachaPerformMisc* GachaPerformMisc; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCE__CTOR_OFFSET))(this);
		}
	};
}
