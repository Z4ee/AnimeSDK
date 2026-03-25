#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EErrorCodes.h"
#include "unitysdk/Simplygon/spMaterialCaster.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spMappingImage; }
namespace Simplygon { class spMaterialTable; }
namespace Simplygon { class spNormalCasterSettings; }
namespace Simplygon { class spTextureTable; }
namespace System { class String; }

#define SIMPLYGON_SPNORMALCASTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18370F30)
#define SIMPLYGON_SPNORMALCASTER_GETNORMALCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x18371D50)
#define SIMPLYGON_SPNORMALCASTER_GETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x18371900)
#define SIMPLYGON_SPNORMALCASTER_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x18371B50)
#define SIMPLYGON_SPNORMALCASTER_SETMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x183714E0)
#define SIMPLYGON_SPNORMALCASTER_SETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x183716F0)
#define SIMPLYGON_SPNORMALCASTER_SETSOURCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x183712D0)
#define SIMPLYGON_SPNORMALCASTER_SETSOURCETEXTURES_OFFSET UNITYSDK_OFFSET(0x183710C0)
#define SIMPLYGON_SPNORMALCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1835FC50)

namespace Simplygon
{
	inline static constexpr unsigned int spNormalCaster_TypeDefinitionIndex = 29561;

	class spNormalCaster : public ::Simplygon::spMaterialCaster
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x48

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTER__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetSourceTextures(::Simplygon::spTextureTable* value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spTextureTable*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTER_SETSOURCETEXTURES_OFFSET))(this, value);
		}

		::System::Void SetSourceMaterials(::Simplygon::spMaterialTable* value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spMaterialTable*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTER_SETSOURCEMATERIALS_OFFSET))(this, value);
		}

		::System::Void SetMappingImage(::Simplygon::spMappingImage* value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spMappingImage*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTER_SETMAPPINGIMAGE_OFFSET))(this, value);
		}

		::System::Void SetOutputFilePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTER_SETOUTPUTFILEPATH_OFFSET))(this, value);
		}

		::System::String* GetOutputFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTER_GETOUTPUTFILEPATH_OFFSET))(this);
		}

		::Simplygon::EErrorCodes RunProcessing()
		{
			return ((::Simplygon::EErrorCodes(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTER_RUNPROCESSING_OFFSET))(this);
		}

		::Simplygon::spNormalCasterSettings* GetNormalCasterSettings()
		{
			return ((::Simplygon::spNormalCasterSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTER_GETNORMALCASTERSETTINGS_OFFSET))(this);
		}
	};
}
