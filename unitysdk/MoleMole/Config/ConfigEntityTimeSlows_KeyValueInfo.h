#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityTimeSlows_ValueType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS_KEYVALUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1744BDE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTimeSlows_KeyValueInfo_TypeDefinitionIndex = 68916;

	class ConfigEntityTimeSlows_KeyValueInfo : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::MoleMole::Config::ConfigEntityTimeSlows_ValueType valueType; // 0x18
		::System::String* valueInst; // 0x20

		::System::Void _ctor(::System::String* _keyInst, ::MoleMole::Config::ConfigEntityTimeSlows_ValueType _valueType, ::System::String* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityTimeSlows_ValueType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWS_KEYVALUEINFO__CTOR_OFFSET))(this, _keyInst, _valueType, _valueInst);
		}
	};
}
