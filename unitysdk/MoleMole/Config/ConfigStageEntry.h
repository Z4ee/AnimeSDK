#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class StageEntry; }

#define MOLEMOLE_CONFIG_CONFIGSTAGEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5607E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStageEntry_TypeDefinitionIndex = 71621;

	class ConfigStageEntry : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::Config::StageEntry*>* entries; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTAGEENTRY__CTOR_OFFSET))(this);
		}
	};
}
