#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigPhotoCameraFrame; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEINNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CF590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCameraFrameInner_TypeDefinitionIndex = 68616;

	class ConfigPhotoCameraFrameInner : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigPhotoCameraFrame* Frame; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEINNER__CTOR_OFFSET))(this);
		}
	};
}
