#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigPhotoCameraFrame; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEOUTER__CTOR_OFFSET UNITYSDK_OFFSET(0x181CB050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCameraFrameOuter_TypeDefinitionIndex = 46067;

	class ConfigPhotoCameraFrameOuter : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigPhotoCameraFrame* BackFrame; // 0x58
		::MoleMole::Config::ConfigPhotoCameraFrame* FrontFrame; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEOUTER__CTOR_OFFSET))(this);
		}
	};
}
