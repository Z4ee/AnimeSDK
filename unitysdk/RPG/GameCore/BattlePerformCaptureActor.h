#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePerformActorFindType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMCAPTUREACTOR_METHOD_2_522A9CE74C4B1787_OFFSET UNITYSDK_OFFSET(0x1CE7C6F0)
#define RPG_GAMECORE_BATTLEPERFORMCAPTUREACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7C8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformCaptureActor_TypeDefinitionIndex = 23120;

	class BattlePerformCaptureActor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* StageInitKey; // 0x18
		::RPG::GameCore::BattlePerformActorFindType FindType; // 0x20
		::System::UInt32 CharacterID; // 0x24
		::RPG::GameCore::EntityType EntityType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCAPTUREACTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_522A9CE74C4B1787(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformCaptureActor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformCaptureActor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCAPTUREACTOR_METHOD_2_522A9CE74C4B1787_OFFSET))(a1, a2);
		}
	};
}
