#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EnhanceSkillParam; }

#define CLASS_2_2C48475D9276859B___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7006C0)
#define CLASS_2_2C48475D9276859B___C__DISPLAYCLASS15_0___ONSHOWSKILLENHANCE_B__0_OFFSET UNITYSDK_OFFSET(0xA701140)

inline static constexpr unsigned int Class_2_2C48475D9276859B___c__DisplayClass15_0_TypeDefinitionIndex = 58918;

class Class_2_2C48475D9276859B___c__DisplayClass15_0 : public ::System::Object
{
public:
	::RPG::Client::EnhanceSkillParam* param; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C48475D9276859B___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnShowSkillEnhance_b__0(::RPG::Client::EnhanceSkillParam* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EnhanceSkillParam*))((::PBYTE)hIl2Cpp + CLASS_2_2C48475D9276859B___C__DISPLAYCLASS15_0___ONSHOWSKILLENHANCE_B__0_OFFSET))(this, x);
	}
};
