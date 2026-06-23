#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F4C3B7EC74A6B703.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_198;

#define STRUCT_2_E216A78B21524381_METHOD_2_187B3E3B8611027E_OFFSET UNITYSDK_OFFSET(0x160B1660)
#define STRUCT_2_E216A78B21524381_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x813290)
#define STRUCT_2_E216A78B21524381_TOSTRING_OFFSET UNITYSDK_OFFSET(0x813280)
#define STRUCT_2_E216A78B21524381__CTOR_OFFSET UNITYSDK_OFFSET(0x813270)

inline static constexpr unsigned int Struct_2_E216A78B21524381_TypeDefinitionIndex = 81654;

struct alignas(1) Struct_2_E216A78B21524381
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::Struct_2_F4C3B7EC74A6B703 Field_2_2; // 0x12

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::Struct_2_F4C3B7EC74A6B703 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Struct_2_F4C3B7EC74A6B703))((::PBYTE)hIl2Cpp + STRUCT_2_E216A78B21524381__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E216A78B21524381_TOSTRING_OFFSET))(this);
	}

	static ::Struct_2_E216A78B21524381 Method_2_187B3E3B8611027E()
	{
		return ((::Struct_2_E216A78B21524381(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E216A78B21524381_METHOD_2_187B3E3B8611027E_OFFSET))();
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E216A78B21524381_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
