#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CircularBuffer_1_TypeDefinitionIndex = 37638;

	template <typename T>
	class CircularBuffer_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_AutoReset()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CircularBuffer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 _arrayMask; // 0x0
		::System::Int32 _nextIndex; // 0x0
		::System::Int32 _version; // 0x0
		::Il2CppArray<T>* _buffer; // 0x0
		::System::Int32 _Capacity_k__BackingField; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
