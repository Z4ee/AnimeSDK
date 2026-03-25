#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPanelShowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWBATTLEAVATARPANEL_METHOD_3_1BF2D66CEDED86E7_OFFSET UNITYSDK_OFFSET(0x176F4E20)
#define RPG_GAMECORE_SHOWBATTLEAVATARPANEL_METHOD_3_ED69D0A7DB9C1B28_OFFSET UNITYSDK_OFFSET(0x176F4EA0)
#define RPG_GAMECORE_SHOWBATTLEAVATARPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x176F4E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleAvatarPanel_TypeDefinitionIndex = 21013;

	class ShowBattleAvatarPanel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AvatarPanelShowType ShowType; // 0x18
		::RPG::GameCore::TargetEvaluator* CustomTargetType; // 0x20
		::System::Boolean DisableNotShowPanelUltraBtn; // 0x28
		::System::String* UniqueKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEAVATARPANEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1BF2D66CEDED86E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleAvatarPanel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleAvatarPanel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEAVATARPANEL_METHOD_3_1BF2D66CEDED86E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED69D0A7DB9C1B28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleAvatarPanel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleAvatarPanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEAVATARPANEL_METHOD_3_ED69D0A7DB9C1B28_OFFSET))(a1, a2);
		}
	};
}
