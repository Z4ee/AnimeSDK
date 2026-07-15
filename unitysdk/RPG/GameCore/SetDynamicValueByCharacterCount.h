#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2E0600)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_METHOD_4_3702816A79E7AA1B_OFFSET UNITYSDK_OFFSET(0x1C2E0370)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_METHOD_4_589F6DC2C8426E8E_OFFSET UNITYSDK_OFFSET(0x1C2E03B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E03A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCharacterCount_TypeDefinitionIndex = 22257;

	class SetDynamicValueByCharacterCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::PredicateConfig* Predicate; // 0x30
		::System::Boolean AliveOnly; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3702816A79E7AA1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCharacterCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCharacterCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_METHOD_4_3702816A79E7AA1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_589F6DC2C8426E8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCharacterCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCharacterCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_METHOD_4_589F6DC2C8426E8E_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
