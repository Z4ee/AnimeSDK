#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LocationExtraConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_METHOD_3_290B0C8EAA125B1E_OFFSET UNITYSDK_OFFSET(0x1D1BAE60)
#define RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_METHOD_3_9227538EE359B3B1_OFFSET UNITYSDK_OFFSET(0x1D1BAD10)
#define RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BADD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyDefaultTeamFormation_TypeDefinitionIndex = 22240;

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

		static ::System::Void Method_3_9227538EE359B3B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyDefaultTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyDefaultTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_METHOD_3_9227538EE359B3B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_290B0C8EAA125B1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyDefaultTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyDefaultTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_METHOD_3_290B0C8EAA125B1E_OFFSET))(a1, a2);
		}
	};
}
