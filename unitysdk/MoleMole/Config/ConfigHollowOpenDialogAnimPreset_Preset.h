#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWOPENDIALOGANIMPRESET_PRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x12717810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowOpenDialogAnimPreset_Preset_TypeDefinitionIndex = 40300;

	class ConfigHollowOpenDialogAnimPreset_Preset : public ::System::Object
	{
	public:
		::System::String* EndAnim; // 0x10
		::System::String* StartAnim; // 0x18
		::System::String* LoopAnim; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOPENDIALOGANIMPRESET_PRESET__CTOR_OFFSET))(this);
		}
	};
}
