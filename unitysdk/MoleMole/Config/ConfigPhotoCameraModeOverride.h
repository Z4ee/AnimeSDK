#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class PhotoCameraModeOverride; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAMODEOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D27B20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCameraModeOverride_TypeDefinitionIndex = 56217;

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
