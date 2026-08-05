#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBuddyAvatarShowSettings; }
namespace MoleMole { class ConfigUIAvatarShowData___c__DisplayClass15_0; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4864F0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS15_1__REBUILDUIBUDDYSHOWSETTINGDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1C486500)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass15_1_TypeDefinitionIndex = 56961;

	class ConfigUIAvatarShowData___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::Foundation::AssetPath assetPath; // 0x10
		::MoleMole::ConfigUIAvatarShowData___c__DisplayClass15_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}

		::System::Void _ReBuildUIBuddyShowSettingData_b__0(::MoleMole::ConfigBuddyAvatarShowSettings* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBuddyAvatarShowSettings*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS15_1__REBUILDUIBUDDYSHOWSETTINGDATA_B__0_OFFSET))(this, config);
		}
	};
}
