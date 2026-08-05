#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_759;
class Class_3_9FEE8E90DEF06DEF_2;

#define CLASS_1_78C576179D59721D_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x12D8A900)
#define CLASS_1_78C576179D59721D_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x12D8AB80)
#define CLASS_1_78C576179D59721D__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8A7F0)

inline static constexpr unsigned int Class_1_78C576179D59721D_TypeDefinitionIndex = 45911;

class Class_1_78C576179D59721D : public ::System::Object
{
public:
	::Class_3_9FEE8E90DEF06DEF_2* Field_1_7; // 0x10
	::Class_2_208CC9941471731A_759* Field_1_6; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::Class_3_9FEE8E90DEF06DEF_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9FEE8E90DEF06DEF_2*))((::PBYTE)hIl2Cpp + CLASS_1_78C576179D59721D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78C576179D59721D_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78C576179D59721D_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}
};
