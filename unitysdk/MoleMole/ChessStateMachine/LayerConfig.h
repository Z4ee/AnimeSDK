#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/ConfigBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_LAYERCONFIG_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x122DF980)
#define MOLEMOLE_CHESSSTATEMACHINE_LAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x122DF9C0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int LayerConfig_TypeDefinitionIndex = 79795;

	class LayerConfig : public ::MoleMole::ChessStateMachine::ConfigBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* nodeGuids; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* transitionGuids; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LAYERCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessStateMachine::LayerConfig* DeepCopy()
		{
			return ((::MoleMole::ChessStateMachine::LayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LAYERCONFIG_DEEPCOPY_OFFSET))(this);
		}
	};
}
