#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETUPABILITYTRIGGER_METHOD_3_046D7273CC8E0035_OFFSET UNITYSDK_OFFSET(0x1D182A60)
#define RPG_GAMECORE_PROPSETUPABILITYTRIGGER_METHOD_3_29F231EE3870357B_OFFSET UNITYSDK_OFFSET(0x1D182980)
#define RPG_GAMECORE_PROPSETUPABILITYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D182A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupAbilityTrigger_TypeDefinitionIndex = 20117;

	class PropSetupAbilityTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* ID; // 0x20
		::System::Boolean TargetIsOwner; // 0x28
		::System::String* CustomTriggerName; // 0x30
		::System::Boolean Enable; // 0x38
		::RPG::GameCore::DynamicFloat* Duration; // 0x40
		::Il2CppArray<::RPG::GameCore::EntityType>* TriggerTargetTypes; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerCreate; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerDestroy; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnable; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerDisable; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnter; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerExit; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPABILITYTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_29F231EE3870357B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupAbilityTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupAbilityTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPABILITYTRIGGER_METHOD_3_29F231EE3870357B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_046D7273CC8E0035(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupAbilityTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupAbilityTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPABILITYTRIGGER_METHOD_3_046D7273CC8E0035_OFFSET))(a1, a2);
		}
	};
}
