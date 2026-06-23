#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIURBANMAPROLECARDROWITEMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1157CFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRoleCardRowItemWidgetContext_TypeDefinitionIndex = 42649;

	class UIUrbanMapRoleCardRowItemWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Icon; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPROLECARDROWITEMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
