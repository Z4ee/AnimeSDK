#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spProcessingObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPMATERIALCASTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1836C2F0)
#define SIMPLYGON_SPMATERIALCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1836BF90)

namespace Simplygon
{
	inline static constexpr unsigned int spMaterialCaster_TypeDefinitionIndex = 29557;

	class spMaterialCaster : public ::Simplygon::spProcessingObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIALCASTER__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIALCASTER_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
