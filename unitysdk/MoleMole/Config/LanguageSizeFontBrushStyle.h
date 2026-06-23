#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_LANGUAGESIZEFONTBRUSHSTYLE_GET_BOLDNESS_OFFSET UNITYSDK_OFFSET(0x7938B0)
#define MOLEMOLE_CONFIG_LANGUAGESIZEFONTBRUSHSTYLE_GET_SHARPNESS_OFFSET UNITYSDK_OFFSET(0x793930)
#define MOLEMOLE_CONFIG_LANGUAGESIZEFONTBRUSHSTYLE_SET_BOLDNESS_OFFSET UNITYSDK_OFFSET(0x7938C0)
#define MOLEMOLE_CONFIG_LANGUAGESIZEFONTBRUSHSTYLE_SET_SHARPNESS_OFFSET UNITYSDK_OFFSET(0x793940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageSizeFontBrushStyle_TypeDefinitionIndex = 48838;

	struct alignas(4) LanguageSizeFontBrushStyle
	{
		// static const ::System::Single BOLDNESS_DEFAULT; // 0x0
		// static const ::System::Single SHARPNESS_DEFAULT; // 0x0
		::System::Int32 fontSize; // 0x10
		::System::Single _boldnessOffset; // 0x14
		::System::Single _sharpnessOffset; // 0x18

		::System::Single get_Boldness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGESIZEFONTBRUSHSTYLE_GET_BOLDNESS_OFFSET))(this);
		}

		::System::Void set_Boldness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGESIZEFONTBRUSHSTYLE_SET_BOLDNESS_OFFSET))(this, a1);
		}

		::System::Single get_Sharpness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGESIZEFONTBRUSHSTYLE_GET_SHARPNESS_OFFSET))(this);
		}

		::System::Void set_Sharpness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGESIZEFONTBRUSHSTYLE_SET_SHARPNESS_OFFSET))(this, a1);
		}
	};
}
