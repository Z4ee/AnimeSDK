#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DynamicFloat.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_GET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x158C2200)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_GET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x158C2220)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x158C21E0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_SET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x158C2210)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_SET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x158C2230)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_SET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x158C21F0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x158C2160)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x158C20F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReadonlyDynamicFloat_TypeDefinitionIndex = 72148;

	class ReadonlyDynamicFloat : public ::MoleMole::Config::DynamicFloat
	{
	public:
		::System::String* _dynamicKey; // 0x20
		::System::Boolean _isDynamic; // 0x28
		::System::Single _fixedValue; // 0x2C

		::System::Void _ctor(::System::Single fixedValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT__CTOR_OFFSET))(this, fixedValue);
		}

		::System::Void _ctor_1(::System::Single fixedValue, ::System::Boolean isDynamic, ::System::String* dynamicKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT__CTOR_1_OFFSET))(this, fixedValue, isDynamic, dynamicKey);
		}

		::System::Boolean get_isDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Void set_isDynamic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_SET_ISDYNAMIC_OFFSET))(this, value);
		}

		::System::String* get_dynamicKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_GET_DYNAMICKEY_OFFSET))(this);
		}

		::System::Void set_dynamicKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_SET_DYNAMICKEY_OFFSET))(this, value);
		}

		::System::Single get_fixedValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_GET_FIXEDVALUE_OFFSET))(this);
		}

		::System::Void set_fixedValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_SET_FIXEDVALUE_OFFSET))(this, value);
		}
	};
}
