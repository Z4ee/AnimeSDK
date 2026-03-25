#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO_GET_HASSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xA49DD40)
#define RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO_SETSKILL_OFFSET UNITYSDK_OFFSET(0xA49EB10)
#define RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA49DA20)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillTreeChange_SkillTreeChangeInfo_TypeDefinitionIndex = 50791;

	class SkillTreeChange_SkillTreeChangeInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* SubSkills; // 0x10
		::RPG::GameCore::AvatarSkillTreeRow* Point; // 0x18
		::RPG::GameCore::AvatarSkillRow* Skill; // 0x20

		::System::Void _ctor(::RPG::GameCore::AvatarSkillTreeRow* point)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO__CTOR_OFFSET))(this, point);
		}

		::System::Void SetSkill(::RPG::GameCore::AvatarSkillRow* skill, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* subSkills)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO_SETSKILL_OFFSET))(this, skill, subSkills);
		}

		::System::Boolean get_HasSimpleDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREECHANGE_SKILLTREECHANGEINFO_GET_HASSIMPLEDESC_OFFSET))(this);
		}
	};
}
