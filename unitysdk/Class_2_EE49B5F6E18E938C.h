#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BCB397E4DFC5E9D6.h"
#include "unitysdk/MoleMole/Arcade/CompanionProject/CpSkillEffectData.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_15.h"
#include "unitysdk/Struct_2_BEBB04660E5E42A2.h"

#define CLASS_2_EE49B5F6E18E938C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B445310)

inline static constexpr unsigned int Class_2_EE49B5F6E18E938C_TypeDefinitionIndex = 83410;

class Class_2_EE49B5F6E18E938C : public ::MoleMole::Arcade::CompanionProject::CpSkillEffectData
{
public:
	::Struct_2_BEBB04660E5E42A2 Field_2_3; // 0x28
	::Struct_2_4C8453486C91E3A1_15 Field_2_2; // 0x30
	::System::Single Field_2_1; // 0x38
	::Enum_3_BCB397E4DFC5E9D6 Field_2_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE49B5F6E18E938C__CTOR_OFFSET))(this);
	}
};
