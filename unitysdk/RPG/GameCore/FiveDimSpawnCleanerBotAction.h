#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_METHOD_3_276AD73934FF8B7C_OFFSET UNITYSDK_OFFSET(0x1D87C0D0)
#define RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_METHOD_3_52019B7E08AB1153_OFFSET UNITYSDK_OFFSET(0x1D87C110)
#define RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87C100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSpawnCleanerBotAction_TypeDefinitionIndex = 18521;

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

		static ::System::Void Method_3_276AD73934FF8B7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_METHOD_3_276AD73934FF8B7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52019B7E08AB1153(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNCLEANERBOTACTION_METHOD_3_52019B7E08AB1153_OFFSET))(a1, a2);
		}
	};
}
