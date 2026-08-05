#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::ChessStateMachine { class GlobalParamsConfig; }
namespace MoleMole::ChessStateMachine { class LayerConfig; }
namespace MoleMole::ChessStateMachine { class StateNodeConfig; }
namespace MoleMole::ChessStateMachine { class TransitionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_GETDEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0xF12B990)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_GETNODECONFIG_OFFSET UNITYSDK_OFFSET(0xF12B8B0)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_GET_GLOBALPARAMSCONFIG_OFFSET UNITYSDK_OFFSET(0xF12B6D0)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF12BA60)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ChessStateMachineConfig_TypeDefinitionIndex = 84139;

	class ChessStateMachineConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::MoleMole::ChessStateMachine::GlobalParamsConfig** StaticGet__globalParamsConfig()
		{
			return (::MoleMole::ChessStateMachine::GlobalParamsConfig**)Il2CppClass::FromTypeDefinitionIndex(ChessStateMachineConfig_TypeDefinitionIndex)->GetStaticField(0x516A0);
		}
		::System::String* smGuid; // 0x58
		::System::String* smId; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::LayerConfig*>* layerMap; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::StateNodeConfig*>* nodeMap; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::TransitionConfig*>* transitionMap; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessStateMachine::GlobalParamsConfig* get_globalParamsConfig()
		{
			return ((::MoleMole::ChessStateMachine::GlobalParamsConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_GET_GLOBALPARAMSCONFIG_OFFSET))(this);
		}

		::MoleMole::ChessStateMachine::StateNodeConfig* GetNodeConfig(::System::String* guid)
		{
			return ((::MoleMole::ChessStateMachine::StateNodeConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_GETNODECONFIG_OFFSET))(this, guid);
		}

		::MoleMole::ChessStateMachine::LayerConfig* GetDefaultConfig()
		{
			return ((::MoleMole::ChessStateMachine::LayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_GETDEFAULTCONFIG_OFFSET))(this);
		}
	};
}
