#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLEXBUFFERS_OFFSETARRAYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B21C160)
#define FLEXBUFFERS_OFFSETARRAYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B21C1D0)
#define FLEXBUFFERS_OFFSETARRAYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B20C7A0)

namespace FlexBuffers
{
	inline static constexpr unsigned int OffsetArrayComparer_TypeDefinitionIndex = 8755;

	class OffsetArrayComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_OFFSETARRAYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::Il2CppArray<::System::Int64>* x, ::Il2CppArray<::System::Int64>* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int64>*, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_OFFSETARRAYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::Il2CppArray<::System::Int64>* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_OFFSETARRAYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
