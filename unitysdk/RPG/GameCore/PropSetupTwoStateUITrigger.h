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

#define RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_METHOD_3_5148000FB8338B68_OFFSET UNITYSDK_OFFSET(0x175278D0)
#define RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_METHOD_3_531DA6F1DE7733A6_OFFSET UNITYSDK_OFFSET(0x175276F0)
#define RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x175277F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupTwoStateUITrigger_TypeDefinitionIndex = 20408;

	class PropSetupTwoStateUITrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ColliderRelativePath; // 0x18
		::RPG::GameCore::JsonEnum* IconType1; // 0x20
		::RPG::Client::TextID ButtonText1; // 0x28
		::RPG::GameCore::DynamicString* ButtonTextCustom1; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ButtonCallback1; // 0x40
		::RPG::GameCore::JsonEnum* IconType2; // 0x48
		::RPG::Client::TextID ButtonText2; // 0x50
		::RPG::GameCore::DynamicString* ButtonTextCustom2; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ButtonCallback2; // 0x68
		::System::Single UIProtectTime; // 0x70
		::System::Boolean ForceInteractInDanger; // 0x74
		::System::Boolean ConsiderAngleLimit; // 0x75
		::System::Single InteractAngleRange; // 0x78
		::Il2CppArray<::RPG::GameCore::EntityType>* OverrideTargetTypes; // 0x80
		::System::Boolean TriggerByFakeAvatar; // 0x88
		::System::Boolean SkipFakeAvatar; // 0x89
		::RPG::GameCore::PredicateConfig* OnEnterFilter; // 0x90
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_531DA6F1DE7733A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupTwoStateUITrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupTwoStateUITrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_METHOD_3_531DA6F1DE7733A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5148000FB8338B68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupTwoStateUITrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupTwoStateUITrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_METHOD_3_5148000FB8338B68_OFFSET))(a1, a2);
		}
	};
}
