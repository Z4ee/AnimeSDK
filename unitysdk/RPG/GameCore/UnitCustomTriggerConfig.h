#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_UNITCUSTOMTRIGGERCONFIG_METHOD_2_0D53C204AEEC360A_OFFSET UNITYSDK_OFFSET(0x178E4040)
#define RPG_GAMECORE_UNITCUSTOMTRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178E4D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnitCustomTriggerConfig_TypeDefinitionIndex = 16167;

	class UnitCustomTriggerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TriggerName; // 0x10
		::System::Boolean DefaultEnable; // 0x18
		::RPG::GameCore::DynamicFloat* Radius; // 0x20
		::RPG::MVector3 CenterOffset; // 0x28
		::System::Boolean UseVerticalBound; // 0x34
		::System::Single UpperBound; // 0x38
		::System::Single LowerBound; // 0x3C
		::System::Boolean UseSummonerAsCheckSource; // 0x40
		::System::Boolean NeedRaycast; // 0x41
		::System::Boolean NeedNavmeshCheck; // 0x42
		::System::Single RayStartOffsetY; // 0x44
		::System::Boolean ForceSyncTargetToSever; // 0x48
		::System::Boolean DependOnServerTarget; // 0x49
		::System::Boolean IsSingle; // 0x4A
		::RPG::GameCore::EntityType TargetEntityType; // 0x4C
		::RPG::GameCore::DynamicFloat* TargetGroupID; // 0x50
		::RPG::GameCore::DynamicFloat* TargetID; // 0x58
		::Il2CppArray<::RPG::GameCore::EntityType>* TargetTypes; // 0x60
		::RPG::GameCore::PredicateConfig* TargetFilter; // 0x68
		::System::Boolean OnlyCheckFilterOnEnter; // 0x70
		::System::Boolean DontExitAfterEnter; // 0x71
		::System::String* ColliderRelativePath; // 0x78
		::System::Boolean DestroyAfterTriggered; // 0x80
		::System::Boolean DisableAfterTriggered; // 0x81
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnable; // 0x88
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerDisable; // 0x90
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnter; // 0x98
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerExit; // 0xA0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnterRollback; // 0xA8
		::System::Boolean BlockDialogueInRange; // 0xB0
		::System::Boolean DestroyAfterGraphEnd; // 0xB1
		::System::Boolean TriggerByFakeAvatar; // 0xB2
		::System::Boolean SkipFakeAvatar; // 0xB3

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNITCUSTOMTRIGGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0D53C204AEEC360A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnitCustomTriggerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnitCustomTriggerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNITCUSTOMTRIGGERCONFIG_METHOD_2_0D53C204AEEC360A_OFFSET))(a1, a2);
		}
	};
}
