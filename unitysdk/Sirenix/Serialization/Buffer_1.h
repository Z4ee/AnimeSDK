#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { template <typename T> class Buffer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Buffer_1_TypeDefinitionIndex = 7494;

	template <typename T>
	class Buffer_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Buffer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<::Sirenix::Serialization::Buffer_1<T>*>** StaticGet_FreeBuffers()
		{
			return (::System::Collections::Generic::List_1<::Sirenix::Serialization::Buffer_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(Buffer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 count; // 0x0
		::Il2CppArray<T>* array; // 0x0
		::System::Boolean isFree; // 0x0
	};
}
