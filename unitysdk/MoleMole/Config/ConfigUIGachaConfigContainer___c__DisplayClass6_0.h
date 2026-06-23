#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIGachaRoleConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170564B0)
#define MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER___C__DISPLAYCLASS6_0__GETROLECONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x170564C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIGachaConfigContainer___c__DisplayClass6_0_TypeDefinitionIndex = 47334;

	class ConfigUIGachaConfigContainer___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* extraKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleConfig_b__0(::MoleMole::Config::ConfigUIGachaRoleConfig* cfg)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaRoleConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER___C__DISPLAYCLASS6_0__GETROLECONFIG_B__0_OFFSET))(this, cfg);
		}
	};
}
