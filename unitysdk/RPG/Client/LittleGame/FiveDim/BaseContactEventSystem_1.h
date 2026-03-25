#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseContactEventSystem_1_TypeDefinitionIndex = 62758;

	template <typename T>
	class BaseContactEventSystem_1 : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<T>* _ContactEventEmitterGroup; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _ContactPlayerEntities; // 0x0
	};
}
