#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLCUSTOMFORMATIONCONFIG_METHOD_2_1136D03A7D7BD88D_OFFSET UNITYSDK_OFFSET(0x18E719A0)
#define RPG_GAMECORE_SKILLCUSTOMFORMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E71CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillCustomFormationConfig_TypeDefinitionIndex = 17279;

	class SkillCustomFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* FormationTarget; // 0x10
		::System::String* CustomFormationName; // 0x18
		::System::Boolean UseLevelAreaRoot; // 0x20
		::RPG::GameCore::TargetEvaluator* CustomCenterTargetType; // 0x28
		::System::Boolean CustomFormationIgnoreDying; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCUSTOMFORMATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1136D03A7D7BD88D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillCustomFormationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillCustomFormationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCUSTOMFORMATIONCONFIG_METHOD_2_1136D03A7D7BD88D_OFFSET))(a1, a2);
		}
	};
}
