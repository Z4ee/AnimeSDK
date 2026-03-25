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

#define RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C2990)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_METHOD_4_A4A86B52C42BDC76_OFFSET UNITYSDK_OFFSET(0x176BDD90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_METHOD_4_A722DB70554466F9_OFFSET UNITYSDK_OFFSET(0x176C28F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM__CTOR_OFFSET UNITYSDK_OFFSET(0x176BDD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByMultiModifierValueSum_TypeDefinitionIndex = 21814;

	class SetDynamicValueByMultiModifierValueSum : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x20
		::RPG::GameCore::ModifierValueType ValueType; // 0x24
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A722DB70554466F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_METHOD_4_A722DB70554466F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A4A86B52C42BDC76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_METHOD_4_A4A86B52C42BDC76_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMULTIMODIFIERVALUESUM_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
