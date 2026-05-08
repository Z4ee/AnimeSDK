#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

namespace System { class String; }

#define MOLEMOLE_GENERALGRAPHICQUALITYSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x16D4A0B0)
#define MOLEMOLE_GENERALGRAPHICQUALITYSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D4A100)
#define MOLEMOLE_GENERALGRAPHICQUALITYSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x16D4A120)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralGraphicQualitySettingContext_TypeDefinitionIndex = 58919;

	class GeneralGraphicQualitySettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::String* QualityKey; // 0x28
		::System::Boolean IsCustom; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALGRAPHICQUALITYSETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALGRAPHICQUALITYSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALGRAPHICQUALITYSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
