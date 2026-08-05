#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigLevelEndPerform; }

#define MOLEMOLE_CONFIG_CONFIGLEVELENDPERFORMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1625FAE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelEndPerforms_TypeDefinitionIndex = 58788;

	class ConfigLevelEndPerforms : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigLevelEndPerform* PerformSetting; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELENDPERFORMS__CTOR_OFFSET))(this);
		}
	};
}
