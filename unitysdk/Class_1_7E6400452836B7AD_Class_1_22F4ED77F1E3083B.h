#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E6400452836B7AD;

#define CLASS_1_7E6400452836B7AD_CLASS_1_22F4ED77F1E3083B_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A6A5820)
#define CLASS_1_7E6400452836B7AD_CLASS_1_22F4ED77F1E3083B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A5810)

inline static constexpr unsigned int Class_1_7E6400452836B7AD_Class_1_22F4ED77F1E3083B_TypeDefinitionIndex = 10638;

class Class_1_7E6400452836B7AD_Class_1_22F4ED77F1E3083B : public ::System::Object
{
public:
	::Class_1_7E6400452836B7AD* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_7E6400452836B7AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E6400452836B7AD*))((::PBYTE)hIl2Cpp + CLASS_1_7E6400452836B7AD_CLASS_1_22F4ED77F1E3083B__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E6400452836B7AD_CLASS_1_22F4ED77F1E3083B_COMPARE_OFFSET))(this, a1, a2);
	}
};
