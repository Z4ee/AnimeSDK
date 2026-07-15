#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { template <typename T> class IGroup_1; }
namespace Entitas { template <typename T> class Job_1; }

namespace Entitas
{
	inline static constexpr unsigned int JobSystem_1_TypeDefinitionIndex = 9714;

	template <typename TEntity>
	class JobSystem_1 : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<TEntity>* _group; // 0x0
		::System::Int32 _threads; // 0x0
		::Il2CppArray<::Entitas::Job_1<TEntity>*>* _jobs; // 0x0
		::System::Int32 _threadsRunning; // 0x0
	};
}
