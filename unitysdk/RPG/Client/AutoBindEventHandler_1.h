#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_11826CF7B776C859.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_0_16E4307DCC419505_401;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }

namespace RPG::Client
{
	inline static constexpr unsigned int AutoBindEventHandler_1_TypeDefinitionIndex = 68306;

	template <typename T>
	class AutoBindEventHandler_1 : public ::Class_1_11826CF7B776C859
	{
	public:
		::System::Action_1<T>* Delegate; // 0x0
	};
}
