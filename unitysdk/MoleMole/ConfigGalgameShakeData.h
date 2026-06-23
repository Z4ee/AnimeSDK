#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigGalgameAvatarCameraShake; }
namespace MoleMole { class ConfigPerformUIShake; }

#define MOLEMOLE_CONFIGGALGAMESHAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F45790)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalgameShakeData_TypeDefinitionIndex = 41298;

	class ConfigGalgameShakeData : public ::System::Object
	{
	public:
		::MoleMole::ConfigPerformUIShake* configBGShake; // 0x10
		::MoleMole::ConfigGalgameAvatarCameraShake* configAvatarCameraShake; // 0x18
		::MoleMole::ConfigPerformUIShake* configChatShake; // 0x20
		::System::Single TotalDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMESHAKEDATA__CTOR_OFFSET))(this);
		}
	};
}
