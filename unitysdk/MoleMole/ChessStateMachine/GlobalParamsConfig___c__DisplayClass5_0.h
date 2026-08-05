#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class GlobalParamsConfig; }
namespace MoleMole::ChessStateMachine { class ParamsClass; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12A2D970)
#define MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG___C__DISPLAYCLASS5_0__DEEPCOPY_B__0_OFFSET UNITYSDK_OFFSET(0x12A2D980)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GlobalParamsConfig___c__DisplayClass5_0_TypeDefinitionIndex = 74243;

	class GlobalParamsConfig___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::ChessStateMachine::GlobalParamsConfig* paramConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _DeepCopy_b__0(::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ParamsClass*>* paramsList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ParamsClass*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GLOBALPARAMSCONFIG___C__DISPLAYCLASS5_0__DEEPCOPY_B__0_OFFSET))(this, paramsList);
		}
	};
}
