#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class DynamicInt; }

#define MOLEMOLE_CONFIG_SHAKEWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1243CDC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShakeWrap_TypeDefinitionIndex = 71471;

	class ShakeWrap : public ::System::Object
	{
	public:
		::MoleMole::Config::DynamicInt* BackupFrameHalt; // 0x10
		::MoleMole::Config::DynamicInt* BackupAttackerFrameHalt; // 0x18
		::System::Boolean IsUseBackupFrameHalt; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHAKEWRAP__CTOR_OFFSET))(this);
		}
	};
}
