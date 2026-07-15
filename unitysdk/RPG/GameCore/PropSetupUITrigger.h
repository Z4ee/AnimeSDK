#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETUPUITRIGGER_METHOD_3_075D24740D54102A_OFFSET UNITYSDK_OFFSET(0x1B9A1B20)
#define RPG_GAMECORE_PROPSETUPUITRIGGER_METHOD_3_895B3E23A8ABBD65_OFFSET UNITYSDK_OFFSET(0x1B9A1A40)
#define RPG_GAMECORE_PROPSETUPUITRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A1AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupUITrigger_TypeDefinitionIndex = 19600;

	class PropSetupUITrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ColliderRelativePath; // 0x18
		::System::Boolean DestroyAfterTriggered; // 0x20
		::System::Boolean DisableAfterTriggered; // 0x21
		::System::Boolean DisableWhenTriggered; // 0x22
		::System::String* ButtonIcon; // 0x28
		::RPG::GameCore::JsonEnum* IconType; // 0x30
		::RPG::Client::TextID ButtonText; // 0x38
		::RPG::GameCore::DynamicString* ButtonTextCustom; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ButtonCallback; // 0x50
		::System::Boolean ForceInteractInDanger; // 0x58
		::System::Boolean ConsiderAngleLimit; // 0x59
		::System::Single InteractAngleRange; // 0x5C
		::Il2CppArray<::RPG::GameCore::EntityType>* OverrideTargetTypes; // 0x60
		::System::Boolean TriggerByFakeAvatar; // 0x68
		::System::Boolean SkipFakeAvatar; // 0x69
		::RPG::GameCore::PredicateConfig* OnEnterFilter; // 0x70
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPUITRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_895B3E23A8ABBD65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupUITrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupUITrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPUITRIGGER_METHOD_3_895B3E23A8ABBD65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_075D24740D54102A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupUITrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupUITrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPUITRIGGER_METHOD_3_075D24740D54102A_OFFSET))(a1, a2);
		}
	};
}
