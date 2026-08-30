#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_97DE5977799078C9_1_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xC4838F0)
#define CLASS_2_97DE5977799078C9_1_METHOD_2_90E815EA1EA65576_OFFSET UNITYSDK_OFFSET(0xC4839F0)
#define CLASS_2_97DE5977799078C9_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC483B90)

inline static constexpr unsigned int Class_2_97DE5977799078C9_1_TypeDefinitionIndex = 76632;

class Class_2_97DE5977799078C9_1 : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97DE5977799078C9_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97DE5977799078C9_1_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_90E815EA1EA65576(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97DE5977799078C9_1_METHOD_2_90E815EA1EA65576_OFFSET))(this, a1);
	}
};
