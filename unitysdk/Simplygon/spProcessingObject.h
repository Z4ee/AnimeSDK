#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPPROCESSINGOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18370360)
#define SIMPLYGON_SPPROCESSINGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18370260)

namespace Simplygon
{
	inline static constexpr unsigned int spProcessingObject_TypeDefinitionIndex = 29555;

	class spProcessingObject : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPROCESSINGOBJECT__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPROCESSINGOBJECT_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
