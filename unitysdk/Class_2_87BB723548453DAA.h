#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_87BB723548453DAA_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x16928DF0)
#define CLASS_2_87BB723548453DAA_METHOD_2_17EF77B56C08F200_OFFSET UNITYSDK_OFFSET(0x16928F00)
#define CLASS_2_87BB723548453DAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16928FB0)

inline static constexpr unsigned int Class_2_87BB723548453DAA_TypeDefinitionIndex = 76627;

class Class_2_87BB723548453DAA : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_17EF77B56C08F200(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA_METHOD_2_17EF77B56C08F200_OFFSET))(this, a1);
	}
};
