#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_1_FBFA092366368ABD;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActionEvent_3_TypeDefinitionIndex = 56964;

	template <typename T1, typename T2, typename T3>
	class ActionEvent_3 : public ::System::Object
	{
	public:
		::System::Action_3<T1, T2, T3>* _Action; // 0x0
		::System::String* _Name; // 0x0
		::Class_0_16E4307DCC419505_614* _Progress; // 0x0
		::Class_1_FBFA092366368ABD* _RootProgress; // 0x0
	};
}
