#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_971AA0341F837710;
namespace RPG::GameCore { class RtSkillConfig; }

#define CLASS_1_C3479ABE12B5ED9B___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE2C6FA0)
#define CLASS_1_C3479ABE12B5ED9B___C__DISPLAYCLASS39_0___INITSKILLDATAS_B__0_OFFSET UNITYSDK_OFFSET(0xE2C70B0)

inline static constexpr unsigned int Class_1_C3479ABE12B5ED9B___c__DisplayClass39_0_TypeDefinitionIndex = 54420;

class Class_1_C3479ABE12B5ED9B___c__DisplayClass39_0 : public ::System::Object
{
public:
	::RPG::GameCore::RtSkillConfig* config; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __InitSkillDatas_b__0(::Class_1_971AA0341F837710* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_971AA0341F837710*))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B___C__DISPLAYCLASS39_0___INITSKILLDATAS_B__0_OFFSET))(this, a1);
	}
};
