#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_971AA0341F837710;
namespace RPG::GameCore { class RtSkillConfig; }

#define CLASS_1_B6B5A6C41D7C342D___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x123FCB40)
#define CLASS_1_B6B5A6C41D7C342D___C__DISPLAYCLASS39_0___INITSKILLDATAS_B__0_OFFSET UNITYSDK_OFFSET(0x123FCDB0)

inline static constexpr unsigned int Class_1_B6B5A6C41D7C342D___c__DisplayClass39_0_TypeDefinitionIndex = 49987;

class Class_1_B6B5A6C41D7C342D___c__DisplayClass39_0 : public ::System::Object
{
public:
	::RPG::GameCore::RtSkillConfig* config; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __InitSkillDatas_b__0(::Class_1_971AA0341F837710* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_971AA0341F837710*))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D___C__DISPLAYCLASS39_0___INITSKILLDATAS_B__0_OFFSET))(this, x);
	}
};
