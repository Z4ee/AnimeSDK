#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ED910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerform_TypeDefinitionIndex = 74250;

	class ConfigLevelResultPerform : public ::System::Object
	{
	public:
		::System::String* StartVideoUrl; // 0x10
		::System::String* LoopVideoUrl; // 0x18
		::System::String* ScriptableAnimation; // 0x20
		::System::String* EndVideoUrl; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORM__CTOR_OFFSET))(this);
		}
	};
}
