#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_TRIGGEREVENTCONFIG_METHOD_2_580C714DA002B6E7_OFFSET UNITYSDK_OFFSET(0x1B055DD0)
#define RPG_GAMECORE_TRIGGEREVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B055F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEventConfig_TypeDefinitionIndex = 17907;

	class TriggerEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimTriggerTargetType TargetType; // 0x10
		::Il2CppArray<::RPG::GameCore::LittleGameEvent*>* EnterEvents; // 0x18
		::Il2CppArray<::RPG::GameCore::LittleGameEvent*>* ExitEvents; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_580C714DA002B6E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREVENTCONFIG_METHOD_2_580C714DA002B6E7_OFFSET))(a1, a2);
		}
	};
}
