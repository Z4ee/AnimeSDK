#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DynamicInt.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_GET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x159FB1A0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_GET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x159FB1C0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x159FB180)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_SET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x159FB1B0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_SET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x159FB1D0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT_SET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x159FB190)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x159FB110)
#define MOLEMOLE_CONFIG_READONLYDYNAMICINT__CTOR_OFFSET UNITYSDK_OFFSET(0x159FB0B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReadonlyDynamicInt_TypeDefinitionIndex = 52035;

	class ReadonlyDynamicInt : public ::MoleMole::Config::DynamicInt
	{
	public:
		::System::String* _dynamicKey; // 0x20
		::System::Int32 _fixedValue; // 0x28
		::System::Boolean _isDynamic; // 0x2C

		::System::Void _ctor(::System::Int32 fixedValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT__CTOR_OFFSET))(this, fixedValue);
		}

		::System::Void _ctor_1(::System::Int32 fixedValue, ::System::Boolean isDynamic, ::System::String* dynamicKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT__CTOR_1_OFFSET))(this, fixedValue, isDynamic, dynamicKey);
		}

		::System::Boolean get_isDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Void set_isDynamic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_SET_ISDYNAMIC_OFFSET))(this, value);
		}

		::System::String* get_dynamicKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_GET_DYNAMICKEY_OFFSET))(this);
		}

		::System::Void set_dynamicKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_SET_DYNAMICKEY_OFFSET))(this, value);
		}

		::System::Int32 get_fixedValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_GET_FIXEDVALUE_OFFSET))(this);
		}

		::System::Void set_fixedValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICINT_SET_FIXEDVALUE_OFFSET))(this, value);
		}
	};
}
