#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_LEVEL_LEVELCONFIG_FOCUSUIICONSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x138460F0)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_FocusUIIconSetting_TypeDefinitionIndex = 86303;

	class LevelConfig_FocusUIIconSetting : public ::System::Object
	{
	public:
		::System::String* iconPath; // 0x10
		::System::Boolean isCloseNamePanel; // 0x18
		::System::Boolean isCloseDistanceScale; // 0x19
		::System::Int32 defaultScaleWhenCloseCloseDistance; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_FOCUSUIICONSETTING__CTOR_OFFSET))(this);
		}
	};
}
