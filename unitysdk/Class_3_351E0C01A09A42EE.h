#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByCompareSkillRound; }

#define CLASS_3_351E0C01A09A42EE_METHOD_3_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x1C861E10)
#define CLASS_3_351E0C01A09A42EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C861DF0)

inline static constexpr unsigned int Class_3_351E0C01A09A42EE_TypeDefinitionIndex = 43149;

class Class_3_351E0C01A09A42EE : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCompareSkillRound* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCompareSkillRound* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareSkillRound*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_351E0C01A09A42EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_351E0C01A09A42EE_METHOD_3_4487776BEE04D471_OFFSET))(this);
	}
};
