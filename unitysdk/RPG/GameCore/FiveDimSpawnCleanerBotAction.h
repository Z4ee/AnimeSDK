#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_METHOD_4_84457B2198109CE6_OFFSET UNITYSDK_OFFSET(0x1D6AF610)
#define RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_METHOD_4_88572CF2E4AC0141_OFFSET UNITYSDK_OFFSET(0x1D6AF5D0)
#define RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AF600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSpawnCleanerBotAction_TypeDefinitionIndex = 18731;

	class FiveDimSpawnCleanerBotAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* NormalCleanerBotPreset; // 0x10
		::System::String* EnhancedCleanerBotPreset; // 0x18
		::System::String* AttachPointName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_88572CF2E4AC0141(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_METHOD_4_88572CF2E4AC0141_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_84457B2198109CE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_METHOD_4_84457B2198109CE6_OFFSET))(a1, a2);
		}
	};
}
