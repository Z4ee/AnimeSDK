#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E240D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_METHOD_4_7160C3A4C31F3BE1_OFFSET UNITYSDK_OFFSET(0x18E23D90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_METHOD_4_76FF9BB2F2A6241B_OFFSET UNITYSDK_OFFSET(0x18E23C70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E23D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByModifierValue_TypeDefinitionIndex = 22017;

	class SetDynamicValueByModifierValue : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::NumOperationType OperationType; // 0x28
		::RPG::GameCore::ModifierValueType ValueType; // 0x2C
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* Lookup; // 0x30
		::RPG::GameCore::DynamicFloat* Multiplier; // 0x38
		::System::String* DynamicKey; // 0x40
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_76FF9BB2F2A6241B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByModifierValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_METHOD_4_76FF9BB2F2A6241B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7160C3A4C31F3BE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByModifierValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_METHOD_4_7160C3A4C31F3BE1_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
