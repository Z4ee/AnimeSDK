#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPanelShowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWBATTLEAVATARPANEL_METHOD_3_05CBF51A487B2BE6_OFFSET UNITYSDK_OFFSET(0x1D522B50)
#define RPG_GAMECORE_SHOWBATTLEAVATARPANEL_METHOD_3_785F613C145EA72B_OFFSET UNITYSDK_OFFSET(0x1D522B90)
#define RPG_GAMECORE_SHOWBATTLEAVATARPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D522B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleAvatarPanel_TypeDefinitionIndex = 22560;

	class ShowBattleAvatarPanel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AvatarPanelShowType ShowType; // 0x18
		::RPG::GameCore::TargetEvaluator* CustomTargetType; // 0x20
		::System::Boolean DisableNotShowPanelUltraBtn; // 0x28
		::RPG::GameCore::TargetEvaluator* ShowWithAnimTargetType; // 0x30
		::System::String* UniqueKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEAVATARPANEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05CBF51A487B2BE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleAvatarPanel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleAvatarPanel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEAVATARPANEL_METHOD_3_05CBF51A487B2BE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_785F613C145EA72B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleAvatarPanel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleAvatarPanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEAVATARPANEL_METHOD_3_785F613C145EA72B_OFFSET))(a1, a2);
		}
	};
}
