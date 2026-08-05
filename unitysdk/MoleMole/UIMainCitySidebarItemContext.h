#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIMAINCITYSIDEBARITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x168CC080)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarItemContext_TypeDefinitionIndex = 78704;

	class UIMainCitySidebarItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* ParentPath; // 0x28
		::System::Boolean PreviewMode; // 0x30
		::System::Int32 ItemId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
