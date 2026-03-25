#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EStopCondition.h"
#include "unitysdk/Simplygon/spSettingsObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPREDUCTIONSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183740F0)
#define SIMPLYGON_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETS_OFFSET UNITYSDK_OFFSET(0x18374280)
#define SIMPLYGON_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETTRIANGLERATIO_OFFSET UNITYSDK_OFFSET(0x183744A0)
#define SIMPLYGON_SPREDUCTIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18373F20)

namespace Simplygon
{
	inline static constexpr unsigned int spReductionSettings_TypeDefinitionIndex = 29563;

	class spReductionSettings : public ::Simplygon::spSettingsObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREDUCTIONSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREDUCTIONSETTINGS_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetReductionTargets(::Simplygon::EStopCondition stopCondition, ::System::Boolean useTriangleRatio, ::System::Boolean useTriangleCount, ::System::Boolean useMaxDeviation, ::System::Boolean useOnScreenSize)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::EStopCondition, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETS_OFFSET))(this, stopCondition, useTriangleRatio, useTriangleCount, useMaxDeviation, useOnScreenSize);
		}

		::System::Void SetReductionTargetTriangleRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREDUCTIONSETTINGS_SETREDUCTIONTARGETTRIANGLERATIO_OFFSET))(this, value);
		}
	};
}
