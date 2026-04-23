#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E8C81730380D9B3A.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }

namespace RPG::Client
{
	inline static constexpr unsigned int AutoBindNotifyHandler_1_TypeDefinitionIndex = 67352;

	template <typename T>
	class AutoBindNotifyHandler_1 : public ::Class_1_E8C81730380D9B3A
	{
	public:
		::System::Action_1<T>* Delegate; // 0x0
	};
}
