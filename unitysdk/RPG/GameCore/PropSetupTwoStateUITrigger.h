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

#define RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_METHOD_3_7FE765052D040A68_OFFSET UNITYSDK_OFFSET(0x19A993A0)
#define RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_METHOD_3_862C363D3936A688_OFFSET UNITYSDK_OFFSET(0x19A99580)
#define RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A994A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupTwoStateUITrigger_TypeDefinitionIndex = 20994;

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

		static ::System::Void Method_3_7FE765052D040A68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupTwoStateUITrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupTwoStateUITrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_METHOD_3_7FE765052D040A68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_862C363D3936A688(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupTwoStateUITrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupTwoStateUITrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_METHOD_3_862C363D3936A688_OFFSET))(a1, a2);
		}
	};
}
