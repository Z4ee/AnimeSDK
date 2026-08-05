#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_018E10D1FF758986.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_E7893E25665FBB90_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7F1540)
#define STRUCT_2_E7893E25665FBB90_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F1490)
#define STRUCT_2_E7893E25665FBB90_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F13D0)
#define STRUCT_2_E7893E25665FBB90_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7F15C0)
#define STRUCT_2_E7893E25665FBB90_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7F1550)

inline static constexpr unsigned int Struct_2_E7893E25665FBB90_TypeDefinitionIndex = 64479;

struct alignas(4) Struct_2_E7893E25665FBB90
{
	::System::Int32 Field_2_3; // 0x10
	::System::UInt32 Field_2_2; // 0x14
	::System::UInt32 Field_2_1; // 0x18
	::MoleMole::Config::DamageElementType Field_2_0; // 0x1C
	::Enum_3_018E10D1FF758986 Field_2_7; // 0x20
	::System::UInt32 Field_2_6; // 0x24

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E7893E25665FBB90_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_E7893E25665FBB90 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E7893E25665FBB90))((::PBYTE)hIl2Cpp + STRUCT_2_E7893E25665FBB90_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_E7893E25665FBB90_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E7893E25665FBB90_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_E7893E25665FBB90_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
