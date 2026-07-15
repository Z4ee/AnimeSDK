#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

namespace Entitas
{
	inline static constexpr unsigned int Job_1_TypeDefinitionIndex = 9715;

	template <typename TEntity>
	class Job_1 : public ::System::Object
	{
	public:
		::Il2CppArray<TEntity>* entities; // 0x0
		::System::Int32 from; // 0x0
		::System::Int32 to; // 0x0
		::System::Exception* exception; // 0x0
	};
}
