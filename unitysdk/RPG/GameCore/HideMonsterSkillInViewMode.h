#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_METHOD_3_4A7F28E96BA1AC16_OFFSET UNITYSDK_OFFSET(0x172AA8C0)
#define RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_METHOD_3_AF40FAAC350034FA_OFFSET UNITYSDK_OFFSET(0x172AA7E0)
#define RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x172AA860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideMonsterSkillInViewMode_TypeDefinitionIndex = 21413;

	class HideMonsterSkillInViewMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsHide; // 0x20
		::System::UInt32 PhaseID; // 0x24
		::Il2CppArray<::System::UInt32>* SkillIDs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AF40FAAC350034FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideMonsterSkillInViewMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideMonsterSkillInViewMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_METHOD_3_AF40FAAC350034FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4A7F28E96BA1AC16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideMonsterSkillInViewMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideMonsterSkillInViewMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_METHOD_3_4A7F28E96BA1AC16_OFFSET))(a1, a2);
		}
	};
}
