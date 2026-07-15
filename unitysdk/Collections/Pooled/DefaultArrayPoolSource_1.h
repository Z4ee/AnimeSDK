#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ArrayPool_1.h"

namespace Collections::Pooled { template <typename T> class DefaultArrayPoolSource_1; }
namespace Collections::Pooled { template <typename T> class DefaultArrayPoolSource_1_Bucket; }
namespace System { class Object; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int DefaultArrayPoolSource_1_TypeDefinitionIndex = 5069;

	template <typename T>
	class DefaultArrayPoolSource_1 : public ::System::Buffers::ArrayPool_1<T>
	{
	public:
		static ::Collections::Pooled::DefaultArrayPoolSource_1<T>** StaticGet__shared()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<T>**)Il2CppClass::FromTypeDefinitionIndex(DefaultArrayPoolSource_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 MinimumArrayLength = 0x10; // 0x0
		// static const ::System::Int32 DefaultArrayLength = 0x100000; // 0x0
		// static const ::System::Int32 MaximumArrayLength = 0x40000000; // 0x0
		::Il2CppArray<::Collections::Pooled::DefaultArrayPoolSource_1_Bucket<T>*>* _buckets; // 0x0
		::System::Object* _bucketsInitializeLock; // 0x0
		::System::Int32 _maxLength; // 0x0
	};
}
