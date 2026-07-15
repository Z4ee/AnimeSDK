#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKPROPERTY_METHOD_3_B7281CA9C1C8EAA5_OFFSET UNITYSDK_OFFSET(0x1B0A5A80)
#define RPG_GAMECORE_STACKPROPERTY_METHOD_3_E9DBEE011D0851D4_OFFSET UNITYSDK_OFFSET(0x1B0A5AC0)
#define RPG_GAMECORE_STACKPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A5AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackProperty_TypeDefinitionIndex = 22718;

	class StackProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AbilityProperty Property; // 0x20
		::RPG::GameCore::DynamicFloat* PropertyValue; // 0x28
		::System::Boolean Silence; // 0x30
		::System::Boolean IsRefresh; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7281CA9C1C8EAA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKPROPERTY_METHOD_3_B7281CA9C1C8EAA5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9DBEE011D0851D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKPROPERTY_METHOD_3_E9DBEE011D0851D4_OFFSET))(a1, a2);
		}
	};
}
