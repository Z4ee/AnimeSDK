#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_0C43753C4F21E75C_OFFSET UNITYSDK_OFFSET(0x19569B50)
#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_2F2D87B8766B1A0C_OFFSET UNITYSDK_OFFSET(0x19569D50)
#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_3D288FE505203321_OFFSET UNITYSDK_OFFSET(0x19569CD0)
#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_6C198BA1F2172752_OFFSET UNITYSDK_OFFSET(0x19569A80)
#define RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19569B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsMultiTargetCustomTeamFormation_TypeDefinitionIndex = 21407;

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

		static ::System::Void Method_4_3D288FE505203321(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_3D288FE505203321_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2F2D87B8766B1A0C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMULTITARGETCUSTOMTEAMFORMATION_METHOD_4_2F2D87B8766B1A0C_OFFSET))(a1, a2);
		}
	};
}
