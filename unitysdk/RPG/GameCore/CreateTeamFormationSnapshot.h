#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT_METHOD_3_59C5688F42F30A5E_OFFSET UNITYSDK_OFFSET(0x188466A0)
#define RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT_METHOD_3_89BDFFDC46474BD4_OFFSET UNITYSDK_OFFSET(0x18846600)
#define RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x18846660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateTeamFormationSnapshot_TypeDefinitionIndex = 21369;

	class CreateTeamFormationSnapshot : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::String* FormationSnapshotName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89BDFFDC46474BD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateTeamFormationSnapshot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateTeamFormationSnapshot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT_METHOD_3_89BDFFDC46474BD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_59C5688F42F30A5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateTeamFormationSnapshot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateTeamFormationSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETEAMFORMATIONSNAPSHOT_METHOD_3_59C5688F42F30A5E_OFFSET))(a1, a2);
		}
	};
}
