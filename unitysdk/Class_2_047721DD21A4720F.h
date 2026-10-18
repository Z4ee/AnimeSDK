#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleAddSkill; }

#define CLASS_2_047721DD21A4720F_METHOD_2_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x1C8D7270)
#define CLASS_2_047721DD21A4720F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D7260)

inline static constexpr unsigned int Class_2_047721DD21A4720F_TypeDefinitionIndex = 43126;

class Class_2_047721DD21A4720F : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAddSkill* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddSkill* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddSkill*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_047721DD21A4720F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047721DD21A4720F_METHOD_2_4487776BEE04D471_OFFSET))(this);
	}
};
