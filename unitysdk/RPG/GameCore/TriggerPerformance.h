#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class TriggerPerformanceMask; }

#define RPG_GAMECORE_TRIGGERPERFORMANCE_METHOD_3_86EC3551A049531F_OFFSET UNITYSDK_OFFSET(0x19E1A210)
#define RPG_GAMECORE_TRIGGERPERFORMANCE_METHOD_3_A026AB60F99F9F50_OFFSET UNITYSDK_OFFSET(0x19E1A290)
#define RPG_GAMECORE_TRIGGERPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E1A260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPerformance_TypeDefinitionIndex = 19160;

	class TriggerPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x18
		::System::UInt32 PerformanceID; // 0x1C
		::RPG::GameCore::DynamicString* PerformanceType_DS; // 0x20
		::RPG::GameCore::DynamicString* PerformanceID_DS; // 0x28
		::System::Boolean SaveProgress; // 0x30
		::RPG::GameCore::TriggerPerformanceMask* MaskConfig; // 0x38
		::System::Boolean InheritOwnerEntityCustomData; // 0x40
		::RPG::GameCore::LevelGraphValueSource* ValueSource; // 0x48
		::System::Boolean CloseScreenCrack; // 0x50
		::System::Boolean CloseMaskAndCrack; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_86EC3551A049531F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERFORMANCE_METHOD_3_86EC3551A049531F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A026AB60F99F9F50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERFORMANCE_METHOD_3_A026AB60F99F9F50_OFFSET))(a1, a2);
		}
	};
}
