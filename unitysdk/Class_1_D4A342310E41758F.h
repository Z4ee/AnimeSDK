#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1032;
class Class_3_9FEE8E90DEF06DEF_1;

#define CLASS_1_D4A342310E41758F_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x15A18FD0)
#define CLASS_1_D4A342310E41758F_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x15A19220)
#define CLASS_1_D4A342310E41758F__CTOR_OFFSET UNITYSDK_OFFSET(0x15A18EC0)

inline static constexpr unsigned int Class_1_D4A342310E41758F_TypeDefinitionIndex = 45196;

class Class_1_D4A342310E41758F : public ::System::Object
{
public:
	::Class_3_9FEE8E90DEF06DEF_1* Field_1_1; // 0x10
	::Class_2_208CC9941471731A_1032* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::Class_3_9FEE8E90DEF06DEF_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9FEE8E90DEF06DEF_1*))((::PBYTE)hIl2Cpp + CLASS_1_D4A342310E41758F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4A342310E41758F_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4A342310E41758F_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}
};
