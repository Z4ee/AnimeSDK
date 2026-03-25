#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/Client/UISkillIndexMask.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_CFCFBCDE9F5B3A0C_METHOD_1_2754F71BAC92CD24_OFFSET UNITYSDK_OFFSET(0x8BB9790)
#define CLASS_1_CFCFBCDE9F5B3A0C_METHOD_1_97E72403EEDECB5D_OFFSET UNITYSDK_OFFSET(0x8BB9830)
#define CLASS_1_CFCFBCDE9F5B3A0C_METHOD_1_D4DAABE61237C3E3_OFFSET UNITYSDK_OFFSET(0x8BB97E0)

inline static constexpr unsigned int Class_1_CFCFBCDE9F5B3A0C_TypeDefinitionIndex = 58970;

class Class_1_CFCFBCDE9F5B3A0C : public ::System::Object
{
public:
	static ::RPG::Client::UISkillIndexMask Method_1_2754F71BAC92CD24(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::Client::UISkillIndexMask(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_CFCFBCDE9F5B3A0C_METHOD_1_2754F71BAC92CD24_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D4DAABE61237C3E3(::RPG::Client::UISkillIndex a1, ::RPG::Client::UISkillIndexMask a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::UISkillIndex, ::RPG::Client::UISkillIndexMask))((::PBYTE)hIl2Cpp + CLASS_1_CFCFBCDE9F5B3A0C_METHOD_1_D4DAABE61237C3E3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_97E72403EEDECB5D(::RPG::Client::UISkillIndex a1, ::RPG::Client::UISkillIndexMask a2, ::RPG::Client::UISkillIndex a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::UISkillIndex, ::RPG::Client::UISkillIndexMask, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_CFCFBCDE9F5B3A0C_METHOD_1_97E72403EEDECB5D_OFFSET))(a1, a2, a3);
	}
};
