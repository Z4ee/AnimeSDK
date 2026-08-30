#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_03D6D30E62EFB374.h"

namespace System { class String; }

#define CLASS_2_8F9E80B05C92C989_COMPARETO_OFFSET UNITYSDK_OFFSET(0x162913C0)
#define CLASS_2_8F9E80B05C92C989_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16291420)
#define CLASS_2_8F9E80B05C92C989__CTOR_OFFSET UNITYSDK_OFFSET(0x16291380)

inline static constexpr unsigned int Class_2_8F9E80B05C92C989_TypeDefinitionIndex = 62109;

class Class_2_8F9E80B05C92C989 : public ::Class_1_03D6D30E62EFB374
{
public:
	::System::UInt32 OGGCBJHJFCA; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8F9E80B05C92C989__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_2_8F9E80B05C92C989* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_8F9E80B05C92C989*))((::PBYTE)hIl2Cpp + CLASS_2_8F9E80B05C92C989_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F9E80B05C92C989_TOSTRING_OFFSET))(this);
	}
};
