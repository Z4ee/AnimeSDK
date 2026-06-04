#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_USESKILL_METHOD_3_4474EFFF13F2A180_OFFSET UNITYSDK_OFFSET(0x19E39350)
#define RPG_GAMECORE_USESKILL_METHOD_3_D5E6F956B67D054F_OFFSET UNITYSDK_OFFSET(0x19E392D0)
#define RPG_GAMECORE_USESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E39320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseSkill_TypeDefinitionIndex = 21208;

	class UseSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SkillName; // 0x18
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x20
		::System::Boolean RecoverySkillCD; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D5E6F956B67D054F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILL_METHOD_3_D5E6F956B67D054F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4474EFFF13F2A180(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILL_METHOD_3_4474EFFF13F2A180_OFFSET))(a1, a2);
		}
	};
}
