#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EErrorCodes.h"
#include "unitysdk/Simplygon/spProcessingObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spReductionSettings; }
namespace Simplygon { class spScene; }

#define SIMPLYGON_SPREDUCTIONPROCESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18373740)
#define SIMPLYGON_SPREDUCTIONPROCESSOR_GETREDUCTIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18373CE0)
#define SIMPLYGON_SPREDUCTIONPROCESSOR_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x183738D0)
#define SIMPLYGON_SPREDUCTIONPROCESSOR_SETSCENE_OFFSET UNITYSDK_OFFSET(0x18373AD0)
#define SIMPLYGON_SPREDUCTIONPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18360010)

namespace Simplygon
{
	inline static constexpr unsigned int spReductionProcessor_TypeDefinitionIndex = 29566;

	class spReductionProcessor : public ::Simplygon::spProcessingObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREDUCTIONPROCESSOR__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREDUCTIONPROCESSOR_DISPOSE_OFFSET))(this, disposing);
		}

		::Simplygon::EErrorCodes RunProcessing()
		{
			return ((::Simplygon::EErrorCodes(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREDUCTIONPROCESSOR_RUNPROCESSING_OFFSET))(this);
		}

		::System::Void SetScene(::Simplygon::spScene* value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spScene*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREDUCTIONPROCESSOR_SETSCENE_OFFSET))(this, value);
		}

		::Simplygon::spReductionSettings* GetReductionSettings()
		{
			return ((::Simplygon::spReductionSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREDUCTIONPROCESSOR_GETREDUCTIONSETTINGS_OFFSET))(this);
		}
	};
}
