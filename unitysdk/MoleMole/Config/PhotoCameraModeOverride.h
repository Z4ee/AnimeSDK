#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataStructures::Common { class OptionalBool; }
namespace MoleMole::DataStructures::Common { class OptionalString; }

#define MOLEMOLE_CONFIG_PHOTOCAMERAMODEOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B801AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PhotoCameraModeOverride_TypeDefinitionIndex = 52047;

	class PhotoCameraModeOverride : public ::System::Object
	{
	public:
		::MoleMole::DataStructures::Common::OptionalBool* IsShowSwitchBtn; // 0x10
		::MoleMole::DataStructures::Common::OptionalBool* IsShowSettingBtn; // 0x18
		::MoleMole::DataStructures::Common::OptionalBool* MuteMove; // 0x20
		::MoleMole::DataStructures::Common::OptionalString* DefaultVolumeAsset; // 0x28
		::MoleMole::DataStructures::Common::OptionalBool* IsShowSnapBtn; // 0x30
		::MoleMole::DataStructures::Common::OptionalBool* isShowTelescopeImg; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHOTOCAMERAMODEOVERRIDE__CTOR_OFFSET))(this);
		}
	};
}
