#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class IslandStateConditionSet; }

#define RPG_GAMECORE_ISLANDSTATECONFIG_METHOD_2_CB849C350E5A1BEC_OFFSET UNITYSDK_OFFSET(0x18A23E60)
#define RPG_GAMECORE_ISLANDSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A23F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IslandStateConfig_TypeDefinitionIndex = 18153;

	class IslandStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StateID; // 0x10
		::RPG::GameCore::IslandStateConditionSet* Condition; // 0x18
		::RPG::GameCore::HoyoTagContainer* Tag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB849C350E5A1BEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IslandStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IslandStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATECONFIG_METHOD_2_CB849C350E5A1BEC_OFFSET))(a1, a2);
		}
	};
}
