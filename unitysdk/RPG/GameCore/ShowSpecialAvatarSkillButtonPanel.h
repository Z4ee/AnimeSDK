#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWSPECIALAVATARSKILLBUTTONPANEL_METHOD_3_4DF958C277D9827B_OFFSET UNITYSDK_OFFSET(0x18E67DF0)
#define RPG_GAMECORE_SHOWSPECIALAVATARSKILLBUTTONPANEL_METHOD_3_B01942101E16DF25_OFFSET UNITYSDK_OFFSET(0x18E67D20)
#define RPG_GAMECORE_SHOWSPECIALAVATARSKILLBUTTONPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18E67DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSpecialAvatarSkillButtonPanel_TypeDefinitionIndex = 22107;

	class ShowSpecialAvatarSkillButtonPanel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPECIALAVATARSKILLBUTTONPANEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B01942101E16DF25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSpecialAvatarSkillButtonPanel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSpecialAvatarSkillButtonPanel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPECIALAVATARSKILLBUTTONPANEL_METHOD_3_B01942101E16DF25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DF958C277D9827B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSpecialAvatarSkillButtonPanel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSpecialAvatarSkillButtonPanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPECIALAVATARSKILLBUTTONPANEL_METHOD_3_4DF958C277D9827B_OFFSET))(a1, a2);
		}
	};
}
