#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { template <typename T> class IRtFlagListener_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtFlagRef_1_TypeDefinitionIndex = 51520;

	template <typename T>
	class RtFlagRef_1 : public ::System::Object
	{
	public:
		::System::Int32 RefCount; // 0x0
		::System::Collections::Generic::List_1<::RPG::GameCore::IRtFlagListener_1<T>*>* _Listeners; // 0x0
	};
}
