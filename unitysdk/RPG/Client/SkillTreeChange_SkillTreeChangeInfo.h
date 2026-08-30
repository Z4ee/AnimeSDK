#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO_GET_HASSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xE0A7650)
#define RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO_SETSKILL_OFFSET UNITYSDK_OFFSET(0xE0A8720)
#define RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A6E40)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillTreeChange_SkillTreeChangeInfo_TypeDefinitionIndex = 62577;

	class SkillTreeChange_SkillTreeChangeInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* SubSkills; // 0x10
		::RPG::GameCore::AvatarSkillTreeRow* Point; // 0x18
		::RPG::GameCore::AvatarSkillRow* Skill; // 0x20

		::System::Void _ctor(::RPG::GameCore::AvatarSkillTreeRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetSkill(::RPG::GameCore::AvatarSkillRow* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO_SETSKILL_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_HasSimpleDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO_GET_HASSIMPLEDESC_OFFSET))(this);
		}
	};
}
