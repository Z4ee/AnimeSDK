#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickSequencer_1_Unit.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class TickSequencer_1_UnitComparer; }

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_UnitComparer_TypeDefinitionIndex = 8600;

	template <typename TTickingGroup>
	class TickSequencer_1_UnitComparer : public ::System::Object
	{
	public:
		static ::Foundation::TickSequencer_1_UnitComparer<TTickingGroup>** StaticGet_Instance()
		{
			return (::Foundation::TickSequencer_1_UnitComparer<TTickingGroup>**)Il2CppClass::FromTypeDefinitionIndex(TickSequencer_1_UnitComparer_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
