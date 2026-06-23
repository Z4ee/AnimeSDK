#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/CompareType.h"
#include "unitysdk/Struct_2_2DD1BE1CAC90B791.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class GlobalParamsConfig; }
namespace MoleMole::ChessStateMachine { class ParamsClass; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHESSSTATEMACHINE_CONDITIONDATA_CHECKVALUE_1_OFFSET UNITYSDK_OFFSET(0x106B1090)
#define MOLEMOLE_CHESSSTATEMACHINE_CONDITIONDATA_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x106B0EB0)
#define MOLEMOLE_CHESSSTATEMACHINE_CONDITIONDATA_GETPARAMVALUENAMEBYUNITID_OFFSET UNITYSDK_OFFSET(0x106B0E30)
#define MOLEMOLE_CHESSSTATEMACHINE_CONDITIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x106B1340)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ConditionData_TypeDefinitionIndex = 68803;

	class ConditionData : public ::System::Object
	{
	public:
		::System::String* unitId; // 0x10
		::System::String* conditionName; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::ParamsClass*>* selectList; // 0x20
		::MoleMole::ChessStateMachine::GlobalParamsConfig* globalParams; // 0x28
		::System::Int32 intValue; // 0x30
		::System::Boolean boolValue; // 0x34
		::System::Single floatValue; // 0x38
		::MoleMole::ChessStateMachine::CompareType _compareType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONDITIONDATA__CTOR_OFFSET))(this);
		}

		static ::System::String* GetParamValueNameByUnitId(::System::String* unitId, ::System::String* valueKey)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONDITIONDATA_GETPARAMVALUENAMEBYUNITID_OFFSET))(unitId, valueKey);
		}

		::System::Boolean CheckValue(::Struct_2_2DD1BE1CAC90B791 rtParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_2DD1BE1CAC90B791))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONDITIONDATA_CHECKVALUE_OFFSET))(this, rtParams);
		}

		::System::Boolean CheckValue_1(::MoleMole::ChessStateMachine::ParamsClass* paramsClass)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessStateMachine::ParamsClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONDITIONDATA_CHECKVALUE_1_OFFSET))(this, paramsClass);
		}
	};
}
