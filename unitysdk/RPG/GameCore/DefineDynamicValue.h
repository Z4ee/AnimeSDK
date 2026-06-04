#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEFINEDYNAMICVALUE_METHOD_3_0925065E29B8E8D5_OFFSET UNITYSDK_OFFSET(0x19698180)
#define RPG_GAMECORE_DEFINEDYNAMICVALUE_METHOD_3_F76DD8BC165DC97E_OFFSET UNITYSDK_OFFSET(0x19698060)
#define RPG_GAMECORE_DEFINEDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19698100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DefineDynamicValue_TypeDefinitionIndex = 21649;

	class DefineDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* DynamicKey; // 0x20
		::RPG::GameCore::DynamicFloat* ResetValue; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30
		::System::Boolean LimitToStandardMode; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F76DD8BC165DC97E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DefineDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DefineDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICVALUE_METHOD_3_F76DD8BC165DC97E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0925065E29B8E8D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DefineDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DefineDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICVALUE_METHOD_3_0925065E29B8E8D5_OFFSET))(a1, a2);
		}
	};
}
