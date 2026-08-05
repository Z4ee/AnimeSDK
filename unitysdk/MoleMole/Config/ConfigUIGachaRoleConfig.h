#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGUIGACHAROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13509980)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIGachaRoleConfig_TypeDefinitionIndex = 57170;

	class ConfigUIGachaRoleConfig : public ::System::Object
	{
	public:
		::System::String* roleName; // 0x10
		::System::String* extraKey; // 0x18
		::MoleMole::Config::ConfigUIPortraitItem* configItem; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAROLECONFIG__CTOR_OFFSET))(this);
		}
	};
}
