#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class InteractEntry; }

#define MOLEMOLE_CONFIG_CONFIGINTERACTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x110A3010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractEntry_TypeDefinitionIndex = 44464;

	class ConfigInteractEntry : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::Config::InteractEntry*>* entries; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTENTRY__CTOR_OFFSET))(this);
		}
	};
}
