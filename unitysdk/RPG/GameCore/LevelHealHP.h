#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_105;
namespace System { class String; }

#define RPG_GAMECORE_LEVELHEALHP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98E320)
#define RPG_GAMECORE_LEVELHEALHP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98E2D0)
#define RPG_GAMECORE_LEVELHEALHP__CTOR_OFFSET UNITYSDK_OFFSET(0xA98E270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelHealHP_TypeDefinitionIndex = 45638;

	class LevelHealHP : public ::System::Object
	{
	public:
		::System::String* AbilityID; // 0x10
		::Class_1_43BD383C98B4C0C5_105* HealDataRef; // 0x18
		::RPG::GameCore::FixPoint HealPercentage; // 0x20
		::RPG::GameCore::FixPoint PreHP; // 0x28
		::System::UInt32 HealerID; // 0x30
		::RPG::GameCore::FixPoint HealValue; // 0x38
		::RPG::GameCore::FixPoint PostHP; // 0x40
		::RPG::GameCore::FixPoint ActualHealValue; // 0x48
		::System::UInt32 TargetID; // 0x50
		::System::UInt32 SourceHealerID; // 0x54

		::System::Void _ctor(::System::UInt32 healerId, ::System::UInt32 sourceHealerID, ::System::UInt32 targetId, ::RPG::GameCore::FixPoint healPercentage, ::RPG::GameCore::FixPoint healValue, ::RPG::GameCore::FixPoint actualHealValue, ::RPG::GameCore::FixPoint preHp, ::RPG::GameCore::FixPoint postHp, ::Class_1_43BD383C98B4C0C5_105* pHealData, ::System::String* sAbilityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_43BD383C98B4C0C5_105*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELHEALHP__CTOR_OFFSET))(this, healerId, sourceHealerID, targetId, healPercentage, healValue, actualHealValue, preHp, postHp, pHealData, sAbilityID);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELHEALHP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELHEALHP_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
