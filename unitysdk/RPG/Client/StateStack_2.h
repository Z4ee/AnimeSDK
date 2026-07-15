#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class StateStack_2_StateInfo; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int StateStack_2_TypeDefinitionIndex = 67028;

	template <typename T, typename KEY>
	class StateStack_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::StateStack_2_StateInfo<T, KEY>*>* stateInfos; // 0x0
		::System::Func_1<T>* mGetter; // 0x0
		::System::Action_1<T>* mSetter; // 0x0
		::System::Boolean _AlwaysInvoke_k__BackingField; // 0x0
	};
}
