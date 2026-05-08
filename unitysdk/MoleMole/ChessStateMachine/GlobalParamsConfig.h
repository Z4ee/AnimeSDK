#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/ConfigBase.h"

namespace MoleMole::ChessStateMachine { class ParamsClass; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG_CLEARCACHEDATA_OFFSET UNITYSDK_OFFSET(0x1100ECF0)
#define MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x1100EE80)
#define MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG_INITPARAMSLIST_OFFSET UNITYSDK_OFFSET(0x1100E3B0)
#define MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1100F100)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GlobalParamsConfig_TypeDefinitionIndex = 55734;

	class GlobalParamsConfig : public ::MoleMole::ChessStateMachine::ConfigBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ParamsClass*>* globalParamsList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::ParamsClass*>*>* smParams; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::ParamsClass*>* globalParams; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void InitParamsList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG_INITPARAMSLIST_OFFSET))(this);
		}

		::System::Void ClearCacheData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG_CLEARCACHEDATA_OFFSET))(this);
		}

		::MoleMole::ChessStateMachine::GlobalParamsConfig* DeepCopy()
		{
			return ((::MoleMole::ChessStateMachine::GlobalParamsConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG_DEEPCOPY_OFFSET))(this);
		}
	};
}
