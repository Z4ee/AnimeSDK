#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_METHOD_3_3FB3184A14DF4C49_OFFSET UNITYSDK_OFFSET(0x18C949C0)
#define RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_METHOD_3_B98B3C74BD31F93D_OFFSET UNITYSDK_OFFSET(0x18C94AD0)
#define RPG_GAMECORE_REFRESHBATTLEAVATARPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18C94AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshBattleAvatarPanel_TypeDefinitionIndex = 21726;

	class RefreshBattleAvatarPanel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHBATTLEAVATARPANEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3FB3184A14DF4C49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshBattleAvatarPanel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshBattleAvatarPanel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_METHOD_3_3FB3184A14DF4C49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B98B3C74BD31F93D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshBattleAvatarPanel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshBattleAvatarPanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_METHOD_3_B98B3C74BD31F93D_OFFSET))(a1, a2);
		}
	};
}
