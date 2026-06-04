#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace System { class Object; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C46F20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_METHOD_4_0B97E22B2350D1F6_OFFSET UNITYSDK_OFFSET(0x19C46D70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_METHOD_4_5092248C167D0A37_OFFSET UNITYSDK_OFFSET(0x19C46C50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19C46CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByValueEvaluator_TypeDefinitionIndex = 22522;

	class SetDynamicValueByValueEvaluator : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::DynamicString* DynamicKey; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5092248C167D0A37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByValueEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByValueEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_METHOD_4_5092248C167D0A37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0B97E22B2350D1F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_METHOD_4_0B97E22B2350D1F6_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
