#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongMPSkillInfo; }
namespace RPG::GameCore { class PingPongSPSkillInfo; }

#define RPG_GAMECORE_PINGPONGSKILLCONFIG_METHOD_2_5B1A4CC63E298444_OFFSET UNITYSDK_OFFSET(0x174B1650)
#define RPG_GAMECORE_PINGPONGSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174B27A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongSkillConfig_TypeDefinitionIndex = 15552;

	class PingPongSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PingPongSPSkillInfo*>* SPSkillList; // 0x10
		::RPG::GameCore::PingPongMPSkillInfo* MPSkill; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5B1A4CC63E298444(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGSKILLCONFIG_METHOD_2_5B1A4CC63E298444_OFFSET))(a1, a2);
		}
	};
}
