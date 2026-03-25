#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_0C43753C4F21E75C_OFFSET UNITYSDK_OFFSET(0x17031090)
#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_6C198BA1F2172752_OFFSET UNITYSDK_OFFSET(0x17030FC0)
#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17031040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsMultiTargetCustomTeamFormation_TypeDefinitionIndex = 20821;

	class ByIsMultiTargetCustomTeamFormation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6C198BA1F2172752(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_6C198BA1F2172752_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0C43753C4F21E75C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_0C43753C4F21E75C_OFFSET))(a1, a2);
		}
	};
}
