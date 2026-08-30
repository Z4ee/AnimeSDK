#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_FCD8E54244261EC3_METHOD_2_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0xED77470)
#define CLASS_2_FCD8E54244261EC3_METHOD_2_C42A17B66F19E92D_OFFSET UNITYSDK_OFFSET(0xED775C0)
#define CLASS_2_FCD8E54244261EC3__CTOR_OFFSET UNITYSDK_OFFSET(0xED77750)

inline static constexpr unsigned int Class_2_FCD8E54244261EC3_TypeDefinitionIndex = 76629;

class Class_2_FCD8E54244261EC3 : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCD8E54244261EC3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_41F5D9C0F0A306F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCD8E54244261EC3_METHOD_2_41F5D9C0F0A306F5_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_C42A17B66F19E92D(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FCD8E54244261EC3_METHOD_2_C42A17B66F19E92D_OFFSET))(this, a1);
	}
};
