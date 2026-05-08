#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_5DA2E7556103D5A3_336;

#define MOLEMOLE_UIHADALZONE_COMMON_UILINEUPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1687F870)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_UILineupContext_TypeDefinitionIndex = 54849;

	class UIHadalZone_Common_UILineupContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_5DA2E7556103D5A3_336* lineupZoneInfo; // 0x28
		::System::Boolean isBattleResultChange; // 0x30
		::System::Boolean usePrevLayerHistory; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_UILINEUPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
