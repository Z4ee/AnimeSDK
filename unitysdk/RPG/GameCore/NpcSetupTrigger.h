#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_NPCSETUPTRIGGER_METHOD_3_38F1E91AE5C03249_OFFSET UNITYSDK_OFFSET(0x1D2FA0F0)
#define RPG_GAMECORE_NPCSETUPTRIGGER_METHOD_3_970A17D24A182267_OFFSET UNITYSDK_OFFSET(0x1D2FA170)
#define RPG_GAMECORE_NPCSETUPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FA140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcSetupTrigger_TypeDefinitionIndex = 21725;

	class NpcSetupTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TriggerID; // 0x20
		::System::Boolean DisableAfterTriggered; // 0x28
		::System::Single Range; // 0x2C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnter; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerExit; // 0x38
		::Il2CppArray<::RPG::GameCore::EntityType>* TargetTypes; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSETUPTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38F1E91AE5C03249(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcSetupTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcSetupTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSETUPTRIGGER_METHOD_3_38F1E91AE5C03249_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_970A17D24A182267(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcSetupTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSETUPTRIGGER_METHOD_3_970A17D24A182267_OFFSET))(a1, a2);
		}
	};
}
