#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBEHAVIORCONFIG_METHOD_2_84F60838E35EFFF9_OFFSET UNITYSDK_OFFSET(0x1CDE18B0)
#define RPG_GAMECORE_ADVENTUREBEHAVIORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE1C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBehaviorConfig_TypeDefinitionIndex = 17418;

	class AdventureBehaviorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Priority; // 0x10
		::System::Boolean ForceControl; // 0x14
		::RPG::GameCore::AdventureCharacterUnitState AIAbnormalState; // 0x18
		::RPG::GameCore::AdventureBehaviorClampAlertLevel AlertLevelClamp; // 0x1C
		::Il2CppArray<::System::String*>* PersistantEffectList; // 0x20
		::Il2CppArray<::System::String*>* EffectsPath; // 0x28
		::System::Boolean MuteAlertLevelDecline; // 0x30
		::System::Boolean MaxAlertLevelOnAdd; // 0x31
		::System::Boolean AffectAlertValue; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEHAVIORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_84F60838E35EFFF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureBehaviorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureBehaviorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEHAVIORCONFIG_METHOD_2_84F60838E35EFFF9_OFFSET))(a1, a2);
		}
	};
}
