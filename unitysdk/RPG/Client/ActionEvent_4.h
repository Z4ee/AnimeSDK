#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_1_18B0677ECDC1AEEB;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActionEvent_4_TypeDefinitionIndex = 48249;

	template <typename T1, typename T2, typename T3, typename T4>
	class ActionEvent_4 : public ::System::Object
	{
	public:
		::System::Action_4<T1, T2, T3, T4>* _Action; // 0x0
		::System::String* _Name; // 0x0
		::Class_0_16E4307DCC419505_478* _Progress; // 0x0
		::Class_1_18B0677ECDC1AEEB* _RootProgress; // 0x0
	};
}
