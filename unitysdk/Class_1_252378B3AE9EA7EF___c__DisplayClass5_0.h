#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_83D980B81C9B9AFA;
namespace RPG::GameCore { class SkillData; }

#define CLASS_1_252378B3AE9EA7EF___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1CFF0)
#define CLASS_1_252378B3AE9EA7EF___C__DISPLAYCLASS5_0__REMOVESKILLDATA_B__0_OFFSET UNITYSDK_OFFSET(0x13D1D0B0)

inline static constexpr unsigned int Class_1_252378B3AE9EA7EF___c__DisplayClass5_0_TypeDefinitionIndex = 67409;

class Class_1_252378B3AE9EA7EF___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::GameCore::SkillData* skillData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveSkillData_b__0(::Class_1_83D980B81C9B9AFA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_1_252378B3AE9EA7EF___C__DISPLAYCLASS5_0__REMOVESKILLDATA_B__0_OFFSET))(this, a1);
	}
};
