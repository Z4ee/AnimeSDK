#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C5290)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_METHOD_4_CA8453D81A87BCC4_OFFSET UNITYSDK_OFFSET(0x176C4ED0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_METHOD_4_E512AD9BB56CE1F1_OFFSET UNITYSDK_OFFSET(0x176C5000)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x176C4F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueBySkillProperty_TypeDefinitionIndex = 21796;

	class SetDynamicValueBySkillProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::System::Boolean GetCurrentSkill; // 0x20
		::System::String* SkillTriggerKey; // 0x28
		::RPG::GameCore::SkillPropertyType PropertyType; // 0x30
		::System::String* DynamicKey; // 0x38
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CA8453D81A87BCC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBySkillProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBySkillProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_METHOD_4_CA8453D81A87BCC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E512AD9BB56CE1F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBySkillProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBySkillProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_METHOD_4_E512AD9BB56CE1F1_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
