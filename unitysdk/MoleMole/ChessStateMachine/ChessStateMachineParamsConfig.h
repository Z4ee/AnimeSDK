#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::ChessStateMachine { class GlobalParamsConfig; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINEPARAMSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12A2D8C0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ChessStateMachineParamsConfig_TypeDefinitionIndex = 80788;

	class ChessStateMachineParamsConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::String* smGuid; // 0x58
		::System::String* smId; // 0x60
		::MoleMole::ChessStateMachine::GlobalParamsConfig* globalParamsConfig; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINEPARAMSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
