#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Buffers { template <typename T> class IMemoryOwner_1; }
namespace System::Buffers { template <typename T> class MemoryPool_1; }

namespace System::Buffers
{
	inline static constexpr unsigned int MemoryPool_1_TypeDefinitionIndex = 4978;

	template <typename T>
	class MemoryPool_1 : public ::System::Object
	{
	public:
		static ::System::Buffers::MemoryPool_1<T>** StaticGet_s_shared()
		{
			return (::System::Buffers::MemoryPool_1<T>**)Il2CppClass::FromTypeDefinitionIndex(MemoryPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
