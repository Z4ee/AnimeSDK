#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleAddSkillLog; }

#define CLASS_2_EBF12A58C79742FF_METHOD_2_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x1C879620)
#define CLASS_2_EBF12A58C79742FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C879610)

inline static constexpr unsigned int Class_2_EBF12A58C79742FF_TypeDefinitionIndex = 43131;

class Class_2_EBF12A58C79742FF : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAddSkillLog* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddSkillLog* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddSkillLog*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_EBF12A58C79742FF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBF12A58C79742FF_METHOD_2_D58849E1895DD394_OFFSET))(this);
	}
};
