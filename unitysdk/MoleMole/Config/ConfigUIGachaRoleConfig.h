#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGUIGACHAROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x159F85D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIGachaRoleConfig_TypeDefinitionIndex = 49915;

	class ConfigUIGachaRoleConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUIPortraitItem* configItem; // 0x10
		::System::String* extraKey; // 0x18
		::System::String* roleName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAROLECONFIG__CTOR_OFFSET))(this);
		}
	};
}
