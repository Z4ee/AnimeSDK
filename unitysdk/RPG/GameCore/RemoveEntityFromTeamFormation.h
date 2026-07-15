#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION_METHOD_3_3240488C275C5FE7_OFFSET UNITYSDK_OFFSET(0x1B9CF7B0)
#define RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION_METHOD_3_427F600F468C2850_OFFSET UNITYSDK_OFFSET(0x1B9CF770)
#define RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CF7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveEntityFromTeamFormation_TypeDefinitionIndex = 21821;

	class RemoveEntityFromTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean RemainInTeam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_427F600F468C2850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveEntityFromTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveEntityFromTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION_METHOD_3_427F600F468C2850_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3240488C275C5FE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveEntityFromTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveEntityFromTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION_METHOD_3_3240488C275C5FE7_OFFSET))(a1, a2);
		}
	};
}
