#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGLOCKTARGETS_KEYVALUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xFB079B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockTargets_KeyValueInfo_TypeDefinitionIndex = 78430;

	class ConfigLockTargets_KeyValueInfo : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::System::String* valueType; // 0x18
		::System::String* valueInst; // 0x20

		::System::Void _ctor(::System::String* _keyInst, ::System::String* _valueType, ::System::String* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKTARGETS_KEYVALUEINFO__CTOR_OFFSET))(this, _keyInst, _valueType, _valueInst);
		}
	};
}
