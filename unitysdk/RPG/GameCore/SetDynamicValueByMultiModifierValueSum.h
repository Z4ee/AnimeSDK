#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2E51C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_METHOD_4_62AB6AE478816282_OFFSET UNITYSDK_OFFSET(0x1C2E4F20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_METHOD_4_A9B016A01613B330_OFFSET UNITYSDK_OFFSET(0x1C2E4E80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E4EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByMultiModifierValueSum_TypeDefinitionIndex = 22732;

	class SetDynamicValueByMultiModifierValueSum : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x20
		::RPG::GameCore::ModifierValueType ValueType; // 0x24
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30
		::System::Boolean IncludeLimbo; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A9B016A01613B330(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_METHOD_4_A9B016A01613B330_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_62AB6AE478816282(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_METHOD_4_62AB6AE478816282_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
