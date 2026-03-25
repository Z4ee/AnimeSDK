#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERTEAMAPPEAR_METHOD_3_3089BA7EF910CDE9_OFFSET UNITYSDK_OFFSET(0x17454B60)
#define RPG_GAMECORE_MONSTERTEAMAPPEAR_METHOD_3_5CB0C45CEF095730_OFFSET UNITYSDK_OFFSET(0x17454BE0)
#define RPG_GAMECORE_MONSTERTEAMAPPEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x17454BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterTeamAppear_TypeDefinitionIndex = 21624;

	class MonsterTeamAppear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::Single>* DelayAppearTimeList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEAMAPPEAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3089BA7EF910CDE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterTeamAppear*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterTeamAppear*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEAMAPPEAR_METHOD_3_3089BA7EF910CDE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5CB0C45CEF095730(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterTeamAppear* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterTeamAppear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEAMAPPEAR_METHOD_3_5CB0C45CEF095730_OFFSET))(a1, a2);
		}
	};
}
