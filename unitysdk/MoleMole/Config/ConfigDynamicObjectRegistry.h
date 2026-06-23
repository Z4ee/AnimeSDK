#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class DynamicObjectEntry; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x106CBD80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicObjectRegistry_TypeDefinitionIndex = 85397;

	class ConfigDynamicObjectRegistry : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::Config::DynamicObjectEntry*>* entries; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICOBJECTREGISTRY__CTOR_OFFSET))(this);
		}
	};
}
