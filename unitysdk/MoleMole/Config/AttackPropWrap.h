#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AttackTimeSlowConfig; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ATTACKPROPWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0xFEA70B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackPropWrap_TypeDefinitionIndex = 76544;

	class AttackPropWrap : public ::System::Object
	{
	public:
		::MoleMole::Config::DynamicInt* BackupAttackerFrameHalt; // 0x10
		::System::String* AttackeeTimeSlowKey; // 0x18
		::MoleMole::Config::DynamicInt* BackupGroundHitHeavyFrameHalt; // 0x20
		::MoleMole::Config::DynamicInt* BackupGroundHitHeavyAttackerFrameHalt; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>* timeSlowList; // 0x30
		::MoleMole::Config::DynamicInt* BackupFrameHalt; // 0x38
		::MoleMole::Config::DynamicInt* FrameHalt; // 0x40
		::System::String* AttackerTimeSlowKey; // 0x48
		::MoleMole::Config::DynamicInt* AttackerFrameHalt; // 0x50
		::System::Boolean IsUseBackupGroundHitHeavyFrameHalt; // 0x58
		::System::Boolean IsUseBackupFrameHalt; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPWRAP__CTOR_OFFSET))(this);
		}
	};
}
