#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RPGQUALITYSETTINGSFORDEFAULTLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAF505F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettingsForDefaultLevel_TypeDefinitionIndex = 62631;

	class RPGQualitySettingsForDefaultLevel : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGSFORDEFAULTLEVEL__CTOR_OFFSET))(this);
		}
	};
}
