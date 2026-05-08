#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickTime.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class TickFunction_1___c; }

namespace Foundation
{
	inline static constexpr unsigned int TickFunction_1___c_TypeDefinitionIndex = 9191;

	template <typename TTickingGroup>
	class TickFunction_1___c : public ::System::Object
	{
	public:
		static ::Foundation::TickFunction_1___c<TTickingGroup>** StaticGet___9()
		{
			return (::Foundation::TickFunction_1___c<TTickingGroup>**)Il2CppClass::FromTypeDefinitionIndex(TickFunction_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
