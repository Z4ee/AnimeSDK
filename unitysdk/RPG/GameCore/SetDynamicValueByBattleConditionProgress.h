#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2DF230)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_METHOD_4_1F15A9951CC01850_OFFSET UNITYSDK_OFFSET(0x1C2DF020)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_METHOD_4_D6F747A283B66DE5_OFFSET UNITYSDK_OFFSET(0x1C2DEFE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DF010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBattleConditionProgress_TypeDefinitionIndex = 22354;

	class SetDynamicValueByBattleConditionProgress : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleConditionID; // 0x18
		::System::String* CurrentProgressKey; // 0x20
		::System::String* TotalProgressKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D6F747A283B66DE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_METHOD_4_D6F747A283B66DE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F15A9951CC01850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_METHOD_4_1F15A9951CC01850_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
