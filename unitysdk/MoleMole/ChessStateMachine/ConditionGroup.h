#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2956247DA7E6DBE0;
namespace MoleMole::ChessStateMachine { class ConditionData; }
namespace MoleMole::ChessStateMachine { class GlobalParamsConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_CONDITIONGROUP_CHECKCONDITIONLISTVALID_OFFSET UNITYSDK_OFFSET(0x141DA9E0)
#define MOLEMOLE_CHESSSTATEMACHINE_CONDITIONGROUP_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x141DA970)
#define MOLEMOLE_CHESSSTATEMACHINE_CONDITIONGROUP_RESETAFTERCHECKVALID_OFFSET UNITYSDK_OFFSET(0x141DAC90)
#define MOLEMOLE_CHESSSTATEMACHINE_CONDITIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x141DAEB0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ConditionGroup_TypeDefinitionIndex = 39389;

	class ConditionGroup : public ::System::Object
	{
	public:
		::System::String* unitId; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionData*>* ConditionList; // 0x18
		::MoleMole::ChessStateMachine::GlobalParamsConfig* globalParams; // 0x20
		::System::Boolean waitActionEnd; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONDITIONGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONDITIONGROUP_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean CheckConditionListValid(::Class_1_2956247DA7E6DBE0* GlobalParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2956247DA7E6DBE0*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONDITIONGROUP_CHECKCONDITIONLISTVALID_OFFSET))(this, GlobalParams);
		}

		::System::Void ResetAfterCheckValid(::Class_1_2956247DA7E6DBE0* GlobalParams)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2956247DA7E6DBE0*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONDITIONGROUP_RESETAFTERCHECKVALID_OFFSET))(this, GlobalParams);
		}
	};
}
