#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIAvatarShowData___c__DisplayClass6_0; }
namespace MoleMole { class ConfigUIAvatarShowSettings; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1103E800)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS6_1__REBUILDUIAVATARSHOWSETTINGDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1103E810)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass6_1_TypeDefinitionIndex = 39675;

	class ConfigUIAvatarShowData___c__DisplayClass6_1 : public ::System::Object
	{
	public:
		::MoleMole::ConfigUIAvatarShowData___c__DisplayClass6_0* CS___8__locals1; // 0x10
		::Foundation::AssetPath assetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS6_1__CTOR_OFFSET))(this);
		}

		::System::Void _ReBuildUIAvatarShowSettingData_b__0(::MoleMole::ConfigUIAvatarShowSettings* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAvatarShowSettings*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS6_1__REBUILDUIAVATARSHOWSETTINGDATA_B__0_OFFSET))(this, config);
		}
	};
}
