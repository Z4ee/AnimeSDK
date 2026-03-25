#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPSETTINGSOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1836BA10)
#define SIMPLYGON_SPSETTINGSOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1836B780)

namespace Simplygon
{
	inline static constexpr unsigned int spSettingsObject_TypeDefinitionIndex = 29556;

	class spSettingsObject : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSETTINGSOBJECT__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSETTINGSOBJECT_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
