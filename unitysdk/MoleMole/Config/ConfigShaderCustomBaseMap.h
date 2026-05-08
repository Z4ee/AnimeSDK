#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0A9F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShaderCustomBaseMap_TypeDefinitionIndex = 65601;

	class ConfigShaderCustomBaseMap : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASEMAP__CTOR_OFFSET))(this);
		}
	};
}
