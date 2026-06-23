#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTargetData_ValueType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA_KEYVALUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17039B60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTargetData_KeyValueInfo_TypeDefinitionIndex = 43339;

	class ConfigAbilityTargetData_KeyValueInfo : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::MoleMole::Config::ConfigAbilityTargetData_ValueType valueType; // 0x18
		::System::String* valueInst; // 0x20

		::System::Void _ctor(::System::String* _keyInst, ::MoleMole::Config::ConfigAbilityTargetData_ValueType _valueType, ::System::String* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigAbilityTargetData_ValueType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGETDATA_KEYVALUEINFO__CTOR_OFFSET))(this, _keyInst, _valueType, _valueInst);
		}
	};
}
