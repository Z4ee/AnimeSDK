#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_130;
namespace System { class String; }

#define RPG_GAMECORE_LEVELHEALHP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6977A0)
#define RPG_GAMECORE_LEVELHEALHP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE697750)
#define RPG_GAMECORE_LEVELHEALHP__CTOR_OFFSET UNITYSDK_OFFSET(0xE697710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelHealHP_TypeDefinitionIndex = 56920;

	class LevelHealHP : public ::System::Object
	{
	public:
		::Class_1_43BD383C98B4C0C5_130* HealDataRef; // 0x10
		::System::String* AbilityID; // 0x18
		::RPG::GameCore::FixPoint HealValue; // 0x20
		::RPG::GameCore::FixPoint ActualHealValue; // 0x28
		::RPG::GameCore::FixPoint PostHP; // 0x30
		::System::UInt32 SourceHealerID; // 0x38
		::System::UInt32 TargetID; // 0x3C
		::RPG::GameCore::FixPoint HealPercentage; // 0x40
		::System::UInt32 HealerID; // 0x48
		::RPG::GameCore::FixPoint PreHP; // 0x50

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::FixPoint a8, ::Class_1_43BD383C98B4C0C5_130* a9, ::System::String* a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_43BD383C98B4C0C5_130*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELHEALHP__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
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
