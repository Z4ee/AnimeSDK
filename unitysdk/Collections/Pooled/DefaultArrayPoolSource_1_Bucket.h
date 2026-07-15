#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/SpinLockWithNoCriticalRegion.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled
{
	inline static constexpr unsigned int DefaultArrayPoolSource_1_Bucket_TypeDefinitionIndex = 5070;

	template <typename T>
	class DefaultArrayPoolSource_1_Bucket : public ::System::Object
	{
	public:
		::Collections::Pooled::SpinLockWithNoCriticalRegion _spinlock; // 0x0
		::Il2CppArray<::Il2CppArray<T>*>* _arr; // 0x0
		::System::Int32 _arrLength; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _minimumCount; // 0x0
		// static const ::System::Int32 DefaultMinimum = 0x10; // 0x0
		// static const ::System::Int32 DefaultDropReservedNum = 0x80; // 0x0
		::System::Boolean _isExtending; // 0x0
	};
}
