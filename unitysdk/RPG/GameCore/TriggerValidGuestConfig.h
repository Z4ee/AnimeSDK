#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TriggerValidGuestConfigType.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TriggerValidGuestSingleTargetConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TRIGGERVALIDGUESTCONFIG_METHOD_2_2F05C136FAF6EF53_OFFSET UNITYSDK_OFFSET(0x178D0190)
#define RPG_GAMECORE_TRIGGERVALIDGUESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178D04C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerValidGuestConfig_TypeDefinitionIndex = 22162;

	class TriggerValidGuestConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TriggerValidGuestConfigType ConfigType; // 0x10
		::System::Boolean Npc; // 0x14
		::System::Boolean NpcMonster; // 0x15
		::System::Boolean LocalPlayer; // 0x16
		::System::Boolean Teammember; // 0x17
		::System::Boolean FakePlayer; // 0x18
		::Il2CppArray<::RPG::GameCore::TriggerValidGuestSingleTargetConfig*>* TargetList; // 0x20
		::System::Collections::Generic::List_1<::Struct_2_884CDB9D0FDFAF0D>* EvaluatedInstances; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERVALIDGUESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2F05C136FAF6EF53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerValidGuestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerValidGuestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERVALIDGUESTCONFIG_METHOD_2_2F05C136FAF6EF53_OFFSET))(a1, a2);
		}
	};
}
