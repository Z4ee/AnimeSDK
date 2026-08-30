#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1331;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class String; }

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int RedDotViewModel_1_TypeDefinitionIndex = 78710;

	template <typename TInstanceKey>
	class RedDotViewModel_1 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1331* _RedDotService; // 0x0
		::System::Action* _OnServiceKeyChanged; // 0x0
		::System::String* _Key; // 0x0
		TInstanceKey _InstanceKey; // 0x0
		::R3::ReactiveProperty_1<::RPG::GameCore::RedDotType>* _RedDotType_k__BackingField; // 0x0
	};
}
