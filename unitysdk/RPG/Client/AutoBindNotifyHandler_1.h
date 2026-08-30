#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6AB058C99D483032.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }

namespace RPG::Client
{
	inline static constexpr unsigned int AutoBindNotifyHandler_1_TypeDefinitionIndex = 73052;

	template <typename T>
	class AutoBindNotifyHandler_1 : public ::Class_1_6AB058C99D483032
	{
	public:
		::System::Action_1<T>* Delegate; // 0x0
	};
}
