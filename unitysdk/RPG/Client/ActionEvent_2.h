#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_1_FBFA092366368ABD;
namespace RPG::Client { template <typename T1, typename T2> class ActionEvent_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActionEvent_2_TypeDefinitionIndex = 56963;

	template <typename T1, typename T2>
	class ActionEvent_2 : public ::System::Object
	{
	public:
		::System::Action_2<T1, T2>* _Action; // 0x0
		::System::String* _Name; // 0x0
		::Class_0_16E4307DCC419505_614* _Progress; // 0x0
		::Class_1_FBFA092366368ABD* _RootProgress; // 0x0
	};
}
