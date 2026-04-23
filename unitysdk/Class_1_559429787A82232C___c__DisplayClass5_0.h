#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_83D980B81C9B9AFA;
namespace RPG::GameCore { class SkillData; }

#define CLASS_1_559429787A82232C___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11DD6210)
#define CLASS_1_559429787A82232C___C__DISPLAYCLASS5_0__REMOVESKILLDATA_B__0_OFFSET UNITYSDK_OFFSET(0x11DD62D0)

inline static constexpr unsigned int Class_1_559429787A82232C___c__DisplayClass5_0_TypeDefinitionIndex = 66470;

class Class_1_559429787A82232C___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::GameCore::SkillData* skillData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveSkillData_b__0(::Class_1_83D980B81C9B9AFA* data)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_1_559429787A82232C___C__DISPLAYCLASS5_0__REMOVESKILLDATA_B__0_OFFSET))(this, data);
	}
};
