#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETUPTRIGGER_METHOD_3_61F3686B46B57398_OFFSET UNITYSDK_OFFSET(0x18C768D0)
#define RPG_GAMECORE_PROPSETUPTRIGGER_METHOD_3_DE6D2D8B1BB289DA_OFFSET UNITYSDK_OFFSET(0x18C76A00)
#define RPG_GAMECORE_PROPSETUPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C76980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupTrigger_TypeDefinitionIndex = 19298;

	class PropSetupTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsSingle; // 0x20
		::RPG::GameCore::EntityType TargetEntityType; // 0x24
		::RPG::GameCore::DynamicFloat* TargetGroupID; // 0x28
		::RPG::GameCore::DynamicFloat* TargetID; // 0x30
		::Il2CppArray<::RPG::GameCore::EntityType>* TargetTypes; // 0x38
		::System::String* ColliderRelativePath; // 0x40
		::System::Boolean DestroyAfterTriggered; // 0x48
		::System::Boolean DisableAfterTriggered; // 0x49
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnter; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerExit; // 0x58
		::System::Boolean BlockDialogueInRange; // 0x60
		::System::Boolean DestroyAfterGraphEnd; // 0x61
		::System::Boolean TriggerByFakeAvatar; // 0x62
		::System::Boolean SkipFakeAvatar; // 0x63
		::RPG::GameCore::PredicateConfig* OnExitFilter; // 0x68
		::System::Boolean BlockChangeFakeAvatarCallback; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61F3686B46B57398(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTRIGGER_METHOD_3_61F3686B46B57398_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE6D2D8B1BB289DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTRIGGER_METHOD_3_DE6D2D8B1BB289DA_OFFSET))(a1, a2);
		}
	};
}
