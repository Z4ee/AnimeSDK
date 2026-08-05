#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_429077904A4ECF2B_EQUALS_OFFSET UNITYSDK_OFFSET(0x804D40)
#define STRUCT_2_429077904A4ECF2B_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x804DB0)
#define STRUCT_2_429077904A4ECF2B_METHOD_2_58078003422B6368_OFFSET UNITYSDK_OFFSET(0x1493C040)
#define STRUCT_2_429077904A4ECF2B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x804DA0)
#define STRUCT_2_429077904A4ECF2B__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

inline static constexpr unsigned int Struct_2_429077904A4ECF2B_TypeDefinitionIndex = 65858;

struct alignas(4) Struct_2_429077904A4ECF2B
{
	::System::UInt32 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_429077904A4ECF2B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_429077904A4ECF2B a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_429077904A4ECF2B))((::PBYTE)hIl2Cpp + STRUCT_2_429077904A4ECF2B_EQUALS_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_429077904A4ECF2B_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_429077904A4ECF2B_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	static ::Struct_2_429077904A4ECF2B Method_2_58078003422B6368(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::Struct_2_429077904A4ECF2B(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_429077904A4ECF2B_METHOD_2_58078003422B6368_OFFSET))(a1, a2);
	}
};
