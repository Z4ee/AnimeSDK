#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigGalgameAvatarCameraShake; }
namespace MoleMole { class ConfigPerformUIShake; }

#define MOLEMOLE_CONFIGGALGAMESHAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x110368B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalgameShakeData_TypeDefinitionIndex = 65826;

	class ConfigGalgameShakeData : public ::System::Object
	{
	public:
		::MoleMole::ConfigPerformUIShake* configChatShake; // 0x10
		::MoleMole::ConfigGalgameAvatarCameraShake* configAvatarCameraShake; // 0x18
		::MoleMole::ConfigPerformUIShake* configBGShake; // 0x20
		::System::Single TotalDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMESHAKEDATA__CTOR_OFFSET))(this);
		}
	};
}
