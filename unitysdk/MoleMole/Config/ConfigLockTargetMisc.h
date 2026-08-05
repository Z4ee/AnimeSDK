#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigLockTargetMiscInfo; }

#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CE500)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockTargetMisc_TypeDefinitionIndex = 76205;

	class ConfigLockTargetMisc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigLockTargetMiscInfo* info; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETMISC__CTOR_OFFSET))(this);
		}
	};
}
