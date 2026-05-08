#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGEXQTE__CTOR_OFFSET UNITYSDK_OFFSET(0xFB04210)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigExQTE_TypeDefinitionIndex = 60326;

	class ConfigExQTE : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single ExQTERateBase; // 0x58
		::System::Collections::Generic::List_1<::System::Single>* ExQTERateByFeverLevelList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGEXQTE__CTOR_OFFSET))(this);
		}
	};
}
