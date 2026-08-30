#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKAVATARSKILL_METHOD_3_DB6A151B70D7F7EE_OFFSET UNITYSDK_OFFSET(0x1CFA06A0)
#define RPG_GAMECORE_CHECKAVATARSKILL_METHOD_3_FA186F127DD00F25_OFFSET UNITYSDK_OFFSET(0x1CFA0660)
#define RPG_GAMECORE_CHECKAVATARSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA0690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckAvatarSkill_TypeDefinitionIndex = 22713;

	class CheckAvatarSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 SkillIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAVATARSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA186F127DD00F25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckAvatarSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckAvatarSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAVATARSKILL_METHOD_3_FA186F127DD00F25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB6A151B70D7F7EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckAvatarSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckAvatarSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAVATARSKILL_METHOD_3_DB6A151B70D7F7EE_OFFSET))(a1, a2);
		}
	};
}
