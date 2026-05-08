#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBuddyAvatarShowSettings; }
namespace MoleMole { class ConfigUIAvatarShowData___c__DisplayClass4_0; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1103E3B0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS4_1__REBUILDUIBUDDYSHOWSETTINGDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1103E3C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass4_1_TypeDefinitionIndex = 39680;

	class ConfigUIAvatarShowData___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::Foundation::AssetPath assetPath; // 0x10
		::MoleMole::ConfigUIAvatarShowData___c__DisplayClass4_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Void _ReBuildUIBuddyShowSettingData_b__0(::MoleMole::ConfigBuddyAvatarShowSettings* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBuddyAvatarShowSettings*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS4_1__REBUILDUIBUDDYSHOWSETTINGDATA_B__0_OFFSET))(this, config);
		}
	};
}
