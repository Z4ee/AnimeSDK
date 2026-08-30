#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_3_912CC478F2B21832;

#define CLASS_1_2F34C7FE5984426F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A78CDD0)
#define CLASS_1_2F34C7FE5984426F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78CDC0)

inline static constexpr unsigned int Class_1_2F34C7FE5984426F_TypeDefinitionIndex = 76291;

class Class_1_2F34C7FE5984426F : public ::System::Object
{
public:
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x10

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_1_2F34C7FE5984426F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F34C7FE5984426F_EXECUTE_OFFSET))(this);
	}
};
