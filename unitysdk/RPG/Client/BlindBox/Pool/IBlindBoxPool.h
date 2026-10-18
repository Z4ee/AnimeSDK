#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/PoolClosedReason.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::BlindBox::Pool { class IBlindBoxSet; }
namespace RPG::Client::BlindBox::Pool { class IPoolContents; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int IBlindBoxPool_TypeDefinitionIndex = 74946;

	class IBlindBoxPool
	{
	public:
	};
}
