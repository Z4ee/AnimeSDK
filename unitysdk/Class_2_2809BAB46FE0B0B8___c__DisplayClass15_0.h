#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EnhanceSkillParam; }

#define CLASS_2_2809BAB46FE0B0B8___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB0B40)
#define CLASS_2_2809BAB46FE0B0B8___C__DISPLAYCLASS15_0___ONSHOWSKILLENHANCE_B__0_OFFSET UNITYSDK_OFFSET(0x15EB1330)

inline static constexpr unsigned int Class_2_2809BAB46FE0B0B8___c__DisplayClass15_0_TypeDefinitionIndex = 68684;

class Class_2_2809BAB46FE0B0B8___c__DisplayClass15_0 : public ::System::Object
{
public:
	::RPG::Client::EnhanceSkillParam* param; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2809BAB46FE0B0B8___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnShowSkillEnhance_b__0(::RPG::Client::EnhanceSkillParam* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EnhanceSkillParam*))((::PBYTE)hIl2Cpp + CLASS_2_2809BAB46FE0B0B8___C__DISPLAYCLASS15_0___ONSHOWSKILLENHANCE_B__0_OFFSET))(this, a1);
	}
};
