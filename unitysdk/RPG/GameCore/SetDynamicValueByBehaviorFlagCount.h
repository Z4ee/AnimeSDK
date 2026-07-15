#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2DFAB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_METHOD_4_03CFE0D95FE20D2E_OFFSET UNITYSDK_OFFSET(0x1C2DF8C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_METHOD_4_498FEC7DD022B7C3_OFFSET UNITYSDK_OFFSET(0x1C2DF880)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DF8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBehaviorFlagCount_TypeDefinitionIndex = 22739;

	class SetDynamicValueByBehaviorFlagCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_498FEC7DD022B7C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_METHOD_4_498FEC7DD022B7C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_03CFE0D95FE20D2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_METHOD_4_03CFE0D95FE20D2E_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
