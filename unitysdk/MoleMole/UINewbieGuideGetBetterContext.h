#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UINEWBIEGUIDEGETBETTERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1987A830)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideGetBetterContext_TypeDefinitionIndex = 62687;

	class UINewbieGuideGetBetterContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 selectTab; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEGETBETTERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
