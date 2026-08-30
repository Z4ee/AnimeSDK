#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAlertType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/UltraSkillAlertType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWBATTLEALERT_METHOD_3_37CC4E5FC2D1A6C2_OFFSET UNITYSDK_OFFSET(0x1E0A28D0)
#define RPG_GAMECORE_SHOWBATTLEALERT_METHOD_3_40196635ED83E004_OFFSET UNITYSDK_OFFSET(0x1E0A2890)
#define RPG_GAMECORE_SHOWBATTLEALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A28C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleAlert_TypeDefinitionIndex = 22672;

	class ShowBattleAlert : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::BattleAlertType AlertType; // 0x20
		::System::String* SidePrefabPath; // 0x28
		::System::String* SkillButtonPrefabPath; // 0x30
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillType; // 0x38
		::RPG::GameCore::UltraSkillAlertType UltraSkillAlertType; // 0x40
		::System::Boolean IsShow; // 0x44
		::System::String* ActiveIconPath; // 0x48
		::System::String* UnactiveIconPath; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEALERT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40196635ED83E004(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleAlert*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleAlert*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEALERT_METHOD_3_40196635ED83E004_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37CC4E5FC2D1A6C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleAlert* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleAlert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEALERT_METHOD_3_37CC4E5FC2D1A6C2_OFFSET))(a1, a2);
		}
	};
}
