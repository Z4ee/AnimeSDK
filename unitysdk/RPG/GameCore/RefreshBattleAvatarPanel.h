#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_METHOD_3_1220339E4CAC2280_OFFSET UNITYSDK_OFFSET(0x1D38FA40)
#define RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_METHOD_3_B98B3C74BD31F93D_OFFSET UNITYSDK_OFFSET(0x1D38FB10)
#define RPG_GAMECORE_REFRESHBATTLEAVATARPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D38FB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshBattleAvatarPanel_TypeDefinitionIndex = 22561;

	class RefreshBattleAvatarPanel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHBATTLEAVATARPANEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1220339E4CAC2280(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshBattleAvatarPanel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshBattleAvatarPanel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_METHOD_3_1220339E4CAC2280_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B98B3C74BD31F93D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshBattleAvatarPanel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshBattleAvatarPanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_METHOD_3_B98B3C74BD31F93D_OFFSET))(a1, a2);
		}
	};
}
