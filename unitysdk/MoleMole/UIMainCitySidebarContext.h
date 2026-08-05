#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAINCITYSIDEBARCONTEXT_COPY_OFFSET UNITYSDK_OFFSET(0x179EB210)
#define MOLEMOLE_UIMAINCITYSIDEBARCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179EB300)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarContext_TypeDefinitionIndex = 45625;

	class UIMainCitySidebarContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 CurrentSidebarFocusId; // 0x28
		::System::Boolean FromStore; // 0x2C
		::System::Boolean FromBack; // 0x2D
		::System::Boolean PreviewMode; // 0x2E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARCONTEXT__CTOR_OFFSET))(this);
		}

		::MoleMole::UIMainCitySidebarContext* Copy()
		{
			return ((::MoleMole::UIMainCitySidebarContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARCONTEXT_COPY_OFFSET))(this);
		}
	};
}
