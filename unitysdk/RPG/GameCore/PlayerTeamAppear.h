#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERTEAMAPPEAR_METHOD_3_7E85B40EF69471E4_OFFSET UNITYSDK_OFFSET(0x1D7B3320)
#define RPG_GAMECORE_PLAYERTEAMAPPEAR_METHOD_3_A594AD8C7AC57AFF_OFFSET UNITYSDK_OFFSET(0x1D7B3360)
#define RPG_GAMECORE_PLAYERTEAMAPPEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B3350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerTeamAppear_TypeDefinitionIndex = 22700;

	class PlayerTeamAppear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::Single>* DelayAppearTimeList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERTEAMAPPEAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E85B40EF69471E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerTeamAppear*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerTeamAppear*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERTEAMAPPEAR_METHOD_3_7E85B40EF69471E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A594AD8C7AC57AFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerTeamAppear* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerTeamAppear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERTEAMAPPEAR_METHOD_3_A594AD8C7AC57AFF_OFFSET))(a1, a2);
		}
	};
}
