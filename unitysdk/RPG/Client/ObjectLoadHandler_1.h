#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ObjectLoadHandler_1_TypeDefinitionIndex = 33870;

	template <typename TObj>
	class ObjectLoadHandler_1 : public ::System::Object
	{
	public:
		TObj Obj; // 0x0
		::System::Action_1<TObj>* OnLoad; // 0x0
		::System::Action_1<TObj>* OnPostLoad; // 0x0
		::System::Int32 _index; // 0x0
		::System::UInt32 _loadFlags; // 0x0
		::System::UInt32 _desiredLoadFlags; // 0x0
	};
}
