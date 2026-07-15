#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ArrayPool_1.h"

namespace System::Buffers { template <typename T> class DefaultArrayPool_1_Bucket; }

namespace System::Buffers
{
	inline static constexpr unsigned int DefaultArrayPool_1_TypeDefinitionIndex = 3742;

	template <typename T>
	class DefaultArrayPool_1 : public ::System::Buffers::ArrayPool_1<T>
	{
	public:
		static ::Il2CppArray<T>** StaticGet_s_emptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(DefaultArrayPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::System::Buffers::DefaultArrayPool_1_Bucket<T>*>* _buckets; // 0x0
	};
}
