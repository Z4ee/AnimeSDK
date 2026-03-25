#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREATTACKDETECTSUMMONUNITTRIGGERCONFIG_METHOD_2_08A0B55D81DA3169_OFFSET UNITYSDK_OFFSET(0x16F4B3A0)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTSUMMONUNITTRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4B4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackDetectSummonUnitTriggerConfig_TypeDefinitionIndex = 14894;

	class AdventureAttackDetectSummonUnitTriggerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SummonUnitID; // 0x10
		::System::String* DetectSummonUnitTriggerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSUMMONUNITTRIGGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_08A0B55D81DA3169(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectSummonUnitTriggerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectSummonUnitTriggerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSUMMONUNITTRIGGERCONFIG_METHOD_2_08A0B55D81DA3169_OFFSET))(a1, a2);
		}
	};
}
