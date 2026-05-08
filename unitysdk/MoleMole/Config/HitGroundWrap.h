#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class DynamicInt; }

#define MOLEMOLE_CONFIG_HITGROUNDWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16B46380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitGroundWrap_TypeDefinitionIndex = 56736;

	class HitGroundWrap : public ::System::Object
	{
	public:
		::MoleMole::Config::DynamicInt* BackupGroundHitHeavyAttackerFrameHalt; // 0x10
		::MoleMole::Config::DynamicInt* BackupGroundHitHeavyFrameHalt; // 0x18
		::System::Boolean IsUseBackupGroundHitHeavyFrameHalt; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITGROUNDWRAP__CTOR_OFFSET))(this);
		}
	};
}
