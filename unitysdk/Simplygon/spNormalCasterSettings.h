#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EImageOutputFormat.h"
#include "unitysdk/Simplygon/spMaterialCasterSettings.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace System { class String; }

#define SIMPLYGON_SPNORMALCASTERSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18372170)
#define SIMPLYGON_SPNORMALCASTERSETTINGS_SETGENERATETANGENTSPACENORMALS_OFFSET UNITYSDK_OFFSET(0x18372710)
#define SIMPLYGON_SPNORMALCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET UNITYSDK_OFFSET(0x18372300)
#define SIMPLYGON_SPNORMALCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x18372510)
#define SIMPLYGON_SPNORMALCASTERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18372070)

namespace Simplygon
{
	inline static constexpr unsigned int spNormalCasterSettings_TypeDefinitionIndex = 29562;

	class spNormalCasterSettings : public ::Simplygon::spMaterialCasterSettings
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x48

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTERSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTERSETTINGS_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetMaterialChannel(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTERSETTINGS_SETMATERIALCHANNEL_OFFSET))(this, value);
		}

		::System::Void SetOutputImageFileFormat(::Simplygon::EImageOutputFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::EImageOutputFormat))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTERSETTINGS_SETOUTPUTIMAGEFILEFORMAT_OFFSET))(this, value);
		}

		::System::Void SetGenerateTangentSpaceNormals(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPNORMALCASTERSETTINGS_SETGENERATETANGENTSPACENORMALS_OFFSET))(this, value);
		}
	};
}
