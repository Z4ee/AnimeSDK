#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LocationExtraConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_METHOD_3_1E595BA546AC205E_OFFSET UNITYSDK_OFFSET(0x17430470)
#define RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_METHOD_3_6DFBC248FB01A0F5_OFFSET UNITYSDK_OFFSET(0x174305F0)
#define RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17430540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyDefaultTeamFormation_TypeDefinitionIndex = 20675;

	class ModifyDefaultTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::DynamicFloat* FormationWidthMin; // 0x20
		::RPG::GameCore::DynamicFloat* FormationWidthMax; // 0x28
		::RPG::GameCore::TargetEvaluator* TeamCenter; // 0x30
		::System::Boolean AutoBalance; // 0x38
		::Il2CppArray<::RPG::GameCore::LocationExtraConfig*>* ExtraConfig; // 0x40
		::Il2CppArray<::RPG::GameCore::LocationExtraConfig*>* ExtraConfig2; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E595BA546AC205E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyDefaultTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyDefaultTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_METHOD_3_1E595BA546AC205E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6DFBC248FB01A0F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyDefaultTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyDefaultTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_METHOD_3_6DFBC248FB01A0F5_OFFSET))(a1, a2);
		}
	};
}
