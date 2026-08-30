#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_2_A1FA75B808D035A4_CLASS_1_E233564BFC73E1CD_EQUALS_OFFSET UNITYSDK_OFFSET(0x177E3E50)
#define CLASS_2_A1FA75B808D035A4_CLASS_1_E233564BFC73E1CD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x177E3F10)
#define CLASS_2_A1FA75B808D035A4_CLASS_1_E233564BFC73E1CD__CTOR_OFFSET UNITYSDK_OFFSET(0x177E3F90)

inline static constexpr unsigned int Class_2_A1FA75B808D035A4_Class_1_E233564BFC73E1CD_TypeDefinitionIndex = 53177;

class Class_2_A1FA75B808D035A4_Class_1_E233564BFC73E1CD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4_CLASS_1_E233564BFC73E1CD__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4_CLASS_1_E233564BFC73E1CD_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1FA75B808D035A4_CLASS_1_E233564BFC73E1CD_GETHASHCODE_OFFSET))(this);
	}
};
