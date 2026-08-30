#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RedDot/RedDotCheckContext_1.h"
#include "unitysdk/Struct_2_E783A7CB5DB08322.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_338;
class Class_1_6045926B515B7744;
class Class_1_F512C5C8F4EF9039;
namespace RPG::Client::RedDot { template <typename T> class RedDotState_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int RedDotChecker_1_TypeDefinitionIndex = 78678;

	template <typename TInstanceKey>
	class RedDotChecker_1 : public ::System::Object
	{
	public:
		::RPG::Client::RedDot::RedDotState_1<TInstanceKey>* _InstanceKeyState; // 0x0
		::System::Action_1<::System::String*>* _OnDirty; // 0x0
		::System::String* _Key_k__BackingField; // 0x0
		::Class_1_F512C5C8F4EF9039* _Node_k__BackingField; // 0x0
	};
}
