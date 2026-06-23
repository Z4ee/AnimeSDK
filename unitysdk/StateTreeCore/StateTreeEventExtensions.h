#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/StateTreeCore/StateTreeEvent.h"
#include "unitysdk/System/Object.h"

#define STATETREECORE_STATETREEEVENTEXTENSIONS_GETTAG_OFFSET UNITYSDK_OFFSET(0x1E1D4720)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeEventExtensions_TypeDefinitionIndex = 30924;

	class StateTreeEventExtensions : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FGameplayTag& GetTag(::StateTreeCore::StateTreeEvent& self)
		{
			return ((::Foundation::Unreal::FGameplayTag&(*)(::StateTreeCore::StateTreeEvent&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTEXTENSIONS_GETTAG_OFFSET))(self);
		}
	};
}
