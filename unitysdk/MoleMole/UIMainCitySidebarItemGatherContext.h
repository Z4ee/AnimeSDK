#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIMAINCITYSIDEBARITEMGATHERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4CD20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarItemGatherContext_TypeDefinitionIndex = 53643;

	class UIMainCitySidebarItemGatherContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* ParentPath; // 0x28
		::System::Int32 TotalGroupCount; // 0x30
		::System::Boolean IsLast; // 0x34
		::System::Boolean PreviewMode; // 0x35
		::System::Boolean IsShowTitle; // 0x36
		::System::Int32 MaxCount; // 0x38
		::System::Int32 TotalLineCount; // 0x3C
		::System::Int32 StartIndex; // 0x40
		::System::Int32 GroupId; // 0x44
		::System::Int32 GroupIndex; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARITEMGATHERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
