#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_87BB723548453DAA_1_METHOD_2_17EF77B56C08F200_OFFSET UNITYSDK_OFFSET(0x15E6D3A0)
#define CLASS_2_87BB723548453DAA_1_METHOD_2_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x15E6D2B0)
#define CLASS_2_87BB723548453DAA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6D450)

inline static constexpr unsigned int Class_2_87BB723548453DAA_1_TypeDefinitionIndex = 73154;

class Class_2_87BB723548453DAA_1 : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA_1_METHOD_2_ED79705457B92B5C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_17EF77B56C08F200(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA_1_METHOD_2_17EF77B56C08F200_OFFSET))(this, a1);
	}
};
