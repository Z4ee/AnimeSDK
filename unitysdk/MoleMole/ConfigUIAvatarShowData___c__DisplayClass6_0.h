#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIAvatarShowSettingsIndex; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16275CB0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS6_0__LOADUIAVATARSHOWSETTINGSINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x16275CC0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass6_0_TypeDefinitionIndex = 56959;

	class ConfigUIAvatarShowData___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* complete; // 0x10
		::System::Int32 loadToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadUIAvatarShowSettingsIndex_b__0(::MoleMole::ConfigUIAvatarShowSettingsIndex* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAvatarShowSettingsIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS6_0__LOADUIAVATARSHOWSETTINGSINDEX_B__0_OFFSET))(this, config);
		}
	};
}
