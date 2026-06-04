#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleByCompareSkillRound; }

#define CLASS_3_351E0C01A09A42EE_METHOD_3_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x18BA74D0)
#define CLASS_3_351E0C01A09A42EE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA74B0)

inline static constexpr unsigned int Class_3_351E0C01A09A42EE_TypeDefinitionIndex = 39764;

class Class_3_351E0C01A09A42EE : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCompareSkillRound* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCompareSkillRound* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareSkillRound*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_3_351E0C01A09A42EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_351E0C01A09A42EE_METHOD_3_F1BB718E73080948_OFFSET))(this);
	}
};
