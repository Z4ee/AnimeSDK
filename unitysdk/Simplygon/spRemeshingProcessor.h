#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EErrorCodes.h"
#include "unitysdk/Simplygon/spProcessingObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spMappingImage; }
namespace Simplygon { class spMappingImageSettings; }
namespace Simplygon { class spRemeshingSettings; }
namespace Simplygon { class spScene; }

#define SIMPLYGON_SPREMESHINGPROCESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183746A0)
#define SIMPLYGON_SPREMESHINGPROCESSOR_GETMAPPINGIMAGESETTINGS_OFFSET UNITYSDK_OFFSET(0x18375370)
#define SIMPLYGON_SPREMESHINGPROCESSOR_GETMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x18374C40)
#define SIMPLYGON_SPREMESHINGPROCESSOR_GETREMESHINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x18374F60)
#define SIMPLYGON_SPREMESHINGPROCESSOR_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x18374830)
#define SIMPLYGON_SPREMESHINGPROCESSOR_SETSCENE_OFFSET UNITYSDK_OFFSET(0x18374A30)
#define SIMPLYGON_SPREMESHINGPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x183604A0)

namespace Simplygon
{
	inline static constexpr unsigned int spRemeshingProcessor_TypeDefinitionIndex = 29568;

	class spRemeshingProcessor : public ::Simplygon::spProcessingObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREMESHINGPROCESSOR__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREMESHINGPROCESSOR_DISPOSE_OFFSET))(this, disposing);
		}

		::Simplygon::EErrorCodes RunProcessing()
		{
			return ((::Simplygon::EErrorCodes(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREMESHINGPROCESSOR_RUNPROCESSING_OFFSET))(this);
		}

		::System::Void SetScene(::Simplygon::spScene* value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spScene*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREMESHINGPROCESSOR_SETSCENE_OFFSET))(this, value);
		}

		::Simplygon::spMappingImage* GetMappingImage()
		{
			return ((::Simplygon::spMappingImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREMESHINGPROCESSOR_GETMAPPINGIMAGE_OFFSET))(this);
		}

		::Simplygon::spRemeshingSettings* GetRemeshingSettings()
		{
			return ((::Simplygon::spRemeshingSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREMESHINGPROCESSOR_GETREMESHINGSETTINGS_OFFSET))(this);
		}

		::Simplygon::spMappingImageSettings* GetMappingImageSettings()
		{
			return ((::Simplygon::spMappingImageSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREMESHINGPROCESSOR_GETMAPPINGIMAGESETTINGS_OFFSET))(this);
		}
	};
}
