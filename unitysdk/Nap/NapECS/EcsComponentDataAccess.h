#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace Nap::NapECS { class EcsWorld; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentDataAccess_TypeDefinitionIndex = 37268;

	class EcsComponentDataAccess : public ::System::Object
	{
	public:
	};
}
