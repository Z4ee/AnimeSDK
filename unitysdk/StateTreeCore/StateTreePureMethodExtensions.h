#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/CompactStateTreeState.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"

#define STATETREECORE_STATETREEPUREMETHODEXTENSIONS_GETSTATEFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x1FC30E70)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePureMethodExtensions_TypeDefinitionIndex = 31518;

	class StateTreePureMethodExtensions : public ::System::Object
	{
	public:
		static ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::CompactStateTreeState> GetStateFromHandle(::StateTreeCore::StateTree& self, ::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::CompactStateTreeState>(*)(::StateTreeCore::StateTree&, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPUREMETHODEXTENSIONS_GETSTATEFROMHANDLE_OFFSET))(self, stateHandle);
		}
	};
}
