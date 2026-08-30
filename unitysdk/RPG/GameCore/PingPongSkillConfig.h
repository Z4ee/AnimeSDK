#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongMPSkillInfo; }
namespace RPG::GameCore { class PingPongSPSkillInfo; }

#define RPG_GAMECORE_PINGPONGSKILLCONFIG_METHOD_2_DE1E976379CE8186_OFFSET UNITYSDK_OFFSET(0x1D332A90)
#define RPG_GAMECORE_PINGPONGSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D333B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongSkillConfig_TypeDefinitionIndex = 16790;

	class PingPongSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PingPongSPSkillInfo*>* SPSkillList; // 0x10
		::RPG::GameCore::PingPongMPSkillInfo* MPSkill; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DE1E976379CE8186(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGSKILLCONFIG_METHOD_2_DE1E976379CE8186_OFFSET))(a1, a2);
		}
	};
}
