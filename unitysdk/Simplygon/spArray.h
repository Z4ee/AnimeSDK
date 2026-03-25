#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1836B420)
#define SIMPLYGON_SPARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1836B310)

namespace Simplygon
{
	inline static constexpr unsigned int spArray_TypeDefinitionIndex = 29549;

	class spArray : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPARRAY__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPARRAY_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
