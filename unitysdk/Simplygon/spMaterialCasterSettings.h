#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spSettingsObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPMATERIALCASTERSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1836D8F0)
#define SIMPLYGON_SPMATERIALCASTERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1836D590)

namespace Simplygon
{
	inline static constexpr unsigned int spMaterialCasterSettings_TypeDefinitionIndex = 29558;

	class spMaterialCasterSettings : public ::Simplygon::spSettingsObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIALCASTERSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIALCASTERSETTINGS_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
