#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spArray.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPVALUEARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18377C10)
#define SIMPLYGON_SPVALUEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x183778B0)

namespace Simplygon
{
	inline static constexpr unsigned int spValueArray_TypeDefinitionIndex = 29550;

	class spValueArray : public ::Simplygon::spArray
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPVALUEARRAY__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPVALUEARRAY_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
