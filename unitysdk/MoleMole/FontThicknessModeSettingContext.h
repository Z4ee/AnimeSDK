#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FontThicknessMode.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_FONTTHICKNESSMODESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1261C360)

namespace MoleMole
{
	inline static constexpr unsigned int FontThicknessModeSettingContext_TypeDefinitionIndex = 61372;

	class FontThicknessModeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::FontThicknessMode FontMode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FONTTHICKNESSMODESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
