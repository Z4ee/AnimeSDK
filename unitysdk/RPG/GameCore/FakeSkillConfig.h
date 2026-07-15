#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FAKESKILLCONFIG_METHOD_2_3DB4ED63E50BBF66_OFFSET UNITYSDK_OFFSET(0x1C06F690)
#define RPG_GAMECORE_FAKESKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06F7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FakeSkillConfig_TypeDefinitionIndex = 17460;

	class FakeSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsFakeSkill; // 0x10
		::System::Boolean PendingUltraSkill; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FAKESKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3DB4ED63E50BBF66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FakeSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FakeSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FAKESKILLCONFIG_METHOD_2_3DB4ED63E50BBF66_OFFSET))(a1, a2);
		}
	};
}
