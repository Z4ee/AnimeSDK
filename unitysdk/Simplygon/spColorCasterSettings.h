#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EImageOutputFormat.h"
#include "unitysdk/Simplygon/spMaterialCasterSettings.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace System { class String; }

#define SIMPLYGON_SPCOLORCASTERSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1836D760)
#define SIMPLYGON_SPCOLORCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET UNITYSDK_OFFSET(0x1836DA80)
#define SIMPLYGON_SPCOLORCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x1836DC90)
#define SIMPLYGON_SPCOLORCASTERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1836D490)

namespace Simplygon
{
	inline static constexpr unsigned int spColorCasterSettings_TypeDefinitionIndex = 29560;

	class spColorCasterSettings : public ::Simplygon::spMaterialCasterSettings
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x48

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTERSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTERSETTINGS_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetMaterialChannel(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET))(this, value);
		}

		::System::Void SetOutputImageFileFormat(::Simplygon::EImageOutputFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::EImageOutputFormat))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET))(this, value);
		}
	};
}
