#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_10F0C4B3858EFB3C_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x17AC4630)
#define CLASS_2_10F0C4B3858EFB3C_METHOD_2_268F1D1E192244F4_OFFSET UNITYSDK_OFFSET(0x17AC4740)
#define CLASS_2_10F0C4B3858EFB3C__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC48D0)

inline static constexpr unsigned int Class_2_10F0C4B3858EFB3C_TypeDefinitionIndex = 76629;

class Class_2_10F0C4B3858EFB3C : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10F0C4B3858EFB3C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10F0C4B3858EFB3C_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_268F1D1E192244F4(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_10F0C4B3858EFB3C_METHOD_2_268F1D1E192244F4_OFFSET))(this, a1);
	}
};
