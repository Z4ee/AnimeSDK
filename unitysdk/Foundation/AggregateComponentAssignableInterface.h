#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AggregateComponentAssignableInterface___inlineTypes_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

#define FOUNDATION_AGGREGATECOMPONENTASSIGNABLEINTERFACE_GET_OFFSET UNITYSDK_OFFSET(0xA8E050)
#define FOUNDATION_AGGREGATECOMPONENTASSIGNABLEINTERFACE_ISASSIGNABLE_OFFSET UNITYSDK_OFFSET(0xA8E100)
#define FOUNDATION_AGGREGATECOMPONENTASSIGNABLEINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8E040)

namespace Foundation
{
	inline static constexpr unsigned int AggregateComponentAssignableInterface_TypeDefinitionIndex = 8740;

	struct alignas(8) AggregateComponentAssignableInterface
	{
		::System::Int32 Count; // 0x10
		::Il2CppArray<::System::Int64>* _secondaryTypes; // 0x18
		::Foundation::AggregateComponentAssignableInterface___inlineTypes_e__FixedBuffer _inlineTypes; // 0x20

		::System::Void _ctor(::System::Type* type, ::System::Type* componentInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_AGGREGATECOMPONENTASSIGNABLEINTERFACE__CTOR_OFFSET))(this, type, componentInterface);
		}

		::System::Int64 Get(::System::Int32 index)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_AGGREGATECOMPONENTASSIGNABLEINTERFACE_GET_OFFSET))(this, index);
		}

		::System::Boolean IsAssignable(::System::Int64 typeHash)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_AGGREGATECOMPONENTASSIGNABLEINTERFACE_ISASSIGNABLE_OFFSET))(this, typeHash);
		}
	};
}
