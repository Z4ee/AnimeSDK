#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A959CE1F6FCD89E0;

#define CLASS_1_A959CE1F6FCD89E0_CLASS_1_22F4ED77F1E3083B_1_COMPARE_OFFSET UNITYSDK_OFFSET(0x17355AF0)
#define CLASS_1_A959CE1F6FCD89E0_CLASS_1_22F4ED77F1E3083B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17355AE0)

inline static constexpr unsigned int Class_1_A959CE1F6FCD89E0_Class_1_22F4ED77F1E3083B_1_TypeDefinitionIndex = 17178;

class Class_1_A959CE1F6FCD89E0_Class_1_22F4ED77F1E3083B_1 : public ::System::Object
{
public:
	::Class_1_A959CE1F6FCD89E0* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_A959CE1F6FCD89E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A959CE1F6FCD89E0*))((::PBYTE)hIl2Cpp + CLASS_1_A959CE1F6FCD89E0_CLASS_1_22F4ED77F1E3083B_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A959CE1F6FCD89E0_CLASS_1_22F4ED77F1E3083B_1_COMPARE_OFFSET))(this, a1, a2);
	}
};
