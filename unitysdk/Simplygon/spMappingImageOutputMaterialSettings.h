#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spSettingsObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1836E2E0)
#define SIMPLYGON_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0x1836E670)
#define SIMPLYGON_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREWIDTH_OFFSET UNITYSDK_OFFSET(0x1836E470)
#define SIMPLYGON_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1836E110)

namespace Simplygon
{
	inline static constexpr unsigned int spMappingImageOutputMaterialSettings_TypeDefinitionIndex = 29565;

	class spMappingImageOutputMaterialSettings : public ::Simplygon::spSettingsObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetTextureWidth(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREWIDTH_OFFSET))(this, value);
		}

		::System::Void SetTextureHeight(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGEOUTPUTMATERIALSETTINGS_SETTEXTUREHEIGHT_OFFSET))(this, value);
		}
	};
}
