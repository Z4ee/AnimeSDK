#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class PlayerAccessorySkinData; }

#define MOLEMOLE_CONFIG_CONFIGPLAYERACCESSORY__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD73F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayerAccessory_TypeDefinitionIndex = 83194;

	class ConfigPlayerAccessory : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::Config::PlayerAccessorySkinData*>* SkinConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYERACCESSORY__CTOR_OFFSET))(this);
		}
	};
}
