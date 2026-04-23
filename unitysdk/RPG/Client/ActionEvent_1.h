#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_1_18B0677ECDC1AEEB;
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActionEvent_1_TypeDefinitionIndex = 54991;

	template <typename T1>
	class ActionEvent_1 : public ::System::Object
	{
	public:
		::System::Action_1<T1>* _Action; // 0x0
		::System::String* _Name; // 0x0
		::Class_0_16E4307DCC419505_557* _Progress; // 0x0
		::Class_1_18B0677ECDC1AEEB* _RootProgress; // 0x0
	};
}
