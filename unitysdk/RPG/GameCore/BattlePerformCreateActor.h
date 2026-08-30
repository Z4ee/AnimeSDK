#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePerformActorCreateType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMCREATEACTOR_METHOD_2_5B15045B99203C1C_OFFSET UNITYSDK_OFFSET(0x1CE7CA30)
#define RPG_GAMECORE_BATTLEPERFORMCREATEACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7CD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformCreateActor_TypeDefinitionIndex = 23121;

	class BattlePerformCreateActor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* StageInitKey; // 0x18
		::RPG::GameCore::BattlePerformActorCreateType CharacterType; // 0x20
		::System::UInt32 CharacterID; // 0x24
		::System::Boolean UsePlayableGraphEmo; // 0x28
		::System::Boolean OverridePrefab; // 0x29
		::System::String* ModelPath; // 0x30
		::System::String* JsonPath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCREATEACTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5B15045B99203C1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformCreateActor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformCreateActor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCREATEACTOR_METHOD_2_5B15045B99203C1C_OFFSET))(a1, a2);
		}
	};
}
