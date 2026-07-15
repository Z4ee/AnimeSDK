#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int RpcObjectPool_1_TypeDefinitionIndex = 35344;

	template <typename T>
	class RpcObjectPool_1 : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::ConcurrentQueue_1<T>* _pool; // 0x0
		::System::Action_1<T>* _onReturn; // 0x0
	};
}
