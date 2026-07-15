#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_6B4EB3AC419F7047_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x181A7130)
#define CLASS_2_6B4EB3AC419F7047_METHOD_2_A95002D4AFC751E5_OFFSET UNITYSDK_OFFSET(0x181A7200)
#define CLASS_2_6B4EB3AC419F7047__CTOR_OFFSET UNITYSDK_OFFSET(0x181A7360)

inline static constexpr unsigned int Class_2_6B4EB3AC419F7047_TypeDefinitionIndex = 73150;

class Class_2_6B4EB3AC419F7047 : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B4EB3AC419F7047__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B4EB3AC419F7047_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_A95002D4AFC751E5(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6B4EB3AC419F7047_METHOD_2_A95002D4AFC751E5_OFFSET))(this, a1);
	}
};
