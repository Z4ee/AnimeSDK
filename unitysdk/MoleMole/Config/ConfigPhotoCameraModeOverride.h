#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class PhotoCameraModeOverride; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAMODEOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06DE50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCameraModeOverride_TypeDefinitionIndex = 60044;

	class ConfigPhotoCameraModeOverride : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::PhotoCameraModeOverride* ConfigOverride; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAMODEOVERRIDE__CTOR_OFFSET))(this);
		}
	};
}
