#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_97DE5977799078C9_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xB49F680)
#define CLASS_2_97DE5977799078C9_METHOD_2_90E815EA1EA65576_OFFSET UNITYSDK_OFFSET(0xB49F790)
#define CLASS_2_97DE5977799078C9__CTOR_OFFSET UNITYSDK_OFFSET(0xB49F930)

inline static constexpr unsigned int Class_2_97DE5977799078C9_TypeDefinitionIndex = 76627;

class Class_2_97DE5977799078C9 : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97DE5977799078C9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97DE5977799078C9_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_90E815EA1EA65576(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97DE5977799078C9_METHOD_2_90E815EA1EA65576_OFFSET))(this, a1);
	}
};
