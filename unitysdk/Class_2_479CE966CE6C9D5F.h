#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_479CE966CE6C9D5F_METHOD_2_46AFBF8614940A62_OFFSET UNITYSDK_OFFSET(0x179D3900)
#define CLASS_2_479CE966CE6C9D5F_METHOD_2_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x179D3800)
#define CLASS_2_479CE966CE6C9D5F__CTOR_OFFSET UNITYSDK_OFFSET(0x179D3A40)

inline static constexpr unsigned int Class_2_479CE966CE6C9D5F_TypeDefinitionIndex = 73149;

class Class_2_479CE966CE6C9D5F : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_479CE966CE6C9D5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A5809AB80389F7DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_479CE966CE6C9D5F_METHOD_2_A5809AB80389F7DE_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_46AFBF8614940A62(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_479CE966CE6C9D5F_METHOD_2_46AFBF8614940A62_OFFSET))(this, a1);
	}
};
