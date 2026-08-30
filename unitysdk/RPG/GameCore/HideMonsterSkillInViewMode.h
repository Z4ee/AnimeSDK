#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_METHOD_3_2F60DCFB4D816AD9_OFFSET UNITYSDK_OFFSET(0x1D18DEC0)
#define RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_METHOD_3_4A7F28E96BA1AC16_OFFSET UNITYSDK_OFFSET(0x1D18DF80)
#define RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18DF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideMonsterSkillInViewMode_TypeDefinitionIndex = 22930;

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

		static ::System::Void Method_3_2F60DCFB4D816AD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideMonsterSkillInViewMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideMonsterSkillInViewMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_METHOD_3_2F60DCFB4D816AD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4A7F28E96BA1AC16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideMonsterSkillInViewMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideMonsterSkillInViewMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_METHOD_3_4A7F28E96BA1AC16_OFFSET))(a1, a2);
		}
	};
}
