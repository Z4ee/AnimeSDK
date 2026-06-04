#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETACTIONBARITEMANIMATORTRIGGER_METHOD_3_26F40ACAE0E5E5E2_OFFSET UNITYSDK_OFFSET(0x19C25EB0)
#define RPG_GAMECORE_SETACTIONBARITEMANIMATORTRIGGER_METHOD_3_D8F2233D3B5E73F1_OFFSET UNITYSDK_OFFSET(0x19C25F30)
#define RPG_GAMECORE_SETACTIONBARITEMANIMATORTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C25F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetActionBarItemAnimatorTrigger_TypeDefinitionIndex = 21914;

	class SetActionBarItemAnimatorTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* StoreKey; // 0x20
		::System::String* TriggerName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONBARITEMANIMATORTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_26F40ACAE0E5E5E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetActionBarItemAnimatorTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetActionBarItemAnimatorTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONBARITEMANIMATORTRIGGER_METHOD_3_26F40ACAE0E5E5E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D8F2233D3B5E73F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetActionBarItemAnimatorTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetActionBarItemAnimatorTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONBARITEMANIMATORTRIGGER_METHOD_3_D8F2233D3B5E73F1_OFFSET))(a1, a2);
		}
	};
}
