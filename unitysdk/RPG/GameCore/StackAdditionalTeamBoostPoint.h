#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SpecialBpFeature; }

#define RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT_METHOD_3_75490B573ABE4700_OFFSET UNITYSDK_OFFSET(0x18E85CF0)
#define RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT_METHOD_3_8DF6C79F742DB611_OFFSET UNITYSDK_OFFSET(0x18E85C60)
#define RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E85CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackAdditionalTeamBoostPoint_TypeDefinitionIndex = 22521;

	class StackAdditionalTeamBoostPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::SpecialBpFeature* OverrideBpFeature; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8DF6C79F742DB611(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackAdditionalTeamBoostPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackAdditionalTeamBoostPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT_METHOD_3_8DF6C79F742DB611_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_75490B573ABE4700(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackAdditionalTeamBoostPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackAdditionalTeamBoostPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT_METHOD_3_75490B573ABE4700_OFFSET))(a1, a2);
		}
	};
}
