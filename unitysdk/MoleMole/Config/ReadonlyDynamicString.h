#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DynamicString.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_GET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1A360330)
#define MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_GET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x1A360350)
#define MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1A360310)
#define MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_SET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1A360340)
#define MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_SET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x1A360360)
#define MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_SET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1A360320)
#define MOLEMOLE_CONFIG_READONLYDYNAMICSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3602A0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A360240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReadonlyDynamicString_TypeDefinitionIndex = 39859;

	class ReadonlyDynamicString : public ::MoleMole::Config::DynamicString
	{
	public:
		::System::String* _fixedValue; // 0x28
		::System::String* _dynamicKey; // 0x30
		::System::Boolean _isDynamic; // 0x38

		::System::Void _ctor(::System::String* fixedValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICSTRING__CTOR_OFFSET))(this, fixedValue);
		}

		::System::Void _ctor_1(::System::String* fixedValue, ::System::Boolean isDynamic, ::System::String* dynamicKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICSTRING__CTOR_1_OFFSET))(this, fixedValue, isDynamic, dynamicKey);
		}

		::System::Boolean get_isDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Void set_isDynamic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_SET_ISDYNAMIC_OFFSET))(this, value);
		}

		::System::String* get_dynamicKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_GET_DYNAMICKEY_OFFSET))(this);
		}

		::System::Void set_dynamicKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_SET_DYNAMICKEY_OFFSET))(this, value);
		}

		::System::String* get_fixedValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_GET_FIXEDVALUE_OFFSET))(this);
		}

		::System::Void set_fixedValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICSTRING_SET_FIXEDVALUE_OFFSET))(this, value);
		}
	};
}
